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

MAIN_OUTPUT=main.o

MAIN_BUBBLE=main_bubble.c
MAIN_COUNTING=main_counting.c
MAIN_HEAP=main_heap.c
MAIN_INSERTION=main_insertion.c
MAIN_MERGE=main_merge.c
MAIN_QUICK=main_quick.c
MAIN_RADIX=main_radix.c
MAIN_SELECTION=main_selection.c

TEST_FILES=src/test/test_runners/all_tests.c
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
UNIT_CFLAGS+= -Wdiscarded-qualifiers

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
MEMCHECK_ARGS=--leak-check=full --show-leak-kinds=all --track-origins=yes

manual_test: clean compile run

compile:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) main_radix.c -o index.o

run: 
	./index.o

coverage_compile:
	$(GCC_COMPILER) $(UNIT_CFLAGS) $(GCOV_CFLAGS) $(INC_DIRS) $(SYMBOLS) $(UNIT_SRC_FILES) -o $(UNIT_TARGET)

# UNIT TESTS
unit: clean unit_compile unit_run
unit_compile:
	$(GCC_COMPILER) $(UNIT_CFLAGS) $(INC_DIRS) $(SYMBOLS) $(UNIT_SRC_FILES) -o $(UNIT_TARGET)
unit_run:
	./$(UNIT_TARGET) -v

# COVERAGE
gcov: clean gcov_compile gcov_execute
gcov_compile:
	$(GCC_COMPILER) $(UNIT_CFLAGS) $(GCOV_CFLAGS) $(INC_DIRS) $(SYMBOLS) $(UNIT_SRC_FILES) -o $(UNIT_TARGET)
gcov_execute:
	./$(UNIT_TARGET) -v

gcov_bubble:
	gcov -b bubble_sort.c
gcov_counting:
	gcov -b counting_sort.c
gcov_heap:
	gcov -b heap_sort.c
gcov_insertion:
	gcov -b insertion_sort.c
gcov_merge:
	gcov -b merge_sort.c
gcov_quick:
	gcov -b quick_sort.c
gcov_radix:
	gcov -b radix_sort.c
gcov_selection:
	gcov -b selection_sort.c

# VALGRIND
valgrind_bubble:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_BUBBLE) -o $(MAIN_OUTPUT)
valgrind_counting:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_COUNTING) -o $(MAIN_OUTPUT)
valgrind_heap:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_HEAP) -o $(MAIN_OUTPUT)
valgrind_insertion:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_INSERTION) -o $(MAIN_OUTPUT)
valgrind_merge:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_MERGE) -o $(MAIN_OUTPUT)
valgrind_quick:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_QUICK) -o $(MAIN_OUTPUT)
valgrind_radix:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_RADIX) -o $(MAIN_OUTPUT)
valgrind_selection:
	$(GCC_COMPILER) -g -Wall -Wfatal-errors $(SRC_FILES) $(MAIN_SELECTION) -o $(MAIN_OUTPUT)

cachegrind: 
	valgrind $(CACHEGRIND_ARGS) ./$(MAIN_OUTPUT)
callgrind:
	valgrind $(CALLGRIND_ARGS) ./$(MAIN_OUTPUT)
massif: 
	valgrind $(MASSIF_ARGS) ./$(MAIN_OUTPUT)
memcheck:
	valgrind $(MEMCHECK_ARGS) ./$(MAIN_OUTPUT)

# SANITIZER
address_bubble:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_BUBBLE) -o $(MAIN_OUTPUT)
address_counting:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_COUNTING) -o $(MAIN_OUTPUT)
address_heap:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_HEAP) -o $(MAIN_OUTPUT)
address_insertion:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_INSERTION) -o $(MAIN_OUTPUT)
address_merge:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_MERGE) -o $(MAIN_OUTPUT)
address_quick:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_QUICK) -o $(MAIN_OUTPUT)
address_radix:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_RADIX) -o $(MAIN_OUTPUT)
address_selection:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(SRC_FILES) $(MAIN_SELECTION) -o $(MAIN_OUTPUT)

memory_bubble:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_BUBBLE) -o $(MAIN_OUTPUT)
memory_counting:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_COUNTING) -o $(MAIN_OUTPUT)
memory_heap:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_HEAP) -o $(MAIN_OUTPUT)
memory_insertion:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_INSERTION) -o $(MAIN_OUTPUT)
memory_merge:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_MERGE) -o $(MAIN_OUTPUT)
memory_quick:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_QUICK) -o $(MAIN_OUTPUT)
memory_radix:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_RADIX) -o $(MAIN_OUTPUT)
memory_selection:
	$(CLANG_COMPILER) -g -Wall -Wfatal-errors -fsanitize=memory $(SRC_FILES) $(MAIN_SELECTION) -o $(MAIN_OUTPUT)

sanitizer_run:
	./$(MAIN_OUTPUT)

# DELETE FILES
clean:
	rm -rf *.out *.o cov* *.dSYM *.gcda *.gcno *.gcov cachegrind* callgrind* massif*