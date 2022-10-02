#!/bin/bash

echo "Starting gcov step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Running gcov tests"
make gcov