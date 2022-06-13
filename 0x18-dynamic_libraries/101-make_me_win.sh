#!/bin/bash
wget -P /tmp https://github.com/jacobnzala/alx-low_level_programming/new/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
