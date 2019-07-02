#include<visel/parse_log.hpp>

#include<cassert>
#include<string>

#include<iostream>
#include<fstream>
#include<regex>

#include<boost/algorithm/string/predicate.hpp>

#include<armadillo>

// ================================================================================
// ==========  grep_string ========================================================
// ================================================================================


//TODO

// ================================================================================
// ==========  grep_vecotr ========================================================
// ================================================================================

namespace { 

arma::vec _grep_vecotr_chunk(std::ifstream& fs, const unsigned long n_elems) {
  arma::vec chunk(n_elems);
  // elems headers line at the opening of the chunk.
    if (std::string line; std::getline(fs, line)) {
    } else {
        std::cerr << "[ERRPR] Expected the header line at the beginning of the chunk, but not line found." << std::endl;
        return arma::mat();
    }
    // ---------------------------------------------------------------
    //data line:
    if (std::string line; std::getline(fs, line)) {
      if (line.size() != 14 * n_elems) {
        std::cerr << "[ERRPR] The found matrix line is to short '" << line << "'"
                  << std::endl;
        return arma::mat();
      }
      auto line_it = line.cbegin();
      for (unsigned long n_elem = 0; n_elem < n_elems; ++n_elem) {
        const long field_width = 14l;
        std::string vector_value(line_it, line_it + field_width);
        std::size_t pos;
        try {
          chunk(n_elem) = std::stod(vector_value, &pos);
          if (pos != field_width) {
            std::cerr << "[ERRPR] Cannot convert matrix field '" << vector_value + "'"
              << " into a double" 
              << " (there are unwanted chars on the end of the field)."
              << std::endl;
            return arma::mat();
          }
        } catch (std::invalid_argument& ex) {
          std::cerr << "[ERRPR] Cannot convert matrix field '" << vector_value << "'"
                    << "into a double (invalid argument exception)."
                    << std::endl;
          return arma::mat();
        } catch (std::out_of_range& ex) {
          std::cerr << "[ERRPR] Cannot convert matrix field '" << vector_value << "'"
                    << "into a double (out of range exception)."
                    << std::endl;
          return arma::mat();
        }
        line_it += field_width;
      }  // end of for elems
    } else {
      std::cerr << "[ERRPR] Expected the matrix line in the chunk, but not line found." << std::endl;
      return arma::mat();
    }
    // ---------------------------------------------------------------
    return chunk;
  }

  arma::vec _grep_vector(std::ifstream& fs, const unsigned long n_elems, const unsigned long max_n_elems_chunk) {
    arma::vec result(n_elems);
    for(unsigned long n_elem_begin = 0; n_elem_begin < n_elems; n_elem_begin += max_n_elems_chunk) {
      const unsigned long n_elem_end = std::min(n_elem_begin + max_n_elems_chunk, n_elems);
      const unsigned long n_elems_chunk = n_elem_end - n_elem_begin;
      assert(0 < n_elems_chunk);
      assert(n_elems_chunk <= max_n_elems_chunk);
      //std::cout << "Will read a chunk. n_elem_begin, n_elems_chunk = " << n_elem_begin << " " << n_elems_chunk << std::endl;
      arma::vec chunk = _grep_vecotr_chunk(fs, n_elems_chunk);
      result.rows(n_elem_begin, n_elem_end - 1) = chunk;
    }
    //result.print("result");
    return result;
  }

} // end of namespace

arma::vec grep_vector(const std::string& path, const std::string title) {
  std::ifstream fs(path);
  if (!fs) {
    std::cerr << "Fail to open file: " << path << std::endl;
    return arma::mat();
  }
  const std::regex d_comma_d_pattern(R"((\d+), (\d+))");
  for (std::string line; std::getline(fs, line); ) {
    if (boost::starts_with(line, title + ": ")) {
      std::string rest_of_the_line{line.cbegin() + title.size() + 2, line.cend() };
      //std::cout << line << std::endl;
      //std::cout << rest_of_the_line << std::endl;
      if (std::smatch match; std::regex_match(rest_of_the_line, match, d_comma_d_pattern)) {
        //std::cout << "match" << std::endl;
        const auto n_elems = std::stoul(match[1]);
        //std::cout << "n_elems: " << n_elems << std::endl;
        const auto max_n_elems_chunk = std::stoul(match[2]);
        //std::cout << "max_n_elems_chunk: " << max_n_elems_chunk << std::endl;
        return _grep_vector(fs, n_elems, max_n_elems_chunk);
      }
    }
  }
  return arma::mat();
}

// ================================================================================
// ==========  grep_matrix ========================================================
// ================================================================================
namespace {

