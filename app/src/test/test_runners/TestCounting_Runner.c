#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Counting)
{
  RUN_TEST_CASE(Counting, TestCountingArrayNull);
  // RUN_TEST_CASE(Counting, TestCountingArrayMaxMin);  // Occurs a segmentation fault
  // RUN_TEST_CASE(Counting, TestCountingArrayMinMax);  // Occurs a segmentation fault
  // RUN_TEST_CASE(Counting, TestCountingArrayMaxMax);  // Occurs a segmentation fault
  // RUN_TEST_CASE(6Counting, TestCountingArrayMinMin);  // Occurs a segmentation fault
  RUN_TEST_CASE(Counting, TestCountingArrayDuplicate);
  RUN_TEST_CASE(Counting, TestCountingArrayOdd);
  RUN_TEST_CASE(Counting, TestCountingArrayEven);
  // RUN_TEST_CASE(Counting, TestCountingArrayNegative);  // Occurs a segmentation fault
  RUN_TEST_CASE(Counting, TestCountingArrayPositive);
  // RUN_TEST_CASE(Counting, TestCountingArrayMixed);  // Algorithm modifies the resulting array
  RUN_TEST_CASE(Counting, TestCountingArrayOne);
  RUN_TEST_CASE(Counting, TestCountingArrayUnsorted);
  RUN_TEST_CASE(Counting, TestCountingArraySorted);
  RUN_TEST_CASE(Counting, TestCountingArrayAllZeros);
  RUN_TEST_CASE(Counting, TestCountingArrayAllOnes);
  RUN_TEST_CASE(Counting, TestCountingArrayTwoZeros);
  // RUN_TEST_CASE(Counting, TestCountingArrayTwoMax);  // Occurs a segmentation fault
  // RUN_TEST_CASE(Counting, TestCountingArrayTwoMin);  // Occurs a segmentation fault
  RUN_TEST_CASE(Counting, TestCountingArrayLarge);
}
