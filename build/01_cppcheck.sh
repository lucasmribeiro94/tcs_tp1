#!/bin/bash

echo "Starting cppcheck step"
APP_FOLDER=./app

echo "Installing cppcheck"
sudo dpkg --get-selections | grep cppcheck || sudo apt update && sudo apt install -y cppcheck

echo "Running cppcheck"
cppcheck --enable=all --suppress=missingIncludeSystem $APP_FOLDER/src/ -i $APP_FOLDER/src/test*
