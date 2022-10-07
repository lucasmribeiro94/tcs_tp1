#!/bin/bash
echo "Gcov step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Compiling tests with code coverage"
make gcov

echo "Bubble coverage"
make gcov_bubble

echo "Counting coverage"
make gcov_counting

echo "Heap coverage"
make gcov_heap

echo "Insertion coverage"
make gcov_insertion

echo "Merge coverage"
make gcov_merge

echo "Quick coverage"
make gcov_quick

echo "Radix coverage"
make gcov_radix

echo "Selection coverage"
make gcov_selection
