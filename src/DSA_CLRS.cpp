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
            << "What Data Structure are we setting up?\n";

  listAvailableAlgorithms();
  cout << endl;

  algoPtr chosenFunction = getAlgorithm(1);  // test using function-pointer hard-set to myAdd()
  cout << "algo: myAdd, params: 4,20 --> " << chosenFunction(4,20) << endl;

}
