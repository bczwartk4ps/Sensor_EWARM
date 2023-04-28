@echo on

rem scan project build to collect compile and link information in a BDF file

del /q /s .\Debug\cpptestscan.bdf

rem if argvars file is used, we need it for both clean and build:
rem iarbuild Sensor.ewp -clean Debug -varfile Sensor.custom_argvars
rem cpptesttrace --cpptesttraceResponseFileOption=-f iarbuild Sensor.ewp -make Debug -log all -varfile Sensor.custom_argvars

iarbuild Sensor.ewp -clean Debug
cpptesttrace --cpptesttraceResponseFileOption=-f iarbuild Sensor.ewp -make Debug -log all 

dir
dir .\Debug
