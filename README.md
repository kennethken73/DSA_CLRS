
# Table of Contents

1.  [Project - Overview: DSA<sub>CLRS</sub>](#org76886d2)
    1.  [Following CLRS book and sharing the experience on discord](#org8f1685e)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#org863f4fd)
    3.  [Project - Specifics](#org2b987da)
        1.  [tree](#orgd77daa7)
        2.  [how to build, compile, and run](#org6643bf1)
2.  [Git Repo: DSA<sub>CLRS</sub>](#org153fa4d)
3.  [C++ Project - Main Features](#org1f9320d)
    1.  [Emacs Development Environment](#org50e1c00)
        1.  [Magit](#orgece3e1c)
        2.  [dir-locals configuration](#orga56f968)
        3.  [projectile configuration](#orge1e244b)
        4.  [non-conflicting with other emacs packages](#org04e93c0)
    2.  [CMake Build Management](#org16ab61c)


<a id="org76886d2"></a>

# Project - Overview: DSA<sub>CLRS</sub>


<a id="org8f1685e"></a>

## Following CLRS book and sharing the experience on discord


<a id="org863f4fd"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="org2b987da"></a>

## Project - Specifics


<a id="orgd77daa7"></a>

### tree

    (shell-command-to-string "tree -I build")  ;; Don't show build directory

    .
    ├── README.md
    ├── README.org
    ├── src
    │   ├── CMakeLists.txt
    │   └── DSA_CLRS.cpp
    └── test
    
    2 directories, 4 files


<a id="org6643bf1"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA<sub>CLRS.cpp</sub>
    I have (cmake-ide-compile) bound to ,cc

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA<sub>CLRS.cpp</sub>
    I have (omen-c/cpp-project-run-interactive-executable) bound to <Spc> ocr


<a id="org153fa4d"></a>

# Git Repo: DSA<sub>CLRS</sub>

<https://github.com/kennethken73/DSA_CLRS>


<a id="org1f9320d"></a>

# C++ Project - Main Features


<a id="org50e1c00"></a>

## Emacs Development Environment


<a id="orgece3e1c"></a>

### Magit


<a id="orga56f968"></a>

### dir-locals configuration


<a id="orge1e244b"></a>

### projectile configuration


<a id="org04e93c0"></a>

### non-conflicting with other emacs packages


<a id="org16ab61c"></a>

## CMake Build Management

