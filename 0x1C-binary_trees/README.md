Readme

    Read Binary tree -> note the first line: Not to be confused with B-tree.
    Also read Data Structure and Algorithms - Tree, Tree Traversal and Binary Search Tree
    Watch this video

What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

    What is a binary tree
    What is the difference between a binary tree and a Binary Search Tree
    What is the possible gain in terms of time complexity compared to linked lists
    What are the depth, the height, the size of a binary tree
    What are the different traversal methods to go through a binary tree
    What is a complete, a full, a perfect, a balanced binary tree

Requirements

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 14.04 LTS
    Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
    All your files should end with a new line
    A README.md file, at the root of the folder of the project, is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    You are allowed to use the standard library
    In the following examples, the main.c files are showed as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one showed in the examples
    The prototypes of all your functions should be included in your header file called binary_trees.h
    Don’t forget to push your header file
    All your header files should be include guarded

Data structures

Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.
Basic Binary Tree

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

Binary Search Tree

typedef struct binary_tree_s bst_t;

AVL Tree

typedef struct binary_tree_s avl_t;

Max Binary Heap

typedef struct binary_tree_s heap_t;

Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.
