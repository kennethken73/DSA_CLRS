
# Table of Contents

1.  [Project - Overview: \`DSA<sub>CLRS</sub>\`](#org6190e3d)
    1.  [Following CLRS book and sharing the experience on discord](#org43865a6)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#orgcfae176)
    3.  [Project - Current Status](#org6738796)
        1.  [Example Run:](#orgbc52757)
    4.  [Project - Specifics](#org0658fa2)
        1.  [tree](#orgb21fd49)
        2.  [how to build, compile, and run](#org51b90a1)
2.  [Git Repo: \`DSA<sub>CLRS</sub>\`](#orgf4f90c0)
3.  [C++ Project - Main Features](#orgabde5a0)
    1.  [Emacs Development Environment](#org1b9f59b)
        1.  [Magit](#orgb05c083)
        2.  [lsp-mode](#org32020bd)
        3.  [DAP-mode debugging](#org5d570fb)
        4.  [org-mode](#org1e0cada)
        5.  [dir-locals configuration](#orgb8a7d4c)
        6.  [projectile configuration](#org7f5484c)
        7.  [non-conflicting with installed emacs packages](#orga6f2d98)
        8.  [TODO](#orgb778048)
    2.  [CMake Build Management](#org3a0ae19)
        1.  [TODO](#org95ad5a9)


<a id="org6190e3d"></a>

# Project - Overview: \`DSA<sub>CLRS</sub>\`


<a id="org43865a6"></a>

## Following CLRS book and sharing the experience on discord


<a id="orgcfae176"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="org6738796"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.


<a id="orgbc52757"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    algo: myAdd, params: 4,20 --> 24


<a id="org0658fa2"></a>

## Project - Specifics


<a id="orgb21fd49"></a>

### tree

    ;; https://www.baeldung.com/linux/insert-line-specific-line-number
    ;; report of the directory structure, showing the build directory, but not it's contents
    (shell-command "tree -a -o tree.txt -I 'build|.cache|.git|tree.txt|ltximg'")
    (shell-command "sed -i '2 i ├── build' tree.txt")
    (shell-command "echo 'Plus the build/ directory' >> tree.txt")
    (shell-command-to-string "cat -b tree.txt") 

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


<a id="org51b90a1"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in \`DSA<sub>CLRS</sub>\`.cpp
    I have (cmake-ide-compile) bound to `,cc`

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in \`DSA<sub>CLRS</sub>\`.cpp
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`


<a id="orgf4f90c0"></a>

# Git Repo: \`DSA<sub>CLRS</sub>\`

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="orgabde5a0"></a>

# C++ Project - Main Features


<a id="org1b9f59b"></a>

## Emacs Development Environment


<a id="orgb05c083"></a>

### Magit


<a id="org32020bd"></a>

### lsp-mode


<a id="org5d570fb"></a>

### DAP-mode debugging


<a id="org1e0cada"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="orgb8a7d4c"></a>

### dir-locals configuration


<a id="org7f5484c"></a>

### projectile configuration


<a id="orga6f2d98"></a>

### non-conflicting with installed emacs packages


<a id="orgb778048"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="org3a0ae19"></a>

## CMake Build Management


<a id="org95ad5a9"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test

