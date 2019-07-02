#ifndef PARSE_LOG_HPP
#define PARSE_LOG_HPP

#include<armadillo>
#include<string>

std::string grep_string(const std::string& path, const std::string title);
arma::mat grep_matrix(const std::string& path, const std::string title);
arma::vec grep_vector(const std::string& path, const std::string title);

#endif