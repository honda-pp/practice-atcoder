#!/bin/bash
g++ -std=c++14 -I /usr/local/include/eigen3/ $1'.cpp' -o $1
./$1