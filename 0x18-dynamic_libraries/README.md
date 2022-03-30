#  0x18. C - Dynamic libraries

#  Resources

## Read [What is difference between Dynamic and Static library (Static and Dynamic linking](https://www.youtube.com/watch?v=eW5he5uFBNM)

## watch [create dynamic libraries on Linux](https://www.google.com/#q=linux+create+dynamic+library)


#  General

###  .What is a dynamic library, how does it work, how to create one, and how to use it

###   .What is the environment variable $LD_LIBRARY_PATH and how to use it

###   .What are the differences between static and shared libraries

###   .Basic usage nm, ldd, ldconfig

#  Requirements

## C

. Allowed editors: vi, vim, emacs

. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

. All your files should end with a new line

. A README.md file, at the root of the folder of the project is mandatory

. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

. You are not allowed to use global variables

. No more than 5 functions per file

. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden

. You are allowed to use _putchar

.You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

.In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

.The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
.
Don’t forget to push your header file

#  Tasks

#  0. A library is not a luxury but one of the necessities of life
 ##  Create the dynamic library libdynamic.so

#  1. Without libraries what have we? We have no past and no future

## Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

#  Let's call C functions from Python

##  Create a dynamic library that contains C functions that can be called from Python

