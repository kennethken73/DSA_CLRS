/*
  Main program to run Algorithms on Data Structures.
  Here, we'll ask the user for their choice of Data Structure,
  populate it, and run an algorithm of the user's choice on it.
 */
#include "myAlgorithms.hpp"
#include "myDataStructures.hpp"
#include "myTimer.cpp"
#include <iostream>

using std::cout, std::endl;

int main() {

  Timer myTimer;


  std::cout << "Welcome to the DSA-runner\n"
            << "What Data Structure are we setting up?\n";

  listAvailableAlgorithms();
  cout << endl;

  IntArray a{4};
  a.at(0) = 4;
  a.at(1) = 9;
  a.at(2) = 2;
  a.setValue(3, 6);

  cout << "full array: " << endl;
  a.print();
  cout << endl;

  cout << "sorting the array..." << endl;
  myInsertionSort(a);

  cout << "sorted array..:" << endl;
  a.print();
  cout << endl;

  std::cout << "Time elapsed: " << myTimer.elapsed() << " seconds\n";

}

// #include "include/myAlgo/myAlgorithms.hpp"

// #include "../lib/myTimer.cpp" // fix this hard-coded path
