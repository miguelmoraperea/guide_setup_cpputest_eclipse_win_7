# Guide to setup CppUTest for Eclipse in Windows 7

The purpose of this repository is to help to setup CppUTest using Eclipse in a Windows 7 machine.

## Steps

1. Download the 32-bit version of [Cygwin](https://www.cygwin.com/) and run the installation package.
2. Install the _Devel_ category packages:

   <img src="images/install_cygwin_packages_selection.PNG" width = "400">
  
3. Add your new Cygwin bin directory to the Path variable:

   <img src="images/add_cygwin_to_path_system_variable.PNG" width = "400">
  
4. Download the latest package of CppUTest from [CppUTest Github Page](https://github.com/cpputest/cpputest) using the following command:

   `git clone git://github.com/cpputest/cpputest.git`. 

    If you do not have git installed in your machine, download it from this page [Downloading Git](https://git-scm.com/download/win) and     run   the installation.

5. Open Cygwin and go to the folder _cpputest/cpputest_build_
6. Enter the following commands:

   `cmake ..`
   
7. A confirmation will show in the Cygwin console:

   `-- Configuring done`

   `-- Generating done`

   `-- Build files have been written to: /cygdrive/c/users/.../cpputest/cpputest_build`

8. Run the make command in the same folder

   `make`
   
9. A confirmation will show in the Cygwin console:

   `[100%] Built target CppUTestExtTests`
   
10. Run the make install command in the same folder:

   `make install`
   
11. After completing the porject installation, a new folder will be created in the location of your Cygwin directory under 

   _cygwin\usr\local\lib_

12. Copy this lib folder and it's contents and paste it on the CppUTest folder.

11. Add _CPPUTEST_HOME_ to your systems variables using the cpputest folder

13. Download and Install _Java Development Kit_

14. Add the JDK bin folder to the _Path_ variable
    
    <img src="images/add_java_to_path_system_variable.PNG" width = "400">

15. Download and install [Eclipse IDE](https://www.eclipse.org/downloads/). Select _Eclipse IDE for C/C++ Developers_ during installation.

16. Install the C/C++Unit plugin
    Open Eclipse. Accept the default workspace for now (you may want to set a more appropriate workspace location later on). Then       install the "C/C++ Unit Test" plugin:
    "Help"->"Install New Software"-> work with "Kepler - http://download.eclipse.org/releases/kepler".
    You will find the plugin under:

    [ ] Programming Languages
    
         [x] C/C++ Unit Testing Support.
        
    Also install:

    [ ] Linux Tools  
    
         [x] Gcov Integration
        
17. Clone the [CppUTest Eclipse Test Runner](https://github.com/tcmak/CppUTestEclipseJunoTestRunner) and add it to Eclipse following the instructions below:

    Create directory "<YOUR_PATH_TO_ECLIPSE>/eclipse/dropins/CppUTest".

    In this repository, change into the directory "org.eclipse.cdt.testrunner.cpputest".

    Copy the following artifacts from there to "<YOUR_PATH_TO_ECLIPSE>/eclipse/dropins/CppUTest":
      
      ```
      bin/org/ --> org/
      META-INF/
      plugin.properties
      plugin.xml
      ```

    You must copy "bin/org/" to "org/" and not to "bin/org/" !

    Close Eclipse.
    Start Eclipse from a command shell with the following command:

    `Eclipse -clean -console -consoleLog`

    "CppUTest Tests Runner" should now be selectable as a test runner within Eclipse and successfully run a CppUTest test project.

18. Clone the sample project from this repository

19. Add the sample project to Eclipse

20. Add the path to the CppUTest folder in the settings of the Cywin C Compiler and Cygwin C++ Compiler in Eclipse:

    <img src="images/cygwin_c++_compiler_includes.PNG" width = "400">
    
    <img src="images/cygwin_c_compiler_includes.PNG" width = "400">

21. Add the CppUTest library to the Cygwin C++ Linker settings in Eclipse:

    <img src="images/cygwin_c++_linker_libraries_setup.PNG" width = "400">

22. Build the project

23. In Eclipse go to _New Launch Configuration_ and select C/C++ Unit:

    <img src="images/new_launch_config.PNG" width = "400">

24. Under _Test Runner_ select _CppUTest Tests Runner_:

    <img src="images/select_test_runner_config.PNG" width = "400">
    
24. Run the project

25. The tests should run and show passed:

    <img src="images/sample_test_passed.PNG" width = "400">
