#!/bin/bash

for source_file in *.c
do
        gcc -c $source_file -o ${source_file%.c}.o
done

ar rcs liball.a *.o

