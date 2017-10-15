#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/targets/android/gradle-build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e

export JAVA_HOME=""

export SCRIPT_DIR="`dirname "$0"`"

echo "## 2/2: emrals.apk"

cd "$SCRIPT_DIR/"
if [ ! -d """" ]; then
    echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android' and 'uno clean'. Expected to find cmake in """ >&2
    exit 1
fi

./gradlew assembleRelease

cd "$SCRIPT_DIR"

##if !#(LIBRARY:Defined)
ln -sf app/build/outputs/apk/app-release.apk emrals.apk
##endif
