#!/bin/bash

# List of scripts to test
scripts=(
    "test_localvar.elf"
    "test_global.elf"
    "test_static.elf"
    "test_dynamic.elf"
    "test_vector_components.elf"
)

# Path to the executable
cmd_path="../../../HelloElf"

# Temporary file
summary_file="./results.md"

echo "Starting test runs..."
echo "====================="

printf "|Script | run 1 | run 2 | run 3 |\n" > "$summary_file"
printf "| --- | --- | --- | --- |" >> "$summary_file"

for script in "${scripts[@]}"; do
    echo "Testing $script..."
    printf "\n|$script |" >> "$summary_file"

    for i in {1..3}; do
        echo "  Run $i/3..."
        exec_time=$( { time -p $cmd_path --script "$script" > /dev/null; } 2>&1 | grep real | awk '{print $2}' )

        echo "    Duration: ${exec_time}s"
        printf "${exec_time}s |" >> "$summary_file"
        sleep 2
    done
    echo "---------------------"
done
printf "\n" >> "$summary_file"

cat "$summary_file"


