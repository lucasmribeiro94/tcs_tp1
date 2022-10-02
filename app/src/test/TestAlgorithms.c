#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

#define ARRAY_SIZE    10

static int uArray[ARRAY_SIZE] = { 20, 18, 16, 14, 12, 9, 7, 5, 3, 1 };
static int sArray[ARRAY_SIZE] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 20 };
int *arr, len, status; 

TEST_GROUP(Algorithms);

TEST_SETUP(Algorithms)
{
}

TEST_TEAR_DOWN(Algorithms)
{
}

TEST(Algorithms, TestAlgorithmsSucesso1)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);
  status = sort(arr, ARRAY_SIZE, "On", COUNTING);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso2)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);
  status = sort(arr, ARRAY_SIZE, "On", RADIX);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso3)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "On2", BUBBLE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso4)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "On2", INSERTION);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso5)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "On2", SELECTION);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso6)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso7)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "Onlogn", MERGE);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsSucesso8)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sArray, arr, ARRAY_SIZE);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsFalha1)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);
  
  status = sort(arr, ARRAY_SIZE, "Onlogn", -1);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsFalha2)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "Onlogn", 0);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsFalha3)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "Onlogn", 8);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Algorithms, TestAlgorithmsFalha4)
{
  len = sizeof(int) * ARRAY_SIZE;
  arr = (int *)malloc(len);
  memcpy(arr, uArray, len);

  status = sort(arr, ARRAY_SIZE, "Onlogn", 9);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}
