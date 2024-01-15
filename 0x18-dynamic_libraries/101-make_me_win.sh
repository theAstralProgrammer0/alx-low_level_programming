#!/bin/bash
wget -P /tmp https://github.com/theAstralProgrammer0/alx-low_level_programming/blob/main/0x18-dynamic_libraries/lucky.so 
export LD_PRELOAD=/tmp/lucky.so
