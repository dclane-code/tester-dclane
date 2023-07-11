#!/bin/sh

rm -f tester.tgz
tar czvf tester.tgz src/main.c src/Makefile
snapcraft clean tester-dclane
snapcraft
rm -rf squashfs-root
unsquashfs ./tester-dclane_*.snap
snap try squashfs-root
