#!/bin/bash

echo "Starting Sanitizer step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Installing Clang compiler"
sudo dpkg --get-selections | grep clang || sudo apt update && sudo apt install -y clang

echo "Running AddressSanitizer"
make address_sanitizer

echo "Running MemorySanitizer"
make memory_sanitizer
