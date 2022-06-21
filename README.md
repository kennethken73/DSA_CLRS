
# Table of Contents

1.  [Project - Overview: DSA<sub>CLRS</sub>](#org724529f)
    1.  [Following CLRS book and sharing the experience on discord](#org455086c)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#orgad1c485)
    3.  [Project - Specifics](#org571f0e8)
        1.  [tree](#org6b230de)
        2.  [how to build, compile, and run](#orge2120e5)
2.  [Git Repo: DSA<sub>CLRS</sub>](#org77775b3)
3.  [C++ Project - Main Features](#org1f9ed88)
    1.  [Emacs Development Environment](#org61e51bd)
        1.  [Magit](#org370b24e)
        2.  [dir-locals configuration](#org8dfac3b)
        3.  [projectile configuration](#orgea45871)
        4.  [non-conflicting with other emacs packages](#org9fde997)
    2.  [CMake Build Management](#org82be619)


<a id="org724529f"></a>

# Project - Overview: DSA<sub>CLRS</sub>


<a id="org455086c"></a>

## Following CLRS book and sharing the experience on discord


<a id="orgad1c485"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="org571f0e8"></a>

## Project - Specifics


<a id="org6b230de"></a>

### tree

    ;; https://www.baeldung.com/linux/insert-line-specific-line-number
    ;; report of the directory structure, showing the build directory, but not it's contents
    (shell-command "tree -a -o tree.txt -I 'build|.cache|.git|tree.txt'")
    (shell-command "sed -i '2 i ├── build' tree.txt")
    (shell-command-to-string "cat tree.txt") 

    .
    ├── build
    ├── .dir-locals.el
    ├── .gitignore
    ├── .projectile
    ├── README.md
    ├── README.org
    ├── src
    │   ├── CMakeLists.txt
    │   └── DSA_CLRS.cpp
    └── test
    
    2 directories, 7 files


<a id="orge2120e5"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.

1.  build/compile:

    run (cmake-ide-compile) while in DSA<sub>CLRS.cpp</sub>
    I have (cmake-ide-compile) bound to ,cc

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA<sub>CLRS.cpp</sub>
    I have (omen-c/cpp-project-run-interactive-executable) bound to <Spc> ocr


<a id="org77775b3"></a>

# Git Repo: DSA<sub>CLRS</sub>

<https://github.com/kennethken73/DSA_CLRS>
Remember to export to markdown from README.org


<a id="org1f9ed88"></a>

# C++ Project - Main Features


<a id="org61e51bd"></a>

## Emacs Development Environment


<a id="org370b24e"></a>

### Magit


<a id="org8dfac3b"></a>

### dir-locals configuration


<a id="orgea45871"></a>

### projectile configuration


<a id="org9fde997"></a>

### non-conflicting with other emacs packages


<a id="org82be619"></a>

## CMake Build Management