  arma::mat _grep_matrix_chunk(std::ifstream& fs, const unsigned long n_rows, const unsigned long n_cols) {
    arma::mat chunk(n_rows, n_cols);
    // cols headers line at the opening of the chunk.
    if (std::string line; std::getline(fs, line)) {
    } else {
        std::cerr << "[ERRPR] Expected the header line at the beginning of the chunk, but not line found." << std::endl;
        return arma::mat();
    }
    // ---------------------------------------------------------------
    //data lines
    for (unsigned long n_row = 0; n_row < n_rows; ++n_row) {
      if (std::string line; std::getline(fs, line)) {
        if (line.size() != 10 + 14 * n_cols) {
          std::cerr << "[ERRPR] The found matrix line is to short '" << line << "'"
                    << std::endl;
          return arma::mat();
        }
        auto line_it = line.cbegin();
        {
          const long field_width = 10l;
          std::string row_header(line_it, line_it + field_width);
          line_it += field_width;
        }
        for (unsigned long n_col = 0; n_col < n_cols; ++n_col) {
          const long field_width = 14l;
          std::string matrix_value(line_it, line_it + field_width);
          std::size_t pos;
          try {
          chunk(n_row, n_col) = std::stod(matrix_value, &pos);
            if (pos != field_width) {
              std::cerr << "[ERRPR] Cannot convert matrix field '" << matrix_value + "'"
                << " into a double" 
                << " (there are unwanted chars on the end of the field)."
                << std::endl;
              return arma::mat();
            }
          } catch (std::invalid_argument& ex) {
            std::cerr << "[ERRPR] Cannot convert matrix field '" << matrix_value << "'"
                      << "into a double (invalid argument exception)."
                      << std::endl;
            return arma::mat();
          } catch (std::out_of_range& ex) {
            std::cerr << "[ERRPR] Cannot convert matrix field '" << matrix_value << "'"
                      << "into a double (out of range exception)."
                      << std::endl;
            return arma::mat();
          }
          line_it += field_width;
        }  // end of for cols
      } else {
        std::cerr << "[ERRPR] Expected the matrix line in the chunk, but not line found." << std::endl;
        return arma::mat();
      }
    }  // end of for rows
    // ---------------------------------------------------------------
    // blank line at the closing of the chunk.
    if (std::string line; std::getline(fs, line)) {
    } else {
        std::cerr << "[ERRPR] Expected the blank line at the end of the chunk, but not line found." << std::endl;
        return arma::mat();
    }
    // ---------------------------------------------------------------
    return chunk;
  }


  arma::mat _grep_matrix(std::ifstream& fs, const unsigned long n_rows, const unsigned long n_cols, const unsigned long max_n_cols_chunk) {
    arma::mat result(n_rows, n_cols);
    for(unsigned long n_col_begin = 0; n_col_begin < n_cols; n_col_begin += max_n_cols_chunk) {
      const unsigned long n_col_end = std::min(n_col_begin + max_n_cols_chunk, n_cols);
      const unsigned long n_cols_chunk = n_col_end - n_col_begin;
      assert(0 < n_cols_chunk);
      assert(n_cols_chunk <= max_n_cols_chunk);
      //std::cout << "Will read a chunk. n_col_begin, n_cols_chunk = " << n_rows << " " << n_cols_chunk << std::endl;
      arma::mat chunk = _grep_matrix_chunk(fs, n_rows, n_cols_chunk);
      result.cols(n_col_begin, n_col_end - 1) = chunk;
    }
    //result.print("result");
    return result;
  }

} // end of namespace


arma::mat grep_matrix(const std::string& path, const std::string title) {
  std::ifstream fs(path);
  if (!fs) {
    std::cerr << "Fail to open file: " << path << std::endl;
    return arma::mat();
  }
  const std::regex d_comma_d_pattern(R"((\d+)x(\d+), (\d+))");
  for (std::string line; std::getline(fs, line); ) {
    if (boost::starts_with(line, title + ": ")) {
      std::string rest_of_the_line{line.cbegin() + title.size() + 2, line.cend() };
      //std::cout << line << std::endl;
      //std::cout << rest_of_the_line << std::endl;
      if (std::smatch match; std::regex_match(rest_of_the_line, match, d_comma_d_pattern)) {
        //std::cout << "match" << std::endl;
        const auto n_rows = std::stoul(match[1]);
        //std::cout << "n_rows: " << n_rows << std::endl;
        const auto n_cols = std::stoul(match[2]);
        //std::cout << "n_cols: " << n_cols << std::endl;
        const auto max_n_cols_chunk = std::stoul(match[3]);
        //std::cout << "max_n_cols_chunk: " << max_n_cols_chunk << std::endl;
        return _grep_matrix(fs, n_rows, n_cols, max_n_cols_chunk);
      }
    }
  }
  return arma::mat();
}
