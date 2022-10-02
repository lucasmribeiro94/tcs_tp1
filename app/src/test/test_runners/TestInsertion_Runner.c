#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Insertion)
{
  RUN_TEST_CASE(Insertion, TestInsertionSucesso1);
  RUN_TEST_CASE(Insertion, TestInsertionSucesso2);
  RUN_TEST_CASE(Insertion, TestInsertionSucesso3);
  RUN_TEST_CASE(Insertion, TestInsertionTamanhoFalha1);
  RUN_TEST_CASE(Insertion, TestInsertionTamanhoFalha2);
  RUN_TEST_CASE(Insertion, TestInsertionTamanhoFalha3);
  RUN_TEST_CASE(Insertion, TestInsertionTipoFalha1);
  RUN_TEST_CASE(Insertion, TestInsertionTipoFalha2);
  RUN_TEST_CASE(Insertion, TestInsertionTipoFalha3);
  RUN_TEST_CASE(Insertion, TestInsertionTipoFalha4);
  RUN_TEST_CASE(Insertion, TestInsertionTipoFalha5);
  RUN_TEST_CASE(Insertion, TestInsertionTipoFalha6);
}