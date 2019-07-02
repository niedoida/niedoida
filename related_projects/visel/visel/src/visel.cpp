#include<visel/visel_program_options.hpp>
#include<visel/parse_log.hpp>
#include<visel/vis_routines.hpp>

#include<armadillo>

#include<vtkCamera.h>
#include<vtkRenderer.h>
#include<vtkRenderWindow.h>
#include<vtkRenderWindowInteractor.h>
#include<vtkSmartPointer.h>

#include<boost/algorithm/string/predicate.hpp>
#include<boost/range/combine.hpp>

#include<array>
#include<vector>
#include<map>
#include<string>

#include<iostream>
#include<fstream>
#include<regex>

#include<cassert>
#include<cmath>

int main(int argc, char** argv)
{
  const auto program_options = grep_program_options(argc, argv);
  std::cout << "[INFO   ] [PROGRAM_OPTIONS] niedoida out file path = " << program_options.niedoida_out_file_path << std::endl;
  std::cout << "[INFO   ] [PROGRAM_OPTIONS] population type        = " << program_options.population_type << std::endl;
  // -------------------------------------------
  // ##############################################
  // ####### GREP PART ############################
  // ##############################################
  if (!exists(program_options.niedoida_out_file_path)) {
    std::cerr << "[ERROR  ] The file " << program_options.niedoida_out_file_path << " does not exist" << std::endl;
    return 1;
  }
  // -------------------------------------------
  const std::string title_population_type = program_options.population_type == ViselProgramOptions::PopulationType::Lowdin ?
                                            "lowdin" : "mulliken";
  const std::string partial_charges_title = "atomic-partial-" + title_population_type + "-charges [total]";
  const std::string partial_dipoles_title = "atomic-partial-" + title_population_type + "-dipoles (in std-frame) [total, electrons contribution]";
  const std::string partial_quadrupoles_title = "atomic-partial-" + title_population_type + "-quadrupoles (raw, in std-frame) [total, electrons contribution]";
  // -------------------------------------------
  std::cout << "[INFO] Program is about to grep level of theory -- TODO." << std::endl;
  std::string title_theory_type = "TheoryTODO";
  std::cout << "[INFO] Program is about to grep basis -- TODO." << std::endl;
  std::string title_basis_type = "BasisTODO";
  std::cout << "[INFO] Program is about to grep atoms coors." << std::endl;
  const auto cords = grep_matrix(program_options.niedoida_out_file_path, "coordinates").t().eval();
  if (cords.n_cols == 0) {
    std::cerr << "[ERROR  ] [PARSE] Problem while parsing atoms cords." << std::endl;
    return 2;
  }
  const auto symbols = std::vector<std::string>(cords.n_cols, "X"); //TODO
   std::cout << "[INFO] Program is about to grep atomic-partial-charges coors." << std::endl;
  const auto partial_charges = grep_vector(program_options.niedoida_out_file_path, partial_charges_title);
  if (partial_charges.n_cols == 0) {
    std::cerr << "[ERROR  ] [PARSE] Problem while parsing atomic-partial-charges." << std::endl;
    return 3;
  }
   std::cout << "[INFO] Program is about to grep atomic-partial-dipoles coors." << std::endl;
  const auto partial_dipoles = grep_matrix(program_options.niedoida_out_file_path, partial_dipoles_title);
  if (partial_dipoles.n_cols == 0) {
    std::cerr << "[ERROR  ] [PARSE] Problem while parsing atomic-partial-dipoles." << std::endl;
    return 4;
  }
   std::cout << "[INFO] Program is about to grep atomic-partial-quadrupoles coors." << std::endl;
  const auto partial_quadrupoles = grep_matrix(program_options.niedoida_out_file_path, partial_quadrupoles_title);
  if (partial_quadrupoles.n_cols == 0) {
    std::cerr << "[ERROR  ] [PARSE] Problem while parsing atomic-partial-quadrupoles." << std::endl;
    return 5;
  }
  // -------------------------------------------
  cords.print("cords");
  partial_charges.print("partial-charges");
  partial_dipoles.print("partial-dipoles");
  partial_quadrupoles.print("partial-quadrupoles");
  // ##############################################
  // ####### RENDER PART ##########################
  // ##############################################
  // Notes:
  // https://vtk.org/Wiki/VTK/Examples/Cxx/Visualization/MultipleViewports
  // -------------------------------------------
  // The inner array elements are: xmin, ymin, xmax, ymax.
  const std::array<std::array<double, 4>, 4> view_port_coords
  {{{0.0, 0.0, 0.5, 0.5},
    {0.5, 0.0, 1.0, 0.5},
    {0.0, 0.5, 0.5, 1.0},
    {0.5, 0.5, 1.0, 1.0}}};
  // -------------------------------------------
  vtkSmartPointer<vtkRenderer> renderer0 =
    vtkSmartPointer<vtkRenderer>::New();
  vtkSmartPointer<vtkRenderer> renderer1 =
    vtkSmartPointer<vtkRenderer>::New();
  vtkSmartPointer<vtkRenderer> renderer2 =
    vtkSmartPointer<vtkRenderer>::New();
  vtkSmartPointer<vtkRenderer> renderer3 =
    vtkSmartPointer<vtkRenderer>::New();
  // -------------------------------------------
  add_axes(renderer0);
  add_bonds(renderer0, cords);
  add_atoms(renderer0, cords, symbols);
  // -------------------------------------------
  add_axes(renderer1);
  add_bonds(renderer1, cords);
  add_partial_charges(renderer1, cords, partial_charges);
  // -------------------------------------------
  add_axes(renderer2);
  add_bonds(renderer2, cords);
  // -------------------------------------------
  add_axes(renderer3);
  add_bonds(renderer3, cords);
  // -------------------------------------------
  vtkSmartPointer<vtkCamera> camera =
    vtkSmartPointer<vtkCamera>::New(); 
  renderer0->SetActiveCamera(camera); 
  renderer1->SetActiveCamera(camera); 
  renderer2->SetActiveCamera(camera); 
  renderer3->SetActiveCamera(camera); 
  // -------------------------------------------
  renderer0->SetBackground(0.1, 0.2, 0.4);
  renderer1->SetBackground(0.1, 0.2, 0.4);
  renderer2->SetBackground(0.1, 0.2, 0.4);
  renderer3->SetBackground(0.1, 0.2, 0.4);
  // -------------------------------------------
  renderer0->SetViewport(const_cast<double*>(view_port_coords[0].data()));
  renderer1->SetViewport(const_cast<double*>(view_port_coords[1].data()));
  renderer2->SetViewport(const_cast<double*>(view_port_coords[2].data()));
  renderer3->SetViewport(const_cast<double*>(view_port_coords[3].data()));
  // -------------------------------------------
  renderer0->ResetCamera();
  //renderer0->GetActiveCamera()->Zoom(1.5);
  // -------------------------------------------
  vtkSmartPointer<vtkRenderWindow> renderWindow =
    vtkSmartPointer<vtkRenderWindow>::New();
  renderWindow->SetSize(750, 750);
  renderWindow->AddRenderer(renderer0);
  renderWindow->AddRenderer(renderer1);
  renderWindow->AddRenderer(renderer2);
  renderWindow->AddRenderer(renderer3);
  std::string windoes_name = "Visel | " + title_theory_type +" | " + title_basis_type + " | " + title_population_type;
  renderWindow->SetWindowName(windoes_name.c_str());
  // -------------------------------------------
  vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
    vtkSmartPointer<vtkRenderWindowInteractor>::New();
  renderWindowInteractor->SetRenderWindow(renderWindow);
  // -------------------------------------------
  renderWindowInteractor->Start();
  return 0;
}