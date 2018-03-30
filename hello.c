#include<stdio.h>

int main(void){
    printf("Hello World\n!");
}


// -rwx------ 1 ubuntu ubuntu 8585 Mar 30 00:05 a.out*
// -rw------- 1 ubuntu ubuntu   67 Mar 30 00:07 hello.c
//The above is file size, which are accessed using ls -l (ls dash l)

// Notes from the Lesson:

// What is a void? Nothing. No parameters.No nessesary, but C programs like to be specific.
//Data type attatched to our function. What our function will deliver back? You slways have to do a return call in C, and it have to be specify what is returned.
//Any code needs to be inside of a function of some kind. You don’t have to call the main function. We have functions, but the difference is that in what’s a return value(type has to be specified).
//The entire javascript file was your entire function. In C, the main function can be all the way at the bottom and still be the main function.
//What’s with the space btw curly braces?
//why can’t the file run? Not executable. Why? How  to make it into an executable file?
//command Clang hello.c.
// What appears after ls command:
// a.out* hello.c
// command: ./a.out
// This will print out : Hello World! On the same like. Needs to be told to put a new line.
// \n is used. Purple
// After do clang hello.c
// ./a.out
// Should print hello world
// Console.log in C is? Ptrintf
