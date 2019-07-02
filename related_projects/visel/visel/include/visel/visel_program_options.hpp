#ifndef VISEL_PROGRAM_OPTIONS_HPP
#define VISEL_PROGRAM_OPTIONS_HPP

#include<string>
#include<iostream>
#include<filesystem>

struct ViselProgramOptions {
    // Types:
    enum class PopulationType;
    // Data:
    std::filesystem::path niedoida_out_file_path;
    PopulationType population_type;
};

enum class ViselProgramOptions::PopulationType {
    Mulliken,
    Lowdin
};

std::ostream& operator<<(std::ostream&, ViselProgramOptions::PopulationType);

ViselProgramOptions grep_program_options(int argc, char** argv);

#endif 
