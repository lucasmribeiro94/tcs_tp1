#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

#define TINY    1
#define SMALL   2
#define MEDIUM  10
#define LARGE   20
#define XLARGE  25
#define XXLARGE 30
 
/* Unsorted arrays */
static int sUnsorted[SMALL] = { 5, 1 };
static int mUnsorted[MEDIUM] = { 20, 18, 16, 14, 12, 9, 7, 5, 3, 1 };
static int lUnsorted[LARGE] = { 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5 };
/* Sorted arrays */
static int sSorted[SMALL] = { 1, 5 };
static int mSorted[MEDIUM] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 20 };
static int lSorted[LARGE] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
/* Invalids arrays*/
static int tSorted[TINY] = { 50 };
static int xlSorted[XLARGE] = { 120, 115, 110, 105, 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5, 0 };
static int xxlSorted[XXLARGE] = { 145, 140, 135, 130, 125, 120, 115, 110, 105, 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5, 0 };

int *arr, len, status;

TEST_GROUP(Heap);

TEST_SETUP(Heap)
{
}

TEST_TEAR_DOWN(Heap)
{
}

TEST(Heap, TestHeapSucesso1)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sSorted, arr, SMALL);
  free(arr);
}

TEST(Heap, TestHeapSucesso2)
{
  len = sizeof(int) * MEDIUM;
  arr = (int *)malloc(len); 
  memcpy(arr, mUnsorted, len);
  status = sort(arr, MEDIUM, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(mSorted, arr, MEDIUM);
  free(arr);
}

TEST(Heap, TestHeapSucesso3)
{
  len = sizeof(int) * LARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, lUnsorted, len);
  status = sort(arr, LARGE, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(lSorted, arr, LARGE);
  free(arr);
}

TEST(Heap, TestHeapTamanhoFalha1)
{
  len = sizeof(int) * TINY;
  arr = (int *)malloc(len); 
  memcpy(arr, tSorted, len);
  status = sort(arr, TINY, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTamanhoFalha2)
{
  len = sizeof(int) * XLARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, xlSorted, len);
  status = sort(arr, XLARGE, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTamanhoFalha3)
{
  len = sizeof(int) * XXLARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, xxlSorted, len);
  status = sort(arr, XXLARGE, (char *)"Onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTipoFalha1)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)"onlogn", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTipoFalha2)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)"ONLOGN", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTipoFalha3)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)" Onlogn ", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTipoFalha4)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)" onlogn ", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTipoFalha5)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)"On", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Heap, TestHeapTipoFalha6)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, (char *)"On2", HEAP);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}