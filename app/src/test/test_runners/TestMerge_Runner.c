#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Merge)
{
  RUN_TEST_CASE(Quick, TestQuickSucesso1);
  RUN_TEST_CASE(Quick, TestQuickSucesso2);
  RUN_TEST_CASE(Quick, TestQuickSucesso3);
  RUN_TEST_CASE(Quick, TestQuickTamanhoFalha1);
  RUN_TEST_CASE(Quick, TestQuickTamanhoFalha2);
  RUN_TEST_CASE(Quick, TestQuickTamanhoFalha3);
  RUN_TEST_CASE(Quick, TestQuickTipoFalha1);
  RUN_TEST_CASE(Quick, TestQuickTipoFalha2);
  RUN_TEST_CASE(Quick, TestQuickTipoFalha3);
  RUN_TEST_CASE(Quick, TestQuickTipoFalha4);
  RUN_TEST_CASE(Quick, TestQuickTipoFalha5);
  RUN_TEST_CASE(Quick, TestQuickTipoFalha6);
}
