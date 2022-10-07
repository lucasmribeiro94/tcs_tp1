#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Insertion)
{
  RUN_TEST_CASE(Insertion, TestInsertionArrayNull);
  RUN_TEST_CASE(Insertion, TestInsertionArrayMaxMin);
  RUN_TEST_CASE(Insertion, TestInsertionArrayMinMax);
  RUN_TEST_CASE(Insertion, TestInsertionArrayMaxMax);
  RUN_TEST_CASE(Insertion, TestInsertionArrayMinMin);
  RUN_TEST_CASE(Insertion, TestInsertionArrayDuplicate);
  RUN_TEST_CASE(Insertion, TestInsertionArrayOdd);
  RUN_TEST_CASE(Insertion, TestInsertionArrayEven);
  RUN_TEST_CASE(Insertion, TestInsertionArrayNegative);
  RUN_TEST_CASE(Insertion, TestInsertionArrayPositive);
  RUN_TEST_CASE(Insertion, TestInsertionArrayMixed);
  RUN_TEST_CASE(Insertion, TestInsertionArrayOne);
  RUN_TEST_CASE(Insertion, TestInsertionArrayUnsorted);
  RUN_TEST_CASE(Insertion, TestInsertionArraySorted);
  RUN_TEST_CASE(Insertion, TestInsertionArrayAllZeros);
  RUN_TEST_CASE(Insertion, TestInsertionArrayAllOnes);
  RUN_TEST_CASE(Insertion, TestInsertionArrayTwoZeros);
  RUN_TEST_CASE(Insertion, TestInsertionArrayTwoMax);
  RUN_TEST_CASE(Insertion, TestInsertionArrayTwoMin);
  RUN_TEST_CASE(Insertion, TestInsertionArrayLarge);
}
