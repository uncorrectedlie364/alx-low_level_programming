#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -Wextra -pedantic -fPIC *.c

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up - remove the object files
rm *.o
