
# Table of Contents

1.  [Project - Overview: DSA-CLRS](#orga0720bc)
    1.  [Following CLRS book and sharing the experience on discord](#org95fcf05)
    2.  [The Various Data Structures and Algorithms will be together on this one project](#org8ba9045)
    3.  [Project - Current Status](#orgb812d23)
        1.  [Example Run:](#org7a9fb6a)
    4.  [Project - Specifics](#org1f287df)
        1.  [tree](#org691a7b1)
        2.  [how to build, compile, and run](#org5b6dd8a)
2.  [Git Repo: DSA-CLRS](#orgf3ae7a3)
3.  [C++ Project - Main Features](#org508aabf)
    1.  [Emacs Development Environment](#org5052e9e)
        1.  [Magit](#org43d82db)
        2.  [lsp-mode](#org4b0e3ef)
        3.  [DAP-mode debugging](#org149e6f5)
        4.  [org-mode](#orgc305dd1)
        5.  [dir-locals configuration](#org22aca76)
        6.  [projectile configuration](#org0429b9c)
        7.  [non-conflicting with installed emacs packages](#org0428abc)
        8.  [TODO](#org58ee69d)
    2.  [CMake Build Management](#org0a5e86d)
        1.  [TODO](#org283b9b7)
4.  [Algorithms](#org16d1dc5)
    1.  [Insertion Sort](#orgf559ec5)


<a id="orga0720bc"></a>

# Project - Overview: DSA-CLRS


<a id="org95fcf05"></a>

## Following CLRS book and sharing the experience on discord


<a id="org8ba9045"></a>

## The Various Data Structures and Algorithms will be together on this one project


<a id="orgb812d23"></a>

## Project - Current Status

Ground-work laid for creation and usage of algorithms, chosen at run-time.  


<a id="org7a9fb6a"></a>

### Example Run:

    (shell-command-to-string projectile-project-run-cmd) 

    Welcome to the DSA-runner
    What Data Structure are we setting up?
    Available Algorithms:
    myAdd, myMult, 
    algo: myAdd, params: 4,20 --> 24


<a id="org1f287df"></a>

## Project - Specifics


<a id="org691a7b1"></a>

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


<a id="org5b6dd8a"></a>

### how to build, compile, and run

This build system is integrated with spacemacs.  

1.  build/compile:

    run (cmake-ide-compile) while in DSA-CLRS.cpp  
    I have (cmake-ide-compile) bound to `,cc`  

2.  run:

    run (omen-c/cpp-project-run-interactive-executable) while in DSA-CLRS.cpp  
    I have (omen-c/cpp-project-run-interactive-executable) bound to `<Spc> ocr`  


<a id="orgf3ae7a3"></a>

# Git Repo: DSA-CLRS

<https://github.com/kennethken73/DSA_CLRS>  
Remember to export to markdown from README.org  


<a id="org508aabf"></a>

# C++ Project - Main Features


<a id="org5052e9e"></a>

## Emacs Development Environment


<a id="org43d82db"></a>

### Magit


<a id="org4b0e3ef"></a>

### lsp-mode


<a id="org149e6f5"></a>

### DAP-mode debugging


<a id="orgc305dd1"></a>

### org-mode

1.  literate programming

2.  org-export with pandoc and markdown integration


<a id="org22aca76"></a>

### dir-locals configuration


<a id="org0429b9c"></a>

### projectile configuration


<a id="org0428abc"></a>

### non-conflicting with installed emacs packages


<a id="org58ee69d"></a>

### TODO

-   get Doxygen set up
-   get clang-format set up


<a id="org0a5e86d"></a>

## CMake Build Management


<a id="org283b9b7"></a>

### TODO

-   get clean-target working
-   set up running an input file into the main executable  
    -   this will be our testing method
    -   so, we'll need a cmake target which reads from /test


<a id="org16d1dc5"></a>

# Algorithms

<div class="LaTeX" id="org2bd9d42">
\begin{abstract}
  \hrule
    Ongoing Study of CLRS
  \vspace{6pt}
  \hrule
    Literate Programming via orgmode's live-code snippets
  \vspace{6pt}
  \hrule
  \vspace{14pt}
\end{abstract}

</div>


<a id="orgf559ec5"></a>

## Insertion Sort

CLRS pp.18 describes Insertion Sort, with the following pseudo-code:  

    1   for j = 2 to A.length
    2     key = A[j]
    3     // Insert A[j] into the
    4     // sorted sequence A[1..j-1],
    5     i = j-1
    6     while i > 0 and A[i] > key
    7       A[i+1] = A[i]
    8       i = i-1
    9     A[i+1] = key

NOTES ON THE PRECEDING PSEUDO-CODE :  

1.  1   for j = 2 to A.length
    
    -   Initially, the first item in the array comprises the sorted set, which at this point  
        is only of length = 1, and therefore is sorted, by force.
    -   The other items (the last item, the second item, and all items in between) are considered unsorted.
    -   It is useful to state again, clearly, that this pseudo-code is 1-indexed (not 0-indexed).

2.  2     key = A[j]
        3     // Insert A[j] into the
        4     // sorted sequence A[1..j-1],
    
    -   On the first iteration, the second item is being placed into the sorted "hand"  
        (like a "hand" of a deck of cards).
    -   This item-being-sorted (namely: `j`) is  
        -   initially: `2`, and
        -   finally: `A.length`
        -   So, if (in this 1-indexed array) the array has 5 elements, then  
            the last element is at position 5.  
            -   Note, that in 0-indexed arrays, this last element will be at `A.length - 1`!
        
        -   The sorted "Left-hand" set is comprised of elements A[1..j-1], which is:  
            -   initially: A[1..(2-1)] = A[1..1] = A[1], and
            
            -   finally: A[1..(A.length-1)]  
                -   Note, that the final state of the algorithm takes the last item (namely: A[j]),  
                    and places it into the "left-hand" sorted-set, comprised now of elements A[1] through A[j-1].

3.  5     i = j-1
        6     while i > 0 and A[i] > key
        7       A[i+1] = A[i]
        8       i = i-1
        9     A[i+1] = key
    
    -   We set the index into the sorted "left-hand" sorted-set at the right-most element, and  
        then iterate backwards.
    -   On each backwards iteration (i&#x2013;), elements greater than the key-value (A[j]) are moved rightward  
        in the sorted-set (This is what line 7 accomplishes).
    -   Line 9 then places the key item-being-placed-into-its-correct-position at this correct position  
        (namely: A[i+1]).
    -   Note that line 5 guarantees that there *is* some such i+1, as i is, at maximum (j-1) = (A.length - 1).

