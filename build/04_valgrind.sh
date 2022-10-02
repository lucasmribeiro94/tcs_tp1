#!/bin/bash

echo "Starting valgrind step"
APP_FOLDER=./app
cd $APP_FOLDER


echo "Installing valgrind"
sudo dpkg --get-selections | grep valgrind || sudo apt update && sudo apt install -y valgrind

echo "Running Cachegrind analyzer"
make cachegrind

echo "Running Callgrind analyzer"
make callgrind

echo "Running Massif analyzer"
make massif

echo "Running Memcheck analyzer"
make memcheck