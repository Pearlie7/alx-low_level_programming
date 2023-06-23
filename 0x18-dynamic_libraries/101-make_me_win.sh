#!/bin/bash
wget -P ../ https://raw.github.com/pearlie7/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
