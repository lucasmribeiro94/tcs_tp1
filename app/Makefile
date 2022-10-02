# We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
		CLEANUP = del /F /Q
		MKDIR = mkdir
  else # in a bash-like shell, like msys
		CLEANUP = rm -f
		MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif

GCC_COMPILER=gcc
CLANG_COMPILER=clang

SRC_FILES=src/quick_sort.c
SRC_FILES+= src/merge_sort.c
SRC_FILES+= src/heap_sort.c
SRC_FILES+=	src/selection_sort.c
SRC_FILES+=	src/insertion_sort.c
SRC_FILES+=	src/bubble_sort.c
SRC_FILES+=	src/radix_sort.c
SRC_FILES+=	src/counting_sort.c
SRC_FILES+= src/sort.c

MAIN_FILE=main.c
MAIN_OUTPUT=main.o

TEST_FILES=src/test/test_runners/all_tests.c
TEST_FILES+= src/test/TestAlgorithms.c src/test/test_runners/TestAlgorithms_Runner.c
TEST_FILES+= src/test/TestBubble.c src/test/test_runners/TestBubble_Runner.c
TEST_FILES+= src/test/TestCounting.c src/test/test_runners/TestCounting_Runner.c
TEST_FILES+= src/test/TestHeap.c src/test/test_runners/TestHeap_Runner.c
TEST_FILES+= src/test/TestInsertion.c src/test/test_runners/TestInsertion_Runner.c
TEST_FILES+= src/test/TestMerge.c src/test/test_runners/TestMerge_Runner.c
TEST_FILES+= src/test/TestQuick.c src/test/test_runners/TestQuick_Runner.c
TEST_FILES+= src/test/TestRadix.c src/test/test_runners/TestRadix_Runner.c
TEST_FILES+= src/test/TestSelection.c src/test/test_runners/TestSelection_Runner.c

# UNIT
UNITY_ROOT=../unit

UNIT_CFLAGS=-std=c99
UNIT_CFLAGS+= -Wall
UNIT_CFLAGS+= -Wextra
UNIT_CFLAGS+= -Wpointer-arith
UNIT_CFLAGS+= -Wcast-align
UNIT_CFLAGS+= -Wwrite-strings
UNIT_CFLAGS+= -Wswitch-default
UNIT_CFLAGS+= -Wunreachable-code
UNIT_CFLAGS+= -Winit-self
UNIT_CFLAGS+= -Wmissing-field-initializers
UNIT_CFLAGS+= -Wno-unknown-pragmas
UNIT_CFLAGS+= -Wstrict-prototypes
UNIT_CFLAGS+= -Wundef
UNIT_CFLAGS+= -Wold-style-definition

UNIT_TARGET_BASE=all_tests
UNIT_TARGET = $(UNIT_TARGET_BASE)$(TARGET_EXTENSION)
UNIT_SRC_FILES=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
 	$(SRC_FILES) \
	$(TEST_FILES)
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src
SYMBOLS=

GCOV_CFLAGS=-fprofile-arcs
GCOV_CFLAGS+= -ftest-coverage

CACHEGRIND_ARGS=--tool=cachegrind
CALLGRIND_ARGS=--tool=callgrind
MASSIF_ARGS=--tool=massif
MEMCHECK_ARGS=--leak-check=full --show-leak-kinds=all

idx: clean compile run

compile:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) index.c -o index.o

run: 
	./index.o

# UNIT TESTS
unit: clean unit_compile unit_run
gcov: clean gcov_compile gcov_execute gcov_run
# VALGRIND
cachegrind: clean valgrind_compile cachegrind_run
callgrind: clean valgrind_compile callgrind_run
massif: clean valgrind_compile massif_run
memcheck: clean valgrind_compile memcheck_run
# SANITIZER
address_sanitizer: clean address_compile sanitizer_run
memory_sanitizer: clean memory_compile sanitizer_run

unit_compile:
	$(GCC_COMPILER) $(UNIT_CFLAGS) $(INC_DIRS) $(SYMBOLS) $(UNIT_SRC_FILES) -o $(UNIT_TARGET)

unit_run:
	./$(UNIT_TARGET) -v

gcov_compile:
	$(GCC_COMPILER) $(UNIT_CFLAGS) $(GCOV_CFLAGS) $(INC_DIRS) $(SYMBOLS) $(UNIT_SRC_FILES) -o $(UNIT_TARGET)

gcov_execute:
	./$(UNIT_TARGET) -v

gcov_run:
	gcov -b sort.c

valgrind_compile:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_FILE) -o $(MAIN_OUTPUT)

cachegrind_run:
	valgrind $(CACHEGRIND_ARGS) ./$(MAIN_OUTPUT)

callgrind_run:
	valgrind $(CALLGRIND_ARGS) ./$(MAIN_OUTPUT)

massif_run:
	valgrind $(MASSIF_ARGS) ./$(MAIN_OUTPUT)

memcheck_run:
	valgrind $(MEMCHECK_ARGS) ./$(MAIN_OUTPUT)

address_compile:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_FILE) -o $(MAIN_OUTPUT)

memory_compile:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_FILE) -o $(MAIN_OUTPUT)

sanitizer_run:
	./$(MAIN_OUTPUT)

clean:
	rm -rf *.out *.o cov* *.dSYM *.gcda *.gcno *.gcov cachegrind* callgrind* massif*