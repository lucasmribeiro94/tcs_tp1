#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

int *array, len, status;

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{
}

TEST_TEAR_DOWN(Sort)
{
}

TEST(Sort, TestBubbleSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"On2", BUBBLE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestBubbleSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", BUBBLE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestBubbleSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", BUBBLE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestCountingSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestCountingSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestCountingSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", COUNTING);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestHeapSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestHeapSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestHeapSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestInsertionSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"On2", INSERTION);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestInsertionSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", INSERTION);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestInsertionSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", INSERTION);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestMergeSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestMergeSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestMergeSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", MERGE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestQuickSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestQuickSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestQuickSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestRadixSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"On", RADIX);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestRadixSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On", RADIX);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestRadixSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", RADIX);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSelectionSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"On2", SELECTION);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSelectionSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", SELECTION);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSelectionSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", SELECTION);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSortAlgorithmInvalidNumber)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", 10);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSortAlgorithmInvalidChar)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", 'A');
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}