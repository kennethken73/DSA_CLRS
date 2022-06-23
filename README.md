
# Table of Contents

1.  [Project - Overview: DSA-CLRS](#org7ea373c)
    1.  [Following CLRS book and sharing the experience on discord](#orge593cd7)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#org3a2850f)
    3.  [Project - Current Status](#org1d54696)
        1.  [Example Run:](#org4d37653)
        2.  [Click on Algorithms(.org||.pdf) to view the work there.](#orgcebedc3)
        3.  [Data Structures](#org6b3a7de)
    4.  [Project - Specifics](#org19eee5e)
        1.  [tree](#orgf31daab)
        2.  [how to build, compile, and run](#orge486fec)
2.  [Git Repo: DSA-CLRS](#org28ad222)
3.  [C++ Project - Main Features](#org717314a)
    1.  [Emacs Development Environment](#orgb4e1951)
        1.  [Magit](#org26b8d33)
        2.  [lsp-mode](#orgd02ca79)
        3.  [DAP-mode debugging](#org761536c)
        4.  [org-mode](#orge4fa7b9)
        5.  [dir-locals configuration](#org049afa9)
        6.  [projectile configuration](#orgf8a5cc2)
        7.  [non-conflicting with installed emacs packages](#org4b23ee3)
        8.  [TODO](#org3bb2dd9)
    2.  [CMake Build Management](#orgc9e05db)
        1.  [TODO](#orgee239ea)


<a id="org7ea373c"></a>

# Project - Overview: DSA-CLRS


<a id="orge593cd7"></a>

## Following CLRS book and sharing the experience on discord


<a id="org3a2850f"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="org1d54696"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.


<a id="org4d37653"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    algo: myAdd, params: 4,20 --> 24


<a id="orgcebedc3"></a>

### Click on Algorithms(.org||.pdf) to view the work there.


<a id="org6b3a7de"></a>

### Data Structures

The same format will follow in the near future.


<a id="org19eee5e"></a>

## Project - Specifics


<a id="orgf31daab"></a>

### tree

     1	.
     2	├── build
     3	├── Algorithms.org
     4	├── Algorithms.pdf
     5	├── Code_Notes.org
     6	├── .dir-locals.el
     7	├── doc
     8	├── .gitignore
     9	├── lib
    10	│   └── readme.txt
    11	├── .projectile
    12	├── README.md
    13	├── README.org
    14	├── src
    15	│   ├── CMakeLists.txt
    16	│   ├── DSA_CLRS.cpp
    17	│   └── include
    18	│       ├── myAlgo
    19	│       │   ├── CMakeLists.txt
    20	│       │   ├── myAdd.cpp
    21	│       │   ├── myAlgorithms.cpp
    22	│       │   ├── myAlgorithms.hpp
    23	│       │   └── myMult.cpp
    24	│       └── myDS
    25	└── test
    
    26	7 directories, 16 files
    27	Plus the build/ directory


<a id="orge486fec"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA-CLRS.cpp
    I have (cmake-ide-compile) bound to `,cc`

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA-CLRS.cpp
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`


<a id="org28ad222"></a>

# Git Repo: DSA-CLRS

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="org717314a"></a>

# C++ Project - Main Features


<a id="orgb4e1951"></a>

## Emacs Development Environment


<a id="org26b8d33"></a>

### Magit


<a id="orgd02ca79"></a>

### lsp-mode


<a id="org761536c"></a>

### DAP-mode debugging


<a id="orge4fa7b9"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="org049afa9"></a>

### dir-locals configuration


<a id="orgf8a5cc2"></a>

### projectile configuration


<a id="org4b23ee3"></a>

### non-conflicting with installed emacs packages


<a id="org3bb2dd9"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="orgc9e05db"></a>

## CMake Build Management


<a id="orgee239ea"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test

