#!/bin/bash
echo "Sanitizer step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Removing compiled files"
make clean

# echo "Running AddressSanitizer"
# make address_bubble
# make sanitizer_run

# echo "Removing compiled files"
# make clean

echo "Running MemorySanitizer"
make memory_bubble
make sanitizer_run
