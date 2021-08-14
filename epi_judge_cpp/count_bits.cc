#include "test_framework/generic_test.h"

short CountBits(unsigned int x) {
   // TODO - you fill in here.
  short num_bits = 0;
  while(x) {
    num_bits += x & 1; // essentially comparing 1 with the first bit of x. As we gradually shift x, this bitwise and operation will help to compute the number of 1 bits in a nonnegative integer
    x >>= 1; // every time we shift x to the right, x approaches zero
  }
  return num_bits;
}

int main(int argc, char* argv[]) {
  std::vector<std::string> args{argv + 1, argv + argc};
  std::vector<std::string> param_names{"x"};
  return GenericTestMain(args, "count_bits.cc", "count_bits.tsv", &CountBits,
                         DefaultComparator{}, param_names);
}
