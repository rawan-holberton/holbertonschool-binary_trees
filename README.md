## C - Binary Trees
--------------------------

#### Table of contents
- [0. New node](#0-new-node)
- [1. Insert left](#1-insert-left)
- [2. Insert right](#2-insert-right)
- [3. Delete](#3-delete)
- [4. Is leaf](#4-is-leaf)
- [5. Is root](#5-is-root)
- [6. Pre-order traversal](#6-pre-order-traversal)
- [7. In-order traversal](#7-in-order-traversal)
- [8. Post-order traversal](#8-post-order-traversal)
- [9. Height](#9-height)
- [10. Depth](#10-depth)
- [11. Size](#11-size)
- [12. Leaves](#12-leaves)
- [13. Nodes](#13-nodes)
- [14. Balance factor](#14-balance-factor)
- [15. Is full](#15-is-full)
- [16. Is perfect](#16-is-perfect)
- [17. Sibling](#17-sibling)
- [18. Uncle](#18-uncle)
- [Requirements](#requirements)

--------------------------
#### 0. New node

Write a function that <mark>creates a binary tree node</mark>

prototype:  
```
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

- Where ```parent``` is a pointer to the parent node of the node to create
- And ```value``` is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or ```NULL``` on failure

desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)
```
  
[^](#table-of-contents)

--------------------------
#### 1. Insert left

Write a function that <mark>inserts a node as the left-child of another node</mark>

prototype:  
```
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

- Where ```parent``` is a pointer to the node to insert the left-child in
- And ```value``` is the value to store in the new node
- Your function must return a pointer to the created node, or ```NULL``` on failure or if ```parent``` is ```NULL```
- If ```parent``` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

desired output:  
```
  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)    
```
  
[^](#table-of-contents)

--------------------------
#### 2. Insert right

Write a function that <mark>inserts a node as the right-child of another node</mark>

prototype:  
```
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

- Where ```parent``` is a pointer to the node to insert the right-child in
- And ```value``` is the value to store in the new node
- Your function must return a pointer to the created node, or ```NULL``` on failure or if ```parent``` is ```NULL```
- If ```parent``` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

desired output:  
```
  .--(098)--.
(012)     (402)

  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
```
  
[^](#table-of-contents)

--------------------------
#### 3. Delete

Write a function that <mark>deletes an entire binary tree</mark>

prototype:  
```
void binary_tree_delete(binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to delete
- If ```tree``` is ```NULL```, do nothing

desired output:  
```
==13264== Memcheck, a memory error detector
==13264== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==13264== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==13264== Command: ./3-del
==13264== 
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
==13264== 
==13264== HEAP SUMMARY:
==13264==     in use at exit: 0 bytes in 0 blocks
==13264==   total heap usage: 9 allocs, 9 frees, 949 bytes allocated
==13264== 
==13264== All heap blocks were freed -- no leaks are possible
==13264== 
==13264== For counts of detected and suppressed errors, rerun with: -v
==13264== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
  
[^](#table-of-contents)

--------------------------
#### 4. Is leaf

Write a function that <mark>checks if a node is a leaf</mark>

prototype:  
```
int binary_tree_is_leaf(const binary_tree_t *node);
```

- Where ```node``` is a pointer to the node to check
- Your function must return ```1``` if ```node``` is a leaf, otherwise ```0```
- If ```node``` is ```NULL```, return ```0```

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a leaf: 0
Is 128 a leaf: 0
Is 402 a leaf: 1
```
  
[^](#table-of-contents)

--------------------------
#### 5. Is root

Write a function that <mark>checks if a given node is a root</mark>

prototype:  
```
int binary_tree_is_root(const binary_tree_t *node);
```

- Where ```node``` is a pointer to the node to check
- Your function must return ```1``` if ```node``` is a root, otherwise ```0```
- If ```node``` is ```NULL```, return ```0```

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a root: 1
Is 128 a root: 0
Is 402 a root: 0
```
  
[^](#table-of-contents)

--------------------------
#### 6. Pre-order traversal

Write a function that <mark>goes through a binary tree using pre-order traversal</mark>

prototype:  
```
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

- Where ```tree``` is a pointer to the root node of the tree to traverse
- And ```func``` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If ```tree``` or ```func``` is ```NULL```, do nothing

desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
98
12
6
56
402
256
512
```
  
[^](#table-of-contents)

--------------------------
#### 7. In-order traversal

Write a function that <mark>goes through a binary tree using in-order traversal</mark>

prototype:  
```
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

- Where ```tree``` is a pointer to the root node of the tree to traverse
- And ```func``` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If ```tree``` or ```func``` is ```NULL```, do nothing

desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
12
56
98
256
402
512
```
  
[^](#table-of-contents)

--------------------------
#### 8. Post-order traversal

Write a function that <mark>goes through a binary tree using post-order traversal</mark>

prototype:  
```
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

- Where ```tree``` is a pointer to the root node of the tree to traverse
- And ```func``` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If ```tree``` or ```func``` is ```NULL```, do nothing

desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (056)     (256)     (512)
6
56
12
256
512
402
98
```
  
[^](#table-of-contents)

--------------------------
#### 9. Height

Write a function that <mark>measures the height of a binary tree</mark>

prototype:  
```
size_t binary_tree_height(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to measure the height.
- If ```tree``` is ```NULL```, your function must return ```0```

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Height from 98: 2
Height from 128: 1
Height from 54: 0
```
  
[^](#table-of-contents)

--------------------------
#### 10. Depth

Write a function that <mark>measures the depth of a node in a binary tree</mark>

prototype:  
```
size_t binary_tree_depth(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the node to measure the depth
- If ```tree``` is ```NULL```, your function must return ```0```

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Depth of 98: 0
Depth of 128: 1
Depth of 54: 2
```
  
[^](#table-of-contents)

--------------------------
#### 11. Size

Write a function that <mark>measures the size of a binary tree</mark>

prototype:  
```
size_t binary_tree_size(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to measure the size
- If ```tree``` is ```NULL```, the function must return 0

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Size of 98: 5
Size of 128: 2
Size of 54: 1
```
  
[^](#table-of-contents)

--------------------------
#### 12. Leaves

Write a function that <mark>counts the leaves in a binary tree</mark>

prototype:  
```
size_t binary_tree_leaves(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to count the number of leaves
- Ifv```tree``` is ```NULL```, the function must return 0
- A ```NULL``` pointer is not a leaf

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Leaves in 98: 2
Leaves in 128: 1
Leaves in 54: 1
```
  
[^](#table-of-contents)

--------------------------
#### 13. Nodes

Write a function that <mark>counts the nodes with at least 1 child in a binary tree</mark>

prototype:  
```
size_t binary_tree_nodes(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to count the number of nodes
- If ```tree``` is ```NULL```, the function must return ```0```
- A ```NULL``` pointer is not a node

desired output:  
```
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Nodes in 98: 3
Nodes in 128: 1
Nodes in 54: 0
```
  
[^](#table-of-contents)

--------------------------
#### 14. Balance factor

Write a function that <mark>measures the balance factor of a binary tree</mark>

prototype:  
```
int binary_tree_balance(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to measure the balance factor
- If ```tree``` is ```NULL```, return ```0```

desired output:  
```
                      .-------(098)--.
            .-------(045)--.       (128)--.
       .--(012)--.       (050)          (402)
  .--(010)     (054)
(008)
Balance of 98: +2
Balance of 128: -1
Balance of 54: +0
```
  
[^](#table-of-contents)

--------------------------
#### 15. Is full

Write a function that <mark>checks if a binary tree is full</mark>

prototype:  
```
int binary_tree_is_full(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to check
- If ```tree``` is ```NULL```, your function must return ```0```

desired output:  
```
       .-------(098)--.
  .--(012)--.       (128)--.
(010)     (054)          (402)
Is 98 full: 0
Is 12 full: 1
Is 128 full: 0
```
  
[^](#table-of-contents)

--------------------------
#### 16. Is perfect

Write a function that <mark>checks if a binary tree is perfect</mark>

prototype:  
```
int binary_tree_is_perfect(const binary_tree_t *tree);
```

- Where ```tree``` is a pointer to the root node of the tree to check
- If ```tree``` is ```NULL```, your function must return ```0```

desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(128)--.
(010)     (054)     (010)     (402)
Perfect: 1

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)
                              (010)
Perfect: 0

       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (010)       .--(402)--.
                              (010)     (010)
Perfect: 0
```
  
[^](#table-of-contents)

--------------------------
#### 17. Sibling

Write a function that <mark>finds the sibling of a node</mark>

prototype: 
```
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
```
- Where ```node``` is a pointer to the node to find the sibling
- Your function must return a pointer to the sibling node
- If ```node``` is ```NULL``` or the parent is ```NULL```, return ```NULL```
- If ```node``` has no sibling, return ```NULL```

desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Sibling of 12: 128
Sibling of 110: 402
Sibling of 54: 10
Sibling of 98: (nil)
```
  
[^](#table-of-contents)

--------------------------
#### 18. Uncle

Write a function that <mark>finds the uncle of a node</mark>

prototype: 
```
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
```
- Where ```node``` is a pointer to the node to find the uncle
- Your function must return a pointer to the uncle node
- If ```node``` is ```NULL```, return ```NULL```
- If ```node``` has no uncle, return ```NULL```


desired output:  
```
       .-------(098)-------.
  .--(012)--.         .--(128)-------.
(010)     (054)     (110)       .--(402)--.
                              (200)     (512)
Uncle of 110: 12
Uncle of 54: 128
Uncle of 12: (nil)
```
  
[^](#table-of-contents)

--------------------------

#### Requirements

- Allowed editors: ```vi```, ```vim```, ```emacs```
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A ```README.md``` file, at the root of the folder of the project, is mandatory
- Your code should use the ```Betty``` style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```
- You are not allowed to use global variables
- No more than 5 functions per file
- ou are allowed to use the standard library
- In the following examples, the ```main.c``` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own ```main.c``` files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called ```binary_trees.h```
- Don't forget to push your header file
- All your header files should be include guarded

[^](#table-of-contents)
