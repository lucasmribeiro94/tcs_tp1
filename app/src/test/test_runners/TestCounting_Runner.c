#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Counting)
{
  RUN_TEST_CASE(Counting, TestCountingSucesso1);
  RUN_TEST_CASE(Counting, TestCountingSucesso2);
  RUN_TEST_CASE(Counting, TestCountingSucesso3);
  RUN_TEST_CASE(Counting, TestCountingTamanhoFalha1);
  RUN_TEST_CASE(Counting, TestCountingTamanhoFalha2);
  RUN_TEST_CASE(Counting, TestCountingTamanhoFalha3);
  RUN_TEST_CASE(Counting, TestCountingTipoFalha1);
  RUN_TEST_CASE(Counting, TestCountingTipoFalha2);
  RUN_TEST_CASE(Counting, TestCountingTipoFalha3);
  RUN_TEST_CASE(Counting, TestCountingTipoFalha4);
  RUN_TEST_CASE(Counting, TestCountingTipoFalha5);
  RUN_TEST_CASE(Counting, TestCountingTipoFalha6);
}
