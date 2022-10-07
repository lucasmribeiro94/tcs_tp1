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

TEST(Sort, TestSortLengthZero)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 0, (char *)"On2", BUBBLE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSortLengthHigher)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", BUBBLE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSortComplexityInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"ABC", BUBBLE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Sort, TestSortAlgorithmInvalid)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, 100, (char *)"On2", 10);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}