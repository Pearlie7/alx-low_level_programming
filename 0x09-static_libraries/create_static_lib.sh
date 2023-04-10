#!bin/bash
gcc -c -Wall -Werror -Wetra -pedantic -std=gnu89 *.c
ar rc liball.a *.o
