#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestSortLengthZero);
  RUN_TEST_CASE(Sort, TestSortLengthHigher);
  RUN_TEST_CASE(Sort, TestSortComplexityInvalid);
  RUN_TEST_CASE(Sort, TestSortAlgorithmInvalid);
}
