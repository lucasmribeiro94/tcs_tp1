#!/bin/bash
echo "Valgrind step"

echo "Installing valgrind"
sudo dpkg --get-selections | grep valgrind || sudo apt update && sudo apt install -y valgrind
