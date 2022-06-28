// Forward declarations of my Data-Structure functions go here.
// Implementation of the functions go in .cpp files
//   named correspondingly to their function.

#ifndef MYDATASTRUCTURES_HPP
#define MYDATASTRUCTURES_HPP

class IntArray {
public:
  void print() const;
  void setValue(int idx, int value);
  int showLength() const;
  int &at(int idx) const;  // IntArray a{4}; print(a.at(2));
  int &at(int idx);        // IntArray a{4}; a.at(2) = 4;

  IntArray(int length);
  ~IntArray();

  IntArray(const IntArray&) = delete;
  IntArray& operator=(const IntArray&) = delete;

  static unsigned int showGlobalCountOfIntArrays(); // is this an l-value?

private:
  int* arr{};
  int len{};
  static unsigned int globalCountOfIntArrays;
};

#endif


// references
// https: // www.learncpp.com/cpp-tutorial/destructors/

// Chaining this pointer to get chaining calls
// https: // www.learncpp.com/cpp-tutorial/the-hidden-this-pointer/
