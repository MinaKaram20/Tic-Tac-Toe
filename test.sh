#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# Print each command before executing it (useful for debugging)
set -x

# Run the configure script
./configure

# Build the project using make
make

# Run tests
make check

# Perform additional checks (e.g., distribution checks)
make distcheck

echo "Configuration, build, and testing completed successfully."
