/*
  Main program to run Algorithms on Data Structures.
  Here, we'll ask the user for their choice of Data Structure,
  populate it, and run an algorithm of the user's choice on it.
 */
#include "include/myAlgo/myAlgorithms.hpp"
#include "myDataStructures.hpp"
#include <iostream>

using std::cout, std::endl;

int main() {
  std::cout << "Welcome to the DSA-runner\n"
            << "What Data Structure are we setting up?\n";

  listAvailableAlgorithms();
  cout << endl;

  IntArray a{4};
  a.at(0) = 9;
  a.at(1) = 8;
  a.at(2) = 7;
  a.setValue(3, 6);

  cout << "arr[0] == " << a.showValue(0) << endl;
  cout << "full array: " << endl;
  a.print();
  cout << endl;

  int halt;
  cout << "and done.." << endl;
  std::cin >> halt;
}
