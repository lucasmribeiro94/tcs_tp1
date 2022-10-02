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

TEST_GROUP(Quick);

TEST_SETUP(Quick)
{
}

TEST_TEAR_DOWN(Quick)
{
}

TEST(Quick, TestQuickSucesso1)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(sSorted, arr, SMALL);
  free(arr);
}

TEST(Quick, TestQuickSucesso2)
{
  len = sizeof(int) * MEDIUM;
  arr = (int *)malloc(len); 
  memcpy(arr, mUnsorted, len);
  status = sort(arr, MEDIUM, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(mSorted, arr, MEDIUM);
  free(arr);
}

TEST(Quick, TestQuickSucesso3)
{
  len = sizeof(int) * LARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, lUnsorted, len);
  status = sort(arr, LARGE, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(0, status);
  TEST_ASSERT_EQUAL_INT32_ARRAY(lSorted, arr, LARGE);
  free(arr);
}

TEST(Quick, TestQuickTamanhoFalha1)
{
  len = sizeof(int) * TINY;
  arr = (int *)malloc(len); 
  memcpy(arr, tSorted, len);
  status = sort(arr, TINY, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTamanhoFalha2)
{
  len = sizeof(int) * XLARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, xlSorted, len);
  status = sort(arr, XLARGE, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTamanhoFalha3)
{
  len = sizeof(int) * XXLARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, xxlSorted, len);
  status = sort(arr, XXLARGE, "Onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTipoFalha1)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, "onlogn", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTipoFalha2)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, "ONLOGN", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTipoFalha3)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, " Onlogn ", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTipoFalha4)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, " onlogn ", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTipoFalha5)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, "On", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}

TEST(Quick, TestQuickTipoFalha6)
{
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  status = sort(arr, SMALL, "On2", QUICK);
  
  TEST_ASSERT_EQUAL(1, status);
  free(arr);
}