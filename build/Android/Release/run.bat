:: This file was generated based on C:/Users/q/AppData/Local/Fusetools/Packages/UnoCore/1.2.1/targets/android/run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" "%~dp0emrals"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.emrals
    "C:\Program Files (x86)\Fuse\uno.exe" adb uninstall com.apps.emrals
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0emrals.apk" ^
    --package=com.apps.emrals ^
    --activity=emrals ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
