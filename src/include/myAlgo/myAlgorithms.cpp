// implementations on the SET of algorithms
// Specific algorithm implementations go in their respectively-named .cpp files

#include "myAlgorithms.hpp"
#include <iostream>
#include <array>
#include <string>

const unsigned int numberOfAlgorithms{2};
std::array<std::string, numberOfAlgorithms> algoName{"myAdd", "myMult"};

int showError(int,int){
  std::cout << "Error..\n" << std::endl;
  return 0;
}

void listAvailableAlgorithms(){
    std::cout << "Available Algorithms:" << std::endl;
    for (const auto &a : algoName)
      std::cout << a << ", ";
};

/*
 "auto" is deducing that getAlgorithm will return a (pointer-to-a) function
 WHERE: function takes two integers and returns an int.
 ie: function_signature: int fun(int,int);
 THEREFORE: this function's polymorphism pivots only on the functions
 (variously named) which take 2 ints and return an int.
 NOTE
    I am counting on the ability (that I'm supposing exists)
    of polymorphism with functions taking a std::vector and
    returning a std::vector, for example.
 NOTE
    Now, I'm avoiding auto and doing this manually until I really get it.
 */
algoPtr getAlgorithm(unsigned int choice) {
  switch (choice) {
  case 1:
    return &myAdd;
    break;
  case 2:
    return &myMult;
    break;
  default:
    return &showError; //showError must have function sig matching myAdd
    break;
  }
}

/*  References
  https://stackoverflow.com/questions/997821/how-to-make-a-function-return-a-pointer-to-a-function-c
  https://stackoverflow.com/questions/21790236/c-function-pointer-as-argument-and-classes
  good info for trailing return type:
  https://stackoverflow.com/questions/57756881/where-to-put-using-directives-in-c-header-files
 */
