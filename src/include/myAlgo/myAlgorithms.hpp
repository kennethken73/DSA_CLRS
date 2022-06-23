// https://www.learncpp.com/cpp-tutorial/header-files/
// I'm getting headers and their implementations working with CMake

// Forward declarations of my algorithm functions go here.
// Implementation of the functions go in .cpp files
//   named correspondingly to their function.

#ifndef MYALGORITHMS_HPP
#define MYALGORITHMS_HPP

// #include <array>
// #include <string>

// const int numberOfAlgorithms{2};
// std::array<std::string, numberOfAlgorithms> algoName;

int myAdd(int, int);
int myMult(int, int);

void listAvailableAlgorithms();
typedef int (*algoPtr)(int, int);
algoPtr getAlgorithm(unsigned int);


#endif
