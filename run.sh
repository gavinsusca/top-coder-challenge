#!/bin/bash

# Compile the C program
gcc reimbursement.c -o reimbursement

# Execute with provided arguments
./reimbursement "$1" "$2" "$3"
