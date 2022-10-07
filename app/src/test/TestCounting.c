#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

int *array, len, status;

TEST_GROUP(Counting);

TEST_SETUP(Counting)
{
}

TEST_TEAR_DOWN(Counting)
{
}

TEST(Counting, TestCountingArrayNull)
{
  len = sizeof(null_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, null_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Counting, TestCountingArrayMaxMin)
{
  len = sizeof(max_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, max_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(max_min_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayMinMax)
{
  len = sizeof(min_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, min_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(min_max_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayMaxMax)
{
  len = sizeof(max_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, max_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(max_max_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayMinMin)
{
  len = sizeof(min_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, min_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(min_min_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayDuplicate)
{
  len = sizeof(duplicate_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, duplicate_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(duplicate_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayOdd)
{
  len = sizeof(odd_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, odd_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(odd_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayEven)
{
  len = sizeof(even_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, even_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(even_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayNegative)
{
  len = sizeof(negative_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, negative_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(negative_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayPositive)
{
  len = sizeof(positive_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, positive_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(positive_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayMixed)
{
  len = sizeof(mixed_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, mixed_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(mixed_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayOne)
{
  len = sizeof(one_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, one_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(1, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(one_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayUnsorted)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(unsorted_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArraySorted)
{
  len = sizeof(sorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, sorted_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sorted_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayAllOnes)
{
  len = sizeof(ones_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, ones_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(ones_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayAllZeros)
{
  len = sizeof(zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, zeros_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(zeros_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayTwoZeros)
{
  len = sizeof(two_zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_zeros_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_zeros_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayTwoMax)
{
  len = sizeof(two_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_max_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayTwoMin)
{
  len = sizeof(two_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_min_sorted, array, len);
  free(array);
}

TEST(Counting, TestCountingArrayLarge)
{
  len = sizeof(large_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, large_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", COUNTING);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}