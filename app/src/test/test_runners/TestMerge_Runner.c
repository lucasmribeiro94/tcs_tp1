#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Merge)
{
  RUN_TEST_CASE(Merge, TestMergeArrayNull);
  RUN_TEST_CASE(Merge, TestMergeArrayMaxMin);
  RUN_TEST_CASE(Merge, TestMergeArrayMinMax);
  RUN_TEST_CASE(Merge, TestMergeArrayMaxMax);
  RUN_TEST_CASE(Merge, TestMergeArrayMinMin);
  RUN_TEST_CASE(Merge, TestMergeArrayDuplicate);
  RUN_TEST_CASE(Merge, TestMergeArrayOdd);
  RUN_TEST_CASE(Merge, TestMergeArrayEven);
  RUN_TEST_CASE(Merge, TestMergeArrayNegative);
  RUN_TEST_CASE(Merge, TestMergeArrayPositive);
  RUN_TEST_CASE(Merge, TestMergeArrayMixed);
  RUN_TEST_CASE(Merge, TestMergeArrayOne);
  RUN_TEST_CASE(Merge, TestMergeArrayUnsorted);
  RUN_TEST_CASE(Merge, TestMergeArraySorted);
  RUN_TEST_CASE(Merge, TestMergeArrayAllZeros);
  RUN_TEST_CASE(Merge, TestMergeArrayAllOnes);
  RUN_TEST_CASE(Merge, TestMergeArrayTwoZeros);
  RUN_TEST_CASE(Merge, TestMergeArrayTwoMax);
  RUN_TEST_CASE(Merge, TestMergeArrayTwoMin);
  RUN_TEST_CASE(Merge, TestMergeArrayLarge);
}
