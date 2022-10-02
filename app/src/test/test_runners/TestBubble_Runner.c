#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Bubble)
{
  RUN_TEST_CASE(Bubble, TestBubbleSucesso1);
  RUN_TEST_CASE(Bubble, TestBubbleSucesso2);
  RUN_TEST_CASE(Bubble, TestBubbleSucesso3);
  RUN_TEST_CASE(Bubble, TestBubbleTamanhoFalha1);
  RUN_TEST_CASE(Bubble, TestBubbleTamanhoFalha2);
  RUN_TEST_CASE(Bubble, TestBubbleTamanhoFalha3);
  RUN_TEST_CASE(Bubble, TestBubbleTipoFalha1);
  RUN_TEST_CASE(Bubble, TestBubbleTipoFalha2);
  RUN_TEST_CASE(Bubble, TestBubbleTipoFalha3);
  RUN_TEST_CASE(Bubble, TestBubbleTipoFalha4);
  RUN_TEST_CASE(Bubble, TestBubbleTipoFalha5);
  RUN_TEST_CASE(Bubble, TestBubbleTipoFalha6);
}
