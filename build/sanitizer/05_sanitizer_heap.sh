#!/bin/bash
echo "Sanitizer step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Removing compiled files"
make clean

# echo "Running AddressSanitizer"
# make address_heap
# make sanitizer_run

# echo "Removing compiled files"
# make clean

echo "Running MemorySanitizer"
make memory_heap
make sanitizer_run
