#!/bin/sh

exe="CaptureROSBag"
des="/home/mango/myQT/CaptureROSBag-build-desktop-Qt_4_8_6_in_PATH__Qt-4_8_6____/Release"

deplist=$(ldd $exe | awk  '{if (match($3,"/")){ printf("%s "),$3 } }')
cp $deplist $des
