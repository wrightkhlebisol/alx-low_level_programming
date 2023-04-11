#!/bin/bash

gcc -Wall -Wextra -Werror -c *.c
ar rcs liball.a *.o
