#include<visel/vis_routines.hpp>

#include<vtkLineSource.h>
#include<vtkSphereSource.h>
#include<vtkConeSource.h>
#include<vtkPolyDataMapper.h>
#include<vtkActor.h>
#include<vtkRenderer.h>
#include<vtkProperty.h>
#include<vtkSmartPointer.h>

const auto arbitrary_factor = 1.0;

void add_axes(vtkSmartPointer<vtkRenderer> renderer) {
  struct AxeInfo{
    std::array<double, 3> direction;
    std::array<double, 3> color;
  };
  const std::vector<AxeInfo> axe_infos {{{1.0, 0.0, 0.0}, {1.0, 0.0, 0.0}},
                                        {{0.0, 1.0, 0.0}, {0.0, 1.0, 0.0}},
                                        {{0.0, 0.0, 1.0}, {0.0, 0.0, 1.0}}};
  for (const auto& axe_info : axe_infos) {
    // Line:
    vtkSmartPointer<vtkLineSource> lineSource = 
      vtkSmartPointer<vtkLineSource>::New();
    lineSource->SetPoint1(0.0,0.0,0.0);
    lineSource->SetPoint2(const_cast<double*>(axe_info.direction.data()));
    lineSource->Update();
    vtkSmartPointer<vtkPolyDataMapper> lineMapper =
      vtkSmartPointer<vtkPolyDataMapper>::New();
    lineMapper->SetInputConnection(lineSource->GetOutputPort());
      vtkSmartPointer<vtkActor> lineActor =
    vtkSmartPointer<vtkActor>::New();
      lineActor->SetMapper(lineMapper);
      lineActor->GetProperty()->SetLineWidth(2);
      lineActor->GetProperty()->SetColor(const_cast<double*>(axe_info.color.data()));
    renderer->AddActor(lineActor);
    // Cone:
    vtkSmartPointer<vtkConeSource> coneSource =
      vtkSmartPointer<vtkConeSource>::New();
    coneSource->SetHeight(0.2);
    coneSource->SetRadius(0.1);
    coneSource->SetResolution(32);
    coneSource->SetCenter(const_cast<double*>(axe_info.direction.data()));
    coneSource->SetDirection(const_cast<double*>(axe_info.direction.data()));
    coneSource->Update();
    vtkSmartPointer<vtkPolyDataMapper> coneMapper =
      vtkSmartPointer<vtkPolyDataMapper>::New();
    coneMapper->SetInputConnection(coneSource->GetOutputPort());
    vtkSmartPointer<vtkActor> coneActor =
      vtkSmartPointer<vtkActor>::New();
    coneActor->SetMapper(coneMapper);
    coneActor->GetProperty()->SetColor(const_cast<double*>(axe_info.color.data()));
    renderer->AddActor(coneActor);
  }
}

void add_bonds(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords) {
  cords.each_col([&renderer, &cords](const auto& cords_i) {
  //for (auto& cords_i = cords.: cords) {
    cords.each_col([&renderer, &cords, &cords_i](const auto& cords_j) {
    //for (auto& cords_j : cords) {
      //if (double dist_ij =  dist(cords_i, cords_j) < 2) {
      if (double dist_ij =  arma::norm(cords_i - cords_j) < 4) {
        vtkSmartPointer<vtkLineSource> lineSource = 
          vtkSmartPointer<vtkLineSource>::New();
        lineSource->SetPoint1(const_cast<double*>(cords_i.memptr()));
        lineSource->SetPoint2(const_cast<double*>(cords_j.memptr()));
        lineSource->Update();
        vtkSmartPointer<vtkPolyDataMapper> lineMapper =
          vtkSmartPointer<vtkPolyDataMapper>::New();
        lineMapper->SetInputConnection(lineSource->GetOutputPort());
        vtkSmartPointer<vtkActor> lineActor =
          vtkSmartPointer<vtkActor>::New();
        lineActor->SetMapper(lineMapper);
        lineActor->GetProperty()->SetLineWidth(2);
        lineActor->GetProperty()->SetColor(1.0, 1.0, 1.0);
        renderer->AddActor(lineActor);
      }
    //}
      });
  //}
    });
}

