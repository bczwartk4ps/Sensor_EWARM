# Sensor_EWARM
Project to demo C/C++test embedded testing.


Prerequisites:
* IAR EWARM 9.x installed at the default location
* C/C++test Professional installed at C:\Parasoft\apps\cpptest-pro-2022.2.0
* This project cloned at C:\work\parasoft

Steps:
(Adapt paths in commands and scripts to match your setup.)

### --- One-time setup ---

0. Verify IAR EWARM Project
   1. Open the Sensor.eww in IAR EWARM IDE, right-click project node and select "Options"
   2. In General Options> Library Configuration select "Full"
   3. In Linker> Config, edit the settings and set CSTACK to 0x1000 and HEAP to 0x600, if set to less than these.
   4. In Debugger> Setup select Simulator or your debug probe.
   5. Rebuild the project and run on the selected target to make sure that project works.
  
1. Launch Windows command prompt and cd to the root of this project.
 
2. Set environment by running .\scripts\setenv_iar9.30.bat
 
3. Build the project and create BDF by running .\scripts\make_BDF_Sensor.bat
    A file "cpptestscan.bdf" will be created in Debug folder.
    
4. Launch C/C++test Professional from *the same* command prompt.  
    Make sure to specify workspace location (i.e., the -data option) *outside* of the project, for example:
        cpptest -data C:\work\parasoft\workspace &
   - Note: Always launch C/C++test from the console with propely initialized environment.
        
5. Initial C/C++test Professional configuration (once per workspace):
   1. Open Parasoft menu> Preferences...
   2. go to Parasoft> DTP and/or Parasoft> License to configure your DTP and license settings.  Ask your Parasoft solution administrator for details.
   3. (Optional) Go to Parasoft> Reports panel to configure reporting options if needed.
   4. (Optional) Go to Parasoft> Console and set verbosity to High.  Useful during initial configuration to monitor details of analyses and tests being performed.
     
6. Create C/C++test test project:
   1. In C/C++test Professional IDE go to File> New> Project... to start the wizard
   2. Select C/C++> C Project > Next
   3. Specify project name "Sensor_EWARM", disable the default project location, and specify C:\work\parasoft\Sensor_EWARM instead.
   4. Under "Project type:" select Executable> Empty Project > Next> Next> Finish.  Do not switch to C/C++ perspective if asked.
   5. A new project is added to Project Explorer view.

7. Configure C/C++test project settings:
   1. Right-click project node Sensor_EWARM, and open Properties dialog
   2. Go to Parasoft> C/C++test> Build Settings
   3. In "Options source:" select "Use options from build data file" and update BDF path to be "${project_loc}/Debug/cpptestscan.bdf".
   4. In "Compiler settings"> Family select "IAR Compiler for ARM(R) v. 9.10.x" and accept the choice.  Compiler and linker programs shoudl switch to iccarm and ilinkarm, respectively.  
   5. Apply the changes.
   - Note: the environment set earlier allows C/C++test to locate compiler on the PATH.

### --- Running tests ---

8. Running static analysis.
   1. Right-click the top level project node and select Parasoft> Test Using "Example Configuration".
   2. To check compliance agains a different standard, e.g. MISRA C 2012, select the whole project or individual files to analyze, right-click, and navigate to Parasoft> Test Using> Builtin> Compliance Packs> Automotive Pack> MISRA C 2012
   - Note: recently used test configurations are later available under Parasoft> Test History

9. Running unit tests.
   1. Go to Parasoft menu> Test Configurations to open the dialog
   2. Right-click User-defined node, select Import... and open   "C:\work\parasoft\Sensor_EWARM\scripts\Run IAR EW Tests Sensor.properties" file.  It will be imported under User-defined> Embedded Systems> IAR Systems
   3. Right-click project node in Project Explorer or Test Case Explorer view, and select Parasoft> Test Using> User-defined> Embedded Systems> IAR Systems> Run IAR EW Tests Sensor

    
