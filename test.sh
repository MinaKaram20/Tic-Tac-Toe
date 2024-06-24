test.sh
#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# Print each command before executing it (useful for debugging)
set -x

# Create a build directory and navigate into it
mkdir -p build
cd build

# Run CMake to configure the project
cmake ..

# Build the project using make
make

# Run tests
ctest

echo "Configuration, build, and testing completed successfully."
