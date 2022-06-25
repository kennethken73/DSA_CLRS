#include "myDataStructures.hpp"
#include <cassert>
#include <cstddef>
#include <iostream>

// static member init.
// Static *definition* does not observe private/public access controls.
unsigned int IntArray::globalCountOfIntArrays{0};

void IntArray::print() const{
  for(int i = 0; i < len; ++i) {
    std::cout << "arr[i]:  "
              << arr[i] << std::endl;
  }

}

void IntArray::setValue(int idx, int value){ arr[idx] = value; }

int &IntArray::showValue(int idx) const { return arr[idx]; }

int &IntArray::at(int idx) const { return arr[idx]; }
int &IntArray::at(int idx) { return arr[idx]; }


// C'tors:
IntArray::IntArray(int length) {
  assert(length > 0);
  len = length;
  arr = new int[static_cast<std::size_t>(length)]{};
  ++globalCountOfIntArrays;
}

IntArray::~IntArray() {
  delete[] arr;
  --globalCountOfIntArrays;
  }
