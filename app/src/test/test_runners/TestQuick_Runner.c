#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Quick)
{
  RUN_TEST_CASE(Quick, TestQuickArrayNull);
  RUN_TEST_CASE(Quick, TestQuickArrayMaxMin);
  RUN_TEST_CASE(Quick, TestQuickArrayMinMax);
  RUN_TEST_CASE(Quick, TestQuickArrayMaxMax);
  RUN_TEST_CASE(Quick, TestQuickArrayMinMin);
  RUN_TEST_CASE(Quick, TestQuickArrayDuplicate);
  RUN_TEST_CASE(Quick, TestQuickArrayOdd);
  RUN_TEST_CASE(Quick, TestQuickArrayEven);
  RUN_TEST_CASE(Quick, TestQuickArrayNegative);
  RUN_TEST_CASE(Quick, TestQuickArrayPositive);
  RUN_TEST_CASE(Quick, TestQuickArrayMixed);
  RUN_TEST_CASE(Quick, TestQuickArrayOne);
  RUN_TEST_CASE(Quick, TestQuickArrayUnsorted);
  RUN_TEST_CASE(Quick, TestQuickArraySorted);
  RUN_TEST_CASE(Quick, TestQuickArrayAllZeros);
  RUN_TEST_CASE(Quick, TestQuickArrayAllOnes);
  RUN_TEST_CASE(Quick, TestQuickArrayTwoZeros);
  RUN_TEST_CASE(Quick, TestQuickArrayTwoMax);
  RUN_TEST_CASE(Quick, TestQuickArrayTwoMin);
  RUN_TEST_CASE(Quick, TestQuickArrayLarge);
}
