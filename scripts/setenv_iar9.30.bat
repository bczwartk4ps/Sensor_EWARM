@echo on

rem Setup environment and add needed components to the PATH.
rem We need IAR EWARM compiler toolchain and build tools and C/C++test Professional.

set PATH=c:\Program Files\IAR Systems\Embedded Workbench 9.1\common\bin;c:\Program Files\IAR Systems\Embedded Workbench 9.1\arm\bin;c:\Parasoft\apps\cpptest-pro-2022.2.0;c:\Parasoft\apps\cpptest-pro-2022.2.0\bin;%PATH%

iarbuild --version
iccarm --version
ilinkarm --version
cpptestcli -version
