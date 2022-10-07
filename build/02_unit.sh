#!/bin/bash

echo "Unit step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Running unit tests"
make unit