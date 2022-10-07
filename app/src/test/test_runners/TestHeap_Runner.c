#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Heap)
{
  RUN_TEST_CASE(Heap, TestHeapArrayNull);
  RUN_TEST_CASE(Heap, TestHeapArrayMaxMin);
  RUN_TEST_CASE(Heap, TestHeapArrayMinMax);
  RUN_TEST_CASE(Heap, TestHeapArrayMaxMax);
  RUN_TEST_CASE(Heap, TestHeapArrayMinMin);
  RUN_TEST_CASE(Heap, TestHeapArrayDuplicate);
  RUN_TEST_CASE(Heap, TestHeapArrayOdd);
  RUN_TEST_CASE(Heap, TestHeapArrayEven);
  RUN_TEST_CASE(Heap, TestHeapArrayNegative);
  RUN_TEST_CASE(Heap, TestHeapArrayPositive);
  RUN_TEST_CASE(Heap, TestHeapArrayMixed);
  RUN_TEST_CASE(Heap, TestHeapArrayOne);
  RUN_TEST_CASE(Heap, TestHeapArrayUnsorted);
  RUN_TEST_CASE(Heap, TestHeapArraySorted);
  RUN_TEST_CASE(Heap, TestHeapArrayAllZeros);
  RUN_TEST_CASE(Heap, TestHeapArrayAllOnes);
  RUN_TEST_CASE(Heap, TestHeapArrayTwoZeros);
  RUN_TEST_CASE(Heap, TestHeapArrayTwoMax);
  RUN_TEST_CASE(Heap, TestHeapArrayTwoMin);
  RUN_TEST_CASE(Heap, TestHeapArrayLarge);
}
