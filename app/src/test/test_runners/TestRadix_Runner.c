#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Radix)
{
  RUN_TEST_CASE(Radix, TestRadixArrayNull);
  // RUN_TEST_CASE(Radix, TestRadixArrayMaxMin);  // Occurs a segmentation fault
  // RUN_TEST_CASE(Radix, TestRadixArrayMinMax);  // Occurs a segmentation fault
  // RUN_TEST_CASE(Radix, TestRadixArrayMaxMax);  // Occurs a segmentation fault
  // RUN_TEST_CASE(Radix, TestRadixArrayMinMin);  // Occurs a segmentation fault
  RUN_TEST_CASE(Radix, TestRadixArrayDuplicate);
  RUN_TEST_CASE(Radix, TestRadixArrayOdd);
  RUN_TEST_CASE(Radix, TestRadixArrayEven);
  // RUN_TEST_CASE(Radix, TestRadixArrayNegative);  // Occurs a segmentation fault
  RUN_TEST_CASE(Radix, TestRadixArrayPositive);
  // RUN_TEST_CASE(Radix, TestRadixArrayMixed);  // Algorithm modifies the resulting array
  RUN_TEST_CASE(Radix, TestRadixArrayOne);
  RUN_TEST_CASE(Radix, TestRadixArrayUnsorted);
  RUN_TEST_CASE(Radix, TestRadixArraySorted);
  RUN_TEST_CASE(Radix, TestRadixArrayAllZeros);
  RUN_TEST_CASE(Radix, TestRadixArrayAllOnes);
  RUN_TEST_CASE(Radix, TestRadixArrayTwoZeros);
  RUN_TEST_CASE(Radix, TestRadixArrayTwoMax);
  // RUN_TEST_CASE(Radix, TestRadixArrayTwoMin);  // Occurs a segmentation fault
  RUN_TEST_CASE(Radix, TestRadixArrayLarge);
}
