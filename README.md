
# Table of Contents

1.  [Project - Overview: DSA\\<sub>CLRS</sub>](#org96e025b)
    1.  [Following CLRS book and sharing the experience on discord](#org9ccfefd)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#orgeaa9e14)
    3.  [Project - Current Status](#orgcd03c8f)
        1.  [Example Run:](#org2c96e5e)
    4.  [Project - Specifics](#org4af467e)
        1.  [tree](#orgf947ce2)
        2.  [how to build, compile, and run](#org1f81574)
2.  [Git Repo: DSA\\<sub>CLRS</sub>](#org5010f4d)
3.  [C++ Project - Main Features](#orga0af667)
    1.  [Emacs Development Environment](#org6e8c735)
        1.  [Magit](#orgaf20da9)
        2.  [lsp-mode](#orgd4548b9)
        3.  [DAP-mode debugging](#org262ba79)
        4.  [org-mode](#org44a6be5)
        5.  [dir-locals configuration](#orge4bdb77)
        6.  [projectile configuration](#org12f3b5d)
        7.  [non-conflicting with installed emacs packages](#org8897a65)
        8.  [TODO](#org0a6fbeb)
    2.  [CMake Build Management](#org611fa67)
        1.  [TODO](#orgca45ab2)


<a id="org96e025b"></a>

# Project - Overview: DSA\\<sub>CLRS</sub>


<a id="org9ccfefd"></a>

## Following CLRS book and sharing the experience on discord


<a id="orgeaa9e14"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="orgcd03c8f"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.


<a id="org2c96e5e"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    algo: myAdd, params: 4,20 --> 24


<a id="org4af467e"></a>

## Project - Specifics


<a id="orgf947ce2"></a>

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
    13	├── .#README.org -> sov@omen.3631:1655934850
    14	├── README.org
    15	├── src
    16	│   ├── CMakeLists.txt
    17	│   ├── DSA_CLRS.cpp
    18	│   └── include
    19	│       ├── myAlgo
    20	│       │   ├── CMakeLists.txt
    21	│       │   ├── myAdd.cpp
    22	│       │   ├── myAlgorithms.cpp
    23	│       │   ├── myAlgorithms.hpp
    24	│       │   └── myMult.cpp
    25	│       └── myDS
    26	└── test
    
    27	7 directories, 17 files
    28	Plus the build/ directory


<a id="org1f81574"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA\\<sub>CLRS.cpp</sub>
    I have (cmake-ide-compile) bound to `,cc`

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA\\<sub>CLRS.cpp</sub>
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`


<a id="org5010f4d"></a>

# Git Repo: DSA\\<sub>CLRS</sub>

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="orga0af667"></a>

# C++ Project - Main Features


<a id="org6e8c735"></a>

## Emacs Development Environment


<a id="orgaf20da9"></a>

### Magit


<a id="orgd4548b9"></a>

### lsp-mode


<a id="org262ba79"></a>

### DAP-mode debugging


<a id="org44a6be5"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="orge4bdb77"></a>

### dir-locals configuration


<a id="org12f3b5d"></a>

### projectile configuration


<a id="org8897a65"></a>

### non-conflicting with installed emacs packages


<a id="org0a6fbeb"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="org611fa67"></a>

## CMake Build Management


<a id="orgca45ab2"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test

