#!/bin/bash
wget -P .. https://raw.githubusercontent.com/ngusya/alx-low_level_programming/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD="$PWD/../libinject.so"

