// sample_function.cpp
#include "sample_function.h"  // Include the header file
#include <Rcpp.h>  // Rcpp integration
#include <algorithm>  // For std::sort

// [[Rcpp::export]]
std::vector<int> sort_vector(const std::vector<int>& x) {
    std::vector<int> sorted_x = x;
    std::sort(sorted_x.begin(), sorted_x.end());
    return sorted_x;
}