#!/bin/bash

echo "RUNNING CPPCHECK STEP"
APP_FOLDER=./app

sudo dpkg --get-selections | grep cppcheck || sudo apt update && sudo apt install -y cppcheck
# TODO: enable cppcheck verification
# cppcheck --enable=all --suppress=missingIncludeSystem $APP_FOLDER/src/ -i $APP_FOLDER/src/test*
