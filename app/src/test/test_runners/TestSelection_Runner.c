#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Selection)
{
  RUN_TEST_CASE(Selection, TestSelectionArrayNull);
  RUN_TEST_CASE(Selection, TestSelectionArrayMaxMin);
  RUN_TEST_CASE(Selection, TestSelectionArrayMinMax);
  RUN_TEST_CASE(Selection, TestSelectionArrayMaxMax);
  RUN_TEST_CASE(Selection, TestSelectionArrayMinMin);
  RUN_TEST_CASE(Selection, TestSelectionArrayDuplicate);
  RUN_TEST_CASE(Selection, TestSelectionArrayOdd);
  RUN_TEST_CASE(Selection, TestSelectionArrayEven);
  RUN_TEST_CASE(Selection, TestSelectionArrayNegative);
  RUN_TEST_CASE(Selection, TestSelectionArrayPositive);
  RUN_TEST_CASE(Selection, TestSelectionArrayMixed);
  RUN_TEST_CASE(Selection, TestSelectionArrayOne);
  RUN_TEST_CASE(Selection, TestSelectionArrayUnsorted);
  RUN_TEST_CASE(Selection, TestSelectionArraySorted);
  RUN_TEST_CASE(Selection, TestSelectionArrayAllZeros);
  RUN_TEST_CASE(Selection, TestSelectionArrayAllOnes);
  RUN_TEST_CASE(Selection, TestSelectionArrayTwoZeros);
  RUN_TEST_CASE(Selection, TestSelectionArrayTwoMax);
  RUN_TEST_CASE(Selection, TestSelectionArrayTwoMin);
  RUN_TEST_CASE(Selection, TestSelectionArrayLarge);
}
