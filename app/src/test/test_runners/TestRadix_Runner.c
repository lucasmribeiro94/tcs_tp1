#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Radix)
{
  RUN_TEST_CASE(Radix, TestRadixSucesso1);
  RUN_TEST_CASE(Radix, TestRadixSucesso2);
  RUN_TEST_CASE(Radix, TestRadixSucesso3);
  RUN_TEST_CASE(Radix, TestRadixTamanhoFalha1);
  RUN_TEST_CASE(Radix, TestRadixTamanhoFalha2);
  RUN_TEST_CASE(Radix, TestRadixTamanhoFalha3);
  RUN_TEST_CASE(Radix, TestRadixTipoFalha1);
  RUN_TEST_CASE(Radix, TestRadixTipoFalha2);
  RUN_TEST_CASE(Radix, TestRadixTipoFalha3);
  RUN_TEST_CASE(Radix, TestRadixTipoFalha4);
  RUN_TEST_CASE(Radix, TestRadixTipoFalha5);
  RUN_TEST_CASE(Radix, TestRadixTipoFalha6);
}