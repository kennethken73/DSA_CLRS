// https://www.learncpp.com/cpp-tutorial/header-files/
// I'm getting headers and their implementations working with CMake

// Forward declarations of my algorithm functions go here.
// Implementation of the functions go in .cpp files
//   named correspondingly to their function.

#ifndef MYALGORITHMS_HPP
#define MYALGORITHMS_HPP

class IntArray;

int myAdd(int, int);
int myMult(int, int);
void listAvailableAlgorithms();

IntArray& myInsertionSort(IntArray&);

#endif
