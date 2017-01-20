#!/bin/bash

set -e

ndk=/root/ndk
cross_compile=$ndk/bin/arm-linux-androideabi

export ARCH=arm
export CC=$cross_compile-gcc
export LD=$cross_compile-ld
export AR=$cross_compile-ar
export CFLAGS="-static -I$ndk/sysroot/usr/include -I$ndk/usr/include"
export LDFLAGS="-static -L$ndk/usr/bin"
export ANDROID=1

make autotools
./configure --prefix $HOME/ltp --with-open-posix-testsuite --with-realtime-testsuite
make -j$(getconf _NPROCESSORS_ONLN)
make -j$(getconf _NPROCESSORS_ONLN) install
