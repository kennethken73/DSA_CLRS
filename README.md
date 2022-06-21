
# Table of Contents

1.  [Project - Overview: DSA<sub>CLRS</sub>](#org2004ba5)
    1.  [Following CLRS book and sharing the experience on discord](#org3b14acc)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#orgd76e678)
    3.  [Project - Specifics](#orgd3ff5a2)
        1.  [tree](#org18f8798)
        2.  [how to build, compile, and run](#orgc692f21)
2.  [Git Repo: DSA<sub>CLRS</sub>](#orge5dbcfa)
3.  [C++ Project - Main Features](#org15b3c46)
    1.  [Emacs Development Environment](#orgc419258)
        1.  [Magit](#orgc628621)
        2.  [dir-locals configuration](#org864a7db)
        3.  [projectile configuration](#org7dbf7cf)
        4.  [non-conflicting with other emacs packages](#orge53a05a)
    2.  [CMake Build Management](#org716341d)


<a id="org2004ba5"></a>

# Project - Overview: DSA<sub>CLRS</sub>


<a id="org3b14acc"></a>

## Following CLRS book and sharing the experience on discord


<a id="orgd76e678"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="orgd3ff5a2"></a>

## Project - Specifics


<a id="org18f8798"></a>

### tree

    (shell-command-to-string "tree") 

    .
    ├── build
    │   ├── CMakeCache.txt
    │   ├── CMakeFiles
    │   │   ├── 3.22.0-rc3
    │   │   │   ├── CMakeCCompiler.cmake
    │   │   │   ├── CMakeCXXCompiler.cmake
    │   │   │   ├── CMakeDetermineCompilerABI_C.bin
    │   │   │   ├── CMakeDetermineCompilerABI_CXX.bin
    │   │   │   ├── CMakeSystem.cmake
    │   │   │   ├── CompilerIdC
    │   │   │   │   ├── a.out
    │   │   │   │   ├── CMakeCCompilerId.c
    │   │   │   │   └── tmp
    │   │   │   └── CompilerIdCXX
    │   │   │       ├── a.out
    │   │   │       ├── CMakeCXXCompilerId.cpp
    │   │   │       └── tmp
    │   │   ├── cmake.check_cache
    │   │   ├── CMakeDirectoryInformation.cmake
    │   │   ├── CMakeOutput.log
    │   │   ├── CMakeTmp
    │   │   ├── DSA_CLRS.dir
    │   │   │   ├── build.make
    │   │   │   ├── cmake_clean.cmake
    │   │   │   ├── compiler_depend.make
    │   │   │   ├── compiler_depend.ts
    │   │   │   ├── DependInfo.cmake
    │   │   │   ├── depend.make
    │   │   │   ├── DSA_CLRS.cpp.o
    │   │   │   ├── DSA_CLRS.cpp.o.d
    │   │   │   ├── flags.make
    │   │   │   ├── link.txt
    │   │   │   └── progress.make
    │   │   ├── Makefile2
    │   │   ├── Makefile.cmake
    │   │   ├── progress.marks
    │   │   └── TargetDirectories.txt
    │   ├── cmake_install.cmake
    │   ├── compile_commands.json
    │   ├── DSA_CLRS
    │   └── Makefile
    ├── README.org
    ├── src
    │   ├── CMakeLists.txt
    │   └── DSA_CLRS.cpp
    └── test
    
    11 directories, 35 files


<a id="orgc692f21"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA<sub>CLRS.cpp</sub>
    I have (cmake-ide-compile) bound to ,cc

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA<sub>CLRS.cpp</sub>
    I have (omen-c/cpp-project-run-interactive-executable) bound to <Spc> ocr


<a id="orge5dbcfa"></a>

# Git Repo: DSA<sub>CLRS</sub>

<https://github.com/kennethken73/DSA_CLRS>


<a id="org15b3c46"></a>

# C++ Project - Main Features


<a id="orgc419258"></a>

## Emacs Development Environment


<a id="orgc628621"></a>

### Magit


<a id="org864a7db"></a>

### dir-locals configuration


<a id="org7dbf7cf"></a>

### projectile configuration


<a id="orge53a05a"></a>

### non-conflicting with other emacs packages


<a id="org716341d"></a>

## CMake Build Management

