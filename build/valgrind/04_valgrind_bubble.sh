#!/bin/bash
echo "Valgrind step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Removing compiled files"
make clean

echo "Bubble Sort"
make valgrind_bubble

# echo "Running Cachegrind analyzer"
# make cachegrind

# echo "Running Callgrind analyzer"
# make callgrind

# echo "Running Massif analyzer"
# make massif

echo "Running Memcheck analyzer"
make memcheck
