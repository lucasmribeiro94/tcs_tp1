#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Bubble);
  RUN_TEST_GROUP(Counting);
  RUN_TEST_GROUP(Heap);
  RUN_TEST_GROUP(Insertion);
  RUN_TEST_GROUP(Merge);
  RUN_TEST_GROUP(Quick);
  RUN_TEST_GROUP(Radix);
  RUN_TEST_GROUP(Selection);
  RUN_TEST_GROUP(Sort);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
