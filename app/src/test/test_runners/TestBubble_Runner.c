#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Bubble)
{
  RUN_TEST_CASE(Bubble, TestBubbleArrayNull);
  RUN_TEST_CASE(Bubble, TestBubbleArrayMaxMin);
  RUN_TEST_CASE(Bubble, TestBubbleArrayMinMax);
  RUN_TEST_CASE(Bubble, TestBubbleArrayMaxMax);
  RUN_TEST_CASE(Bubble, TestBubbleArrayMinMin);
  RUN_TEST_CASE(Bubble, TestBubbleArrayDuplicate);
  RUN_TEST_CASE(Bubble, TestBubbleArrayOdd);
  RUN_TEST_CASE(Bubble, TestBubbleArrayEven);
  RUN_TEST_CASE(Bubble, TestBubbleArrayNegative);
  RUN_TEST_CASE(Bubble, TestBubbleArrayPositive);
  RUN_TEST_CASE(Bubble, TestBubbleArrayMixed);
  RUN_TEST_CASE(Bubble, TestBubbleArrayOne);
  RUN_TEST_CASE(Bubble, TestBubbleArrayUnsorted);
  RUN_TEST_CASE(Bubble, TestBubbleArraySorted);
  RUN_TEST_CASE(Bubble, TestBubbleArrayAllZeros);
  RUN_TEST_CASE(Bubble, TestBubbleArrayAllOnes);
  RUN_TEST_CASE(Bubble, TestBubbleArrayTwoZeros);
  RUN_TEST_CASE(Bubble, TestBubbleArrayTwoMax);
  RUN_TEST_CASE(Bubble, TestBubbleArrayTwoMin);
  RUN_TEST_CASE(Bubble, TestBubbleArrayLarge);
}
