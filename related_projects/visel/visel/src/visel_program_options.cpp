#include <visel/visel_program_options.hpp>

#include <boost/program_options.hpp>
#include <iostream>

namespace {

    void emit_help(
            std::ostream& s,
            const boost::program_options::options_description& desc) {
        s << "Program: Vesel" << std::endl;
        s << desc << std::endl;
    }
} // namespace

ViselProgramOptions grep_program_options(int argc, char** argv) {
    boost::program_options::options_description desc("CLI options");
    desc.add_options()
            // --help, -h:
            ("help,h",
            "Print help messages.")
            // --niedoida-out_file-path:
            ("niedoida-out-file-path",
            boost::program_options::value<std::string>()->required(),
            "The niedoida out file path to parse.")
            // --lowdin, -l:
            ("lowdin,l",
            boost::program_options::bool_switch(),
            "Use Lowdin population analysis instead of Mulliken population analysis (default is Mulliken).");
    boost::program_options::positional_options_description p;
    p.add("niedoida-out-file-path", 1);
    // -------------------------------------------------------------------------
    boost::program_options::variables_map vm;
    try {
        boost::program_options::store(
                boost::program_options::command_line_parser(argc, argv).options(desc).positional(p).run(),
                vm); // may throw
        if (vm.count("help")) {
            emit_help(std::cout, desc);
            exit(0);
        }
        // sets auto variables (eq. class_specification_file_path),
        // throw is required variable is missing:
        boost::program_options::notify(vm); // may throw
    } catch (boost::program_options::error& e) {
        std::cerr << "[GLOBAL ERROR] [PROGRAM OPTIONS ERROR]: " << e.what() << std::endl;
        std::cerr << std::endl;
        emit_help(std::cerr, desc);
        exit(1);
    }
    // -------------------------------------------------------------------------
    ViselProgramOptions program_options;
    program_options.niedoida_out_file_path = std::filesystem::path(vm["niedoida-out-file-path"].as<std::string>());
    program_options.population_type = vm["lowdin"].as<bool>() ?
                                      ViselProgramOptions::PopulationType::Lowdin :
                                      ViselProgramOptions::PopulationType::Mulliken;
    return program_options;
}

std::ostream& operator<<(std::ostream& stream, ViselProgramOptions::PopulationType script_type) {
    switch (script_type) {
        case ViselProgramOptions::PopulationType::Lowdin:
            stream << "Lowdin population analysis";
            break;
        case ViselProgramOptions::PopulationType::Mulliken:
            stream << "Mulliken population analysis";
            break;
        default:
            stream << "<invalid population analysis>";
    }
    return stream;
}