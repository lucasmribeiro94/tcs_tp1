#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Selection)
{
  RUN_TEST_CASE(Selection, TestSelectionSucesso1);
  RUN_TEST_CASE(Selection, TestSelectionSucesso2);
  RUN_TEST_CASE(Selection, TestSelectionSucesso3);
  RUN_TEST_CASE(Selection, TestSelectionTamanhoFalha1);
  RUN_TEST_CASE(Selection, TestSelectionTamanhoFalha2);
  RUN_TEST_CASE(Selection, TestSelectionTamanhoFalha3);
  RUN_TEST_CASE(Selection, TestSelectionTipoFalha1);
  RUN_TEST_CASE(Selection, TestSelectionTipoFalha2);
  RUN_TEST_CASE(Selection, TestSelectionTipoFalha3);
  RUN_TEST_CASE(Selection, TestSelectionTipoFalha4);
  RUN_TEST_CASE(Selection, TestSelectionTipoFalha5);
  RUN_TEST_CASE(Selection, TestSelectionTipoFalha6);
}
