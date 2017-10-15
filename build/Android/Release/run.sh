#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/targets/android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "./"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.emrals"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.emrals"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "emrals.apk" \
    --package=com.apps.emrals \
    --activity=emrals \
    --sym-dir="app/src/main/.uno" \
    "$@"
