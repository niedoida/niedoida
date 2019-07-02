#ifndef VISEL_PROGRAM_OPTIONS_HPP
#define VISEL_PROGRAM_OPTIONS_HPP

#include<filesystem>
#include<string>
#include<iostream>

struct ViselProgramOptions {
    // Types:
    enum class PopulationType;
    enum class Orientation;
    // Data:
    std::filesystem::path niedoida_out_file_path;
    PopulationType population_type;
    Orientation orientation_type;
};

enum class ViselProgramOptions::PopulationType {
    Mulliken,
    Lowdin
};

enum class ViselProgramOptions::Orientation {
    Std,
    Inp
};

std::ostream& operator<<(std::ostream&, ViselProgramOptions::PopulationType);
std::ostream& operator<<(std::ostream&, ViselProgramOptions::Orientation);

ViselProgramOptions grep_program_options(int argc, char** argv);

#endif 
