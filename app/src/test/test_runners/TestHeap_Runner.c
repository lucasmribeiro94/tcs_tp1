#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Heap)
{
  RUN_TEST_CASE(Heap, TestHeapSucesso1);
  RUN_TEST_CASE(Heap, TestHeapSucesso2);
  RUN_TEST_CASE(Heap, TestHeapSucesso3);
  RUN_TEST_CASE(Heap, TestHeapTamanhoFalha1);
  RUN_TEST_CASE(Heap, TestHeapTamanhoFalha2);
  RUN_TEST_CASE(Heap, TestHeapTamanhoFalha3);
  RUN_TEST_CASE(Heap, TestHeapTipoFalha1);
  RUN_TEST_CASE(Heap, TestHeapTipoFalha2);
  RUN_TEST_CASE(Heap, TestHeapTipoFalha3);
  RUN_TEST_CASE(Heap, TestHeapTipoFalha4);
  RUN_TEST_CASE(Heap, TestHeapTipoFalha5);
  RUN_TEST_CASE(Heap, TestHeapTipoFalha6);
}