void add_atoms(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const std::vector<std::string>& symbols) {
  assert(cords.n_rows == 3);
  assert(cords.n_cols == symbols.size());
  const std::map<std::string, std::array<double, 3>> symbol_to_color = 
    {{"H", {0.5, 0.3, 0.3}},
     {"O", {1.0, 0.0, 0.0}},
     {"N", {0.0, 0.0, 1.0}},
     {"C", {0.0, 0.0, 0.0}}};
  for (auto idx = 0ul; idx < cords.n_cols; ++idx) {
    const auto& cords_i = cords.col(idx).eval();
    const auto& symbol_i = symbols[idx];
    const std::array<double, 3> def_color = {0.5, 0.5, 0.5};
    const auto color_i = symbol_to_color.count(symbol_i) ? symbol_to_color.at(symbol_i) : def_color;
    vtkSmartPointer<vtkSphereSource> sphere =
      vtkSmartPointer<vtkSphereSource>::New();
    sphere->SetPhiResolution(16);
    sphere->SetThetaResolution(16);
    sphere->SetCenter(const_cast<double*>(cords_i.memptr()));
    sphere->SetRadius(0.6);
    vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
      vtkSmartPointer<vtkPolyDataMapper>::New();
    sphereMapper->SetInputConnection(sphere->GetOutputPort());
    vtkSmartPointer<vtkActor> sphereActor =
      vtkSmartPointer<vtkActor>::New();
    sphereActor->SetMapper(sphereMapper);
    sphereActor->GetProperty()->SetColor(const_cast<double*>(color_i.data()));
    renderer->AddActor(sphereActor);
  }
}

void add_partial_charges(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const arma::vec& partial_charges) {
  assert(cords.n_rows == 3);
  assert(cords.n_cols == partial_charges.n_elem);
  const std::array<double, 3> pos_color {1.0, 0.0, 0.0};
  const std::array<double, 3> neg_color {0.0, 0.0, 1.0};
  for (auto idx = 0ul; idx < cords.n_cols; ++idx) {
    const auto& cords_i = cords.col(idx).eval();
    const auto& charges_i = partial_charges(idx);
    const auto radius = std::cbrt(std::abs(charges_i)) * arbitrary_factor;
    const auto& color = charges_i>0 ? pos_color : neg_color;
    vtkSmartPointer<vtkSphereSource> sphere =
      vtkSmartPointer<vtkSphereSource>::New();
    sphere->SetPhiResolution(16);
    sphere->SetThetaResolution(16);
    sphere->SetCenter(const_cast<double*>(cords_i.memptr()));
    sphere->SetRadius(radius);
    vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
      vtkSmartPointer<vtkPolyDataMapper>::New();
    sphereMapper->SetInputConnection(sphere->GetOutputPort());
    vtkSmartPointer<vtkActor> sphereActor =
      vtkSmartPointer<vtkActor>::New();
    sphereActor->SetMapper(sphereMapper);
    sphereActor->GetProperty()->SetColor(const_cast<double*>(color.data()));
    renderer->AddActor(sphereActor);
  }
}

