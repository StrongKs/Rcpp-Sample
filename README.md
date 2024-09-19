# Rcpp Sample Pre-work
## Structure

Created a header and source Cpp files with a vector sorting function named "sort_vector()". The Cpp will be linked using Rcpp.h library using [[Rcpp::export]] tag on the function. From there the Cpp function code is executable through R programming.

## Sample Code Execution

### Execution Steps - Through R console

1. Have the R console open in project directory.
2. Load the C++ code named "sample_function.cpp"
3. Create an R vector and pass into the Cpp function named "sort_vector()"
4. Print out the output

````
> getwd()
[1] "/Users/kentphipps/RcppProject"
> library(Rcpp)
> 
> # Load and compile the C++ code
> sourceCpp("sample_function.cpp")
> 
> # Test the function
> sorted_vector <- sort_vector(c(5, 1, 3, 4, 2))
> print(sorted_vector)
[1] 1 2 3 4 5
