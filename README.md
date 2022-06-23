
# Table of Contents

1.  [Project - Overview: DSA-CLRS](#org3fb4f6e)
    1.  [Following CLRS book and sharing the experience on discord](#orga32565e)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#org998c072)
    3.  [Project - Current Status](#orgff57413)
        1.  [Example Run:](#org80affa4)
    4.  [Project - Specifics](#orgd4dad8b)
        1.  [tree](#org4304279)
        2.  [how to build, compile, and run](#org9711727)
2.  [Git Repo: DSA-CLRS](#org93a06f6)
3.  [C++ Project - Main Features](#org9c0d4f5)
    1.  [Emacs Development Environment](#org0f45898)
        1.  [Magit](#org07471ae)
        2.  [lsp-mode](#org29b2cb6)
        3.  [DAP-mode debugging](#org11f2de9)
        4.  [org-mode](#org53e903f)
        5.  [dir-locals configuration](#org4619f4c)
        6.  [projectile configuration](#org774008a)
        7.  [non-conflicting with installed emacs packages](#org2bc0f65)
        8.  [TODO](#org306da33)
    2.  [CMake Build Management](#org786bb96)
        1.  [TODO](#orgd2f0cbe)


<a id="org3fb4f6e"></a>

# Project - Overview: DSA-CLRS


<a id="orga32565e"></a>

## Following CLRS book and sharing the experience on discord


<a id="org998c072"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="orgff57413"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.


<a id="org80affa4"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    algo: myAdd, params: 4,20 --> 24


<a id="orgd4dad8b"></a>

## Project - Specifics


<a id="org4304279"></a>

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


<a id="org9711727"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA-CLRS.cpp
    I have (cmake-ide-compile) bound to `,cc`

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA-CLRS.cpp
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`


<a id="org93a06f6"></a>

# Git Repo: DSA-CLRS

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="org9c0d4f5"></a>

# C++ Project - Main Features


<a id="org0f45898"></a>

## Emacs Development Environment


<a id="org07471ae"></a>

### Magit


<a id="org29b2cb6"></a>

### lsp-mode


<a id="org11f2de9"></a>

### DAP-mode debugging


<a id="org53e903f"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="org4619f4c"></a>

### dir-locals configuration


<a id="org774008a"></a>

### projectile configuration


<a id="org2bc0f65"></a>

### non-conflicting with installed emacs packages


<a id="org306da33"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="org786bb96"></a>

## CMake Build Management


<a id="orgd2f0cbe"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test

