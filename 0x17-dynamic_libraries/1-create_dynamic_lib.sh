#!/bin/bash
gcc -c -Wall -Werror -fpic *.c
gcc -shared -o libholberton.so *.o
