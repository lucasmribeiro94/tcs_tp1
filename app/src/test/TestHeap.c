#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

int *array, len, status;

TEST_GROUP(Heap);

TEST_SETUP(Heap)
{
}

TEST_TEAR_DOWN(Heap)
{
}

TEST(Heap, TestHeapArrayNull)
{
  len = sizeof(null_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, null_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}

TEST(Heap, TestHeapArrayMaxMin)
{
  len = sizeof(max_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, max_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(max_min_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayMinMax)
{
  len = sizeof(min_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, min_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(min_max_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayMaxMax)
{
  len = sizeof(max_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, max_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(max_max_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayMinMin)
{
  len = sizeof(min_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, min_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(min_min_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayDuplicate)
{
  len = sizeof(duplicate_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, duplicate_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(duplicate_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayOdd)
{
  len = sizeof(odd_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, odd_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(odd_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayEven)
{
  len = sizeof(even_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, even_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(even_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayNegative)
{
  len = sizeof(negative_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, negative_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(negative_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayPositive)
{
  len = sizeof(positive_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, positive_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(positive_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayMixed)
{
  len = sizeof(mixed_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, mixed_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(mixed_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayOne)
{
  len = sizeof(one_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, one_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(one_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayUnsorted)
{
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(unsorted_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArraySorted)
{
  len = sizeof(sorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, sorted_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sorted_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayAllOnes)
{
  len = sizeof(ones_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, ones_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(ones_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayAllZeros)
{
  len = sizeof(zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, zeros_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(zeros_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayTwoZeros)
{
  len = sizeof(two_zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_zeros_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_zeros_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayTwoMax)
{
  len = sizeof(two_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_max_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_max_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayTwoMin)
{
  len = sizeof(two_min_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_min_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(two_min_sorted, array, len);
  free(array);
}

TEST(Heap, TestHeapArrayLarge)
{
  len = sizeof(large_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, large_array, sizeof(int) * len);
  status = sort(array, len, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(array);
}