#include "myAlgorithms.hpp"
#include "../myDS/myDataStructures.hpp"

// TODO do polymorphic myInsertionSort based on type..
// NOTE Taken from / Implementing "Insertion Sort" from
//        CLRS, page 18
IntArray &myInsertionSort(IntArray & a){

  const int length {a.showLength()};
  int key{};

  for(int j = 1; j <= length; ++j){
    key = a.at(j);
    int i = j-1;
    while(i >= 0 && a.at(i) > key){
      a.at(i+1) = a.at(i);
      --i;
    }
    a.at(i+1) = key;
  }
  return a;
}
