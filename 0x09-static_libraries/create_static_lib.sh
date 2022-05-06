#!/bin/bash
gcc -c *.c
ar -rc libliball.a *.o
nm liball.a