void add_partial_dipoles(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const arma::mat& partial_dipoles) {
  assert(cords.n_rows == 3);
  assert(partial_dipoles.n_rows == 3);
  assert(cords.n_cols == partial_dipoles.n_cols);
  const std::array<double, 3> pos_color {1.0, 0.0, 0.0};
  const std::array<double, 3> neg_color {0.0, 0.0, 1.0};
  for (auto idx = 0ul; idx < cords.n_cols; ++idx) {
    const auto& cords_i = cords.col(idx).eval();
    const auto& dipoles_i = partial_dipoles.col(idx).eval();
    const auto radius = std::pow(arma::norm(dipoles_i), 0.25) / 2 * arbitrary_factor;
    arma::vec3 center_plus =  cords_i + radius * dipoles_i / arma::norm(dipoles_i);
    arma::vec3 center_minus = cords_i - radius * dipoles_i / arma::norm(dipoles_i);
    std::array<double, 3> red = {1.0,0.0,0.0};
    std::array<double, 3> blue = {0.0,0.0,1.0};
    struct SphereInfo {
      arma::vec3 center;
      std::array<double, 3> color;
    };
    std::array<SphereInfo, 2> sphere_infos {{{center_plus, red},
                                             {center_minus, blue}}};
    // Spheres:
    for (const auto& sphere_info : sphere_infos) {
      vtkSmartPointer<vtkSphereSource> sphere =
        vtkSmartPointer<vtkSphereSource>::New();
      sphere->SetPhiResolution(16);
      sphere->SetThetaResolution(16);
      sphere->SetCenter(const_cast<double*>(sphere_info.center.memptr()));
      sphere->SetRadius(radius);
      vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
        vtkSmartPointer<vtkPolyDataMapper>::New();
      sphereMapper->SetInputConnection(sphere->GetOutputPort());
      vtkSmartPointer<vtkActor> sphereActor =
        vtkSmartPointer<vtkActor>::New();
      sphereActor->SetMapper(sphereMapper);
      sphereActor->GetProperty()->SetColor(const_cast<double*>(sphere_info.color.data()));
      renderer->AddActor(sphereActor);
    }
  }
}

namespace {

  arma::mat33 _Qvec_to_Qmat(const arma::vec6& _) {
    const auto& Q_xx = _(0);
    const auto& Q_xy = _(1);
    const auto& Q_xz = _(2);
    const auto& Q_yy = _(3);
    const auto& Q_yz = _(4);
    const auto& Q_zz = _(5);
    return {{Q_xx, Q_xy, Q_xz},
            {Q_xy, Q_yy, Q_yz},
            {Q_xz, Q_yz, Q_zz}};
  }

}

void add_partial_quadrupoles(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const arma::mat& partial_quadrupoles) {
  assert(cords.n_rows == 3);
  assert(partial_quadrupoles.n_rows == 6);
  assert(cords.n_cols == partial_quadrupoles.n_cols);
  const std::array<double, 3> pos_color {1.0, 0.0, 0.0};
  const std::array<double, 3> neg_color {0.0, 0.0, 1.0};
  for (auto idx = 0ul; idx < cords.n_cols; ++idx) {
    const auto& cords_i = cords.col(idx).eval();
    const auto& quardupoles_i = _Qvec_to_Qmat(partial_quadrupoles.col(idx).eval());
    /*
    const auto radius = std::pow(arma::norm(dipoles_i), 0.25) / 2 * arbitrary_factor;
    arma::vec3 center_plus =  cords_i + radius * dipoles_i / arma::norm(dipoles_i);
    arma::vec3 center_minus = cords_i - radius * dipoles_i / arma::norm(dipoles_i);
    std::array<double, 3> red = {1.0,0.0,0.0};
    std::array<double, 3> blue = {0.0,0.0,1.0};
    */
    struct SphereInfo {
      double radius;
      arma::vec3 center;
      std::array<double, 3> color;
    };
    //std::array<SphereInfo, 2> sphere_infos {{{center_plus, red},
    //                                         {center_minus, blue}}};
    std::array<SphereInfo, 2> sphere_infos;
    // Spheres:
    for (const auto& sphere_info : sphere_infos) {
      vtkSmartPointer<vtkSphereSource> sphere =
        vtkSmartPointer<vtkSphereSource>::New();
      sphere->SetPhiResolution(16);
      sphere->SetThetaResolution(16);
      sphere->SetCenter(const_cast<double*>(sphere_info.center.memptr()));
      sphere->SetRadius(sphere_info.radius);
      vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
        vtkSmartPointer<vtkPolyDataMapper>::New();
      sphereMapper->SetInputConnection(sphere->GetOutputPort());
      vtkSmartPointer<vtkActor> sphereActor =
        vtkSmartPointer<vtkActor>::New();
      sphereActor->SetMapper(sphereMapper);
      sphereActor->GetProperty()->SetColor(const_cast<double*>(sphere_info.color.data()));
      renderer->AddActor(sphereActor);
    }
  }


}
