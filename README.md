
# Table of Contents

1.  [Project - Overview: DSA-CLRS](#org4775725)
    1.  [Following CLRS book and sharing the experience on discord](#org3a9a8c0)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#org6e411c5)
    3.  [Project - Current Status](#orga7798d0)
        1.  [Current CLRS page:](#org5274b4b)
        2.  [Current learncpp page:](#org2ed4f36)
        3.  [Example Run:](#orgd557f67)
        4.  [Click on Algorithms(.org||.pdf) to view the work there.](#orge09dddd)
        5.  [Data Structures](#org7d3e21c)
    4.  [Project - Specifics](#org6d19f24)
        1.  [tree](#org8ca7be2)
        2.  [how to build, compile, and run](#org4cab67e)
2.  [Git Repo: DSA-CLRS](#org2ace57e)
3.  [C++ Project - Main Features](#org45abb41)
    1.  [Emacs Development Environment](#orgf4221c0)
        1.  [Magit](#org53057cf)
        2.  [lsp-mode](#org898c7ea)
        3.  [DAP-mode debugging](#org3019070)
        4.  [org-mode](#orge577f6d)
        5.  [dir-locals configuration](#orgf59f2a9)
        6.  [projectile configuration](#org7d6bc0c)
        7.  [non-conflicting with installed emacs packages](#org5153f16)
        8.  [TODO](#org71c3894)
    2.  [CMake Build Management](#org80207f7)
        1.  [TODO](#org43ef209)


<a id="org4775725"></a>

# Project - Overview: DSA-CLRS


<a id="org3a9a8c0"></a>

## Following CLRS book and sharing the experience on discord


<a id="org6e411c5"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="orga7798d0"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.

Quickly following learncpp.com for the c++ refresher.

IntArray created as first Data Structure.

Implemented the first Algorithm from CLRS: Insertion Sort.


<a id="org5274b4b"></a>

### Current CLRS page:

page 18


<a id="org2ed4f36"></a>

### Current learncpp page:

<https://www.learncpp.com/cpp-tutorial/timing-your-code/>


<a id="orgd557f67"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    full array: 
    arr[0]:  4
    arr[1]:  9
    arr[2]:  2
    arr[3]:  6
    
    sorting the array...
    sorted array..:
    arr[0]:  0
    arr[1]:  2
    arr[2]:  4
    arr[3]:  6
    
    Time elapsed: 2.3304e-05 seconds


<a id="orge09dddd"></a>

### Click on Algorithms(.org||.pdf) to view the work there.


<a id="org7d3e21c"></a>

### Data Structures

The same format will follow in the near future.


<a id="org6d19f24"></a>

## Project - Specifics


<a id="org8ca7be2"></a>

### tree

     1	.
     2	├── build
     3	├── Algorithms.org
     4	├── Algorithms.pdf
     5	├── Code_Notes.org
     6	├── .dir-locals.el
     7	├── doc
     8	│   └── code_scraps.org
     9	├── .gitignore
    10	├── lib
    11	│   ├── CMakeLists.txt
    12	│   ├── myTimer.cpp
    13	│   ├── readme.txt
    14	│   └── skipHeaders
    15	├── .projectile
    16	├── README.md
    17	├── README.org
    18	├── src
    19	│   ├── CMakeLists.txt
    20	│   ├── DSA_CLRS.cpp
    21	│   └── include
    22	│       ├── myAlgo
    23	│       │   ├── CMakeLists.txt
    24	│       │   ├── myAdd.cpp
    25	│       │   ├── myAlgorithms.cpp
    26	│       │   ├── myAlgorithms.hpp
    27	│       │   ├── myInsertionSort.cpp
    28	│       │   └── myMult.cpp
    29	│       └── myDS
    30	│           ├── CMakeLists.txt
    31	│           ├── IntArray.cpp
    32	│           ├── myDataStructures.cpp
    33	│           └── myDataStructures.hpp
    34	└── test
    35	    ├── commandsGDB
    36	    └── gdbInput1.txt
    
    37	7 directories, 27 files
    38	Plus the build/ directory


<a id="org4cab67e"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA-CLRS.cpp
    I have (cmake-ide-compile) bound to `,cc`

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA-CLRS.cpp
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`


<a id="org2ace57e"></a>

# Git Repo: DSA-CLRS

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="org45abb41"></a>

# C++ Project - Main Features


<a id="orgf4221c0"></a>

## Emacs Development Environment


<a id="org53057cf"></a>

### Magit


<a id="org898c7ea"></a>

### lsp-mode


<a id="org3019070"></a>

### DAP-mode debugging


<a id="orge577f6d"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="orgf59f2a9"></a>

### dir-locals configuration


<a id="org7d6bc0c"></a>

### projectile configuration


<a id="org5153f16"></a>

### non-conflicting with installed emacs packages


<a id="org71c3894"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="org80207f7"></a>

## CMake Build Management


<a id="org43ef209"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test

