#!/bin/bash
wget -q -o /tmp/libinjection.so https://github.com/Anteneh2121/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libinjection.so 
export LD_PRELOAD=/tmp/libinjection.so
