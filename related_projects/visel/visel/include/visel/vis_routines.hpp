#ifndef VIS_ROUTINES_HPP
#define VIS_ROUTINES_HPP

#include<vtkRenderer.h>
#include<vtkSmartPointer.h>

#include<armadillo>

void add_axes(vtkSmartPointer<vtkRenderer> renderer);

void add_bonds(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords);

void add_atoms(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const std::vector<std::string>& symbols);

void add_partial_charges(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const arma::vec& partial_charges);

void add_partial_dipoles(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const arma::mat& partial_dipoles);

void add_partial_quadrupoles(vtkSmartPointer<vtkRenderer> renderer,
          const arma::mat& cords,
          const arma::mat& partial_quadrupoles);

#endif