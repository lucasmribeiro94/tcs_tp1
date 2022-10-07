#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestBubbleSortLengthZero);
  RUN_TEST_CASE(Sort, TestBubbleSortLengthHigher);
  RUN_TEST_CASE(Sort, TestBubbleSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestCountingSortLengthZero);
  RUN_TEST_CASE(Sort, TestCountingSortLengthHigher);
  RUN_TEST_CASE(Sort, TestCountingSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestHeapSortLengthZero);
  RUN_TEST_CASE(Sort, TestHeapSortLengthHigher);
  RUN_TEST_CASE(Sort, TestHeapSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestInsertionSortLengthZero);
  RUN_TEST_CASE(Sort, TestInsertionSortLengthHigher);
  RUN_TEST_CASE(Sort, TestInsertionSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestMergeSortLengthZero);
  RUN_TEST_CASE(Sort, TestMergeSortLengthHigher);
  RUN_TEST_CASE(Sort, TestMergeSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestQuickSortLengthZero);
  RUN_TEST_CASE(Sort, TestQuickSortLengthHigher);
  RUN_TEST_CASE(Sort, TestQuickSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestRadixSortLengthZero);
  RUN_TEST_CASE(Sort, TestRadixSortLengthHigher);
  RUN_TEST_CASE(Sort, TestRadixSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestSelectionSortLengthZero);
  RUN_TEST_CASE(Sort, TestSelectionSortLengthHigher);
  RUN_TEST_CASE(Sort, TestSelectionSortComplexityInvalid);

  RUN_TEST_CASE(Sort, TestSortAlgorithmInvalidNumber);
  RUN_TEST_CASE(Sort, TestSortAlgorithmInvalidChar);  
}
