#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

int *array, len, status;

TEST_GROUP(Merge);

TEST_SETUP(Merge)
{
}

TEST_TEAR_DOWN(Merge)
{
}

TEST(Merge, TestMergeArrayNull)
{
  len = sizeof(null_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, null_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Merge, TestMergeArrayMaxMin)
{
  len = sizeof(max_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, max_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(max_min_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayMinMax)
{
  len = sizeof(min_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, min_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(min_max_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayMaxMax)
{
  len = sizeof(max_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, max_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(max_max_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayMinMin)
{
  len = sizeof(min_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, min_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(min_min_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayDuplicate)
{
  len = sizeof(duplicate_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, duplicate_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(duplicate_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayOdd)
{
  len = sizeof(odd_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, odd_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(odd_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayEven)
{
  len = sizeof(even_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, even_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(even_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayNegative)
{
  len = sizeof(negative_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, negative_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(negative_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayPositive)
{
  len = sizeof(positive_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, positive_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(positive_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayMixed)
{
  len = sizeof(mixed_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, mixed_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(mixed_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayOne)
{
  len = sizeof(one_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, one_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(1, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(one_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayUnsorted)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(unsorted_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArraySorted)
{
  len = sizeof(sorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, sorted_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sorted_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayAllOnes)
{
  len = sizeof(ones_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, ones_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(ones_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayAllZeros)
{
  len = sizeof(zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, zeros_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(zeros_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayTwoZeros)
{
  len = sizeof(two_zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_zeros_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_zeros_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayTwoMax)
{
  len = sizeof(two_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_max_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayTwoMin)
{
  len = sizeof(two_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_min_sorted, array, len);
  free(array);
}

TEST(Merge, TestMergeArrayLarge)
{
  len = sizeof(large_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, large_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}