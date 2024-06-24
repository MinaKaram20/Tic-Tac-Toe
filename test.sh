#!/usr/bin/bash -e

# Set shell options
set -e
set -o pipefail

# Define source directory
SRC_DIR="/home/runner/work/Tic-Tac-Toe/Tic-Tac-Toe"

# Check if the source directory exists
if [ ! -d "$SRC_DIR" ]; then
  echo "The source directory \"$SRC_DIR\" does not exist."
  exit 1
fi

# Run CMake
cmake "$SRC_DIR"

# Build the project
make

# Run tests
ctest

echo "Configuration, build, and testing completed successfully."
