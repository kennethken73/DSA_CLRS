/*
  Main program to run Algorithms on Data Structures.
  Here, we'll ask the user for their choice of Data Structure,
  populate it, and run an algorithm of the user's choice on it.
 */
#include "include/myAlgo/myAlgorithms.hpp"
#include <iostream>
using std::cout, std::endl;

int main() {
  std::cout << "Welcome to the DSA-runner\n"
            << "What Data Structure are we setting up?";

  int x {myAdd(5, 7)};
  int y {myMult(5, 7)};

  cout << endl;
  cout << x << endl;
  cout << y << endl;
}
