#!/bin/bash
echo "Sanitizer step"
APP_FOLDER=./app
cd $APP_FOLDER

echo "Installing Clang compiler"
sudo dpkg --get-selections | grep clang || sudo apt update && sudo apt install -y clang
