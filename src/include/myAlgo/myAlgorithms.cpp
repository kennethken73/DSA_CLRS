// implementations on the SET of algorithms
// Specific algorithm implementations go in their respectively-named .cpp files

#include "myAlgorithms.hpp"
#include <iostream>
#include <array>
#include <string>

const unsigned int numberOfAlgorithms{2};
std::array<std::string, numberOfAlgorithms> algoName{"myAdd", "myMult"};

void listAvailableAlgorithms(){
    std::cout << "Available Algorithms:" << std::endl;
    for (const auto &a : algoName)
      std::cout << a << ", ";
};





/*  References
  https://stackoverflow.com/questions/997821/how-to-make-a-function-return-a-pointer-to-a-function-c
  https://stackoverflow.com/questions/21790236/c-function-pointer-as-argument-and-classes
  good info for trailing return type:
  https://stackoverflow.com/questions/57756881/where-to-put-using-directives-in-c-header-files
 */
