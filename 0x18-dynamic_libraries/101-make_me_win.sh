#!/bin/bash
wget -p .. https://raw.githubusercontent.com/girume01/alx-low_level_programming/master/0x18-dynamic_libraries/librank.so
export LD_PRELOAD="$PWD/../librank.so"

