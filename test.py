import os
import subprocess
import sys

def run_command(command):
    """Run a command and handle errors."""
    try:
        result = subprocess.run(command, check=True, text=True, capture_output=True)
        print(result.stdout)
        print(result.stderr)
    except subprocess.CalledProcessError as e:
        print(f"Error occurred while running command: {command}")
        print(e.stdout)
        print(e.stderr)
        sys.exit(1)

def main():
    # Define the source directory
    src_dir = "/home/runner/work/Tic-Tac-Toe/Tic-Tac-Toe"
    
    # Check if the source directory exists
    if not os.path.isdir(src_dir):
        print(f'The source directory "{src_dir}" does not exist.')
        sys.exit(1)

    # Change to the build directory (or create it if it doesn't exist)
    build_dir = os.path.join(src_dir, "build")
    os.makedirs(build_dir, exist_ok=True)
    os.chdir(build_dir)

    # Run CMake
    run_command(["cmake", ".."])

    # Build the project
    run_command(["make"])

    # Run tests
    run_command(["ctest"])

    print("Configuration, build, and testing completed successfully.")

if __name__ == "__main__":
    main()
