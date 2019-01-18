#!/bin/sh

exe="CaptureROSBag"
des="/home/mango/Desktop/need" #你的路径
deplist=$(ldd $exe | awk  '{if (match($3,"/")){ printf("%s "),$3 } }')
cp $deplist $des
