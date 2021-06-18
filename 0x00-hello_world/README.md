Low level programming scripts
=============================

 0. gcc -E $CFILE > c [runs a C file through the preprocessor and save the result into another file.]

 1. gcc -c $CFILE -o main.o  [compiles a C file but does not link and saves the results into the file main.o]

 2. gcc -S $CFILE -o 2-main.c [generates the assembly code of a C code and save it in the 2-main.s file]

 3. gcc $CFILE -o cisfun  [compiles a C file and creates an executable named cisfun]