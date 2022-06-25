
# Table of Contents

1.  [Project - Overview: DSA-CLRS](#org6665889)
    1.  [Following CLRS book and sharing the experience on discord](#orgda10f48)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#org95d6844)
    3.  [Project - Current Status](#org7bdc6d9)
        1.  [Example Run:](#org987f461)
        2.  [Click on Algorithms(.org||.pdf) to view the work there.](#orgbc06508)
        3.  [Data Structures](#orge37195c)
    4.  [Project - Specifics](#orgf01ed4b)
        1.  [tree](#org6e4e0ec)
        2.  [how to build, compile, and run](#org90b6c6f)
2.  [Git Repo: DSA-CLRS](#org14e76c7)
3.  [C++ Project - Main Features](#orgaa2c40e)
    1.  [Emacs Development Environment](#orgf388588)
        1.  [Magit](#orgce36e59)
        2.  [lsp-mode](#org8f4126f)
        3.  [DAP-mode debugging](#orgdefd58b)
        4.  [org-mode](#orgf248960)
        5.  [dir-locals configuration](#org96b5509)
        6.  [projectile configuration](#orgc41b85d)
        7.  [non-conflicting with installed emacs packages](#orgd8438a2)
        8.  [TODO](#org3a14ca8)
    2.  [CMake Build Management](#org5867cca)
        1.  [TODO](#org52f91ea)


<a id="org6665889"></a>

# Project - Overview: DSA-CLRS


<a id="orgda10f48"></a>

## Following CLRS book and sharing the experience on discord


<a id="org95d6844"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="org7bdc6d9"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.

Quickly following learncpp.com for the c++ refresher.

IntArray created as first Data Structure.

Now ready to implement the first Algorithm from CLRS: Insertion Sort.


<a id="org987f461"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    arr[0] == 9
    full array: 
    arr[i]:  9
    arr[i]:  8
    arr[i]:  7
    arr[i]:  6
    
    and done..


<a id="orgbc06508"></a>

### Click on Algorithms(.org||.pdf) to view the work there.


<a id="orge37195c"></a>

### Data Structures

The same format will follow in the near future.


<a id="orgf01ed4b"></a>

## Project - Specifics


<a id="org6e4e0ec"></a>

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
    11	│   ├── myTimer.cpp
    12	│   ├── readme.txt
    13	│   └── skipHeaders
    14	├── .projectile
    15	├── README.md
    16	├── README.org
    17	├── src
    18	│   ├── CMakeLists.txt
    19	│   ├── DSA_CLRS.cpp
    20	│   └── include
    21	│       ├── myAlgo
    22	│       │   ├── CMakeLists.txt
    23	│       │   ├── myAdd.cpp
    24	│       │   ├── myAlgorithms.cpp
    25	│       │   ├── myAlgorithms.hpp
    26	│       │   ├── myInsertionSort.cpp
    27	│       │   └── myMult.cpp
    28	│       └── myDS
    29	│           ├── CMakeLists.txt
    30	│           ├── IntArray.cpp
    31	│           ├── myDataStructures.cpp
    32	│           └── myDataStructures.hpp
    33	└── test
    34	    ├── commandsGDB
    35	    └── gdbInput1.txt
    
    36	7 directories, 26 files
    37	Plus the build/ directory


<a id="org90b6c6f"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA-CLRS.cpp
    I have (cmake-ide-compile) bound to `,cc`

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA-CLRS.cpp
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`


<a id="org14e76c7"></a>

# Git Repo: DSA-CLRS

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="orgaa2c40e"></a>

# C++ Project - Main Features


<a id="orgf388588"></a>

## Emacs Development Environment


<a id="orgce36e59"></a>

### Magit


<a id="org8f4126f"></a>

### lsp-mode


<a id="orgdefd58b"></a>

### DAP-mode debugging


<a id="orgf248960"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="org96b5509"></a>

### dir-locals configuration


<a id="orgc41b85d"></a>

### projectile configuration


<a id="orgd8438a2"></a>

### non-conflicting with installed emacs packages


<a id="org3a14ca8"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="org5867cca"></a>

## CMake Build Management


<a id="org52f91ea"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test

