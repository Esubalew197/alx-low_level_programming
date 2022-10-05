#!/bin/bash
gcc -Wall -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
