// Coding_Ex.c

#include <stdio.h>


// this function gets added to the top of the stack
// then gets removed after its return statement
void helloWorld() {
    printf("Hello World\n");
}

// this function gets added to the top of the stack
// then gets removed after its return statement
void doALoop() {

    // all variables within this loop DOES NOT get added to the stack
    // they get added to the local scope
    for(int i = 0; i < 10; i++) {
        printf("i: %d\n", i);
        char benji = 'b';

        int class_count = 10;

        double runtime = 10.5;
    }
}

// this function gets added to the top of the stack
// then gets removed after its return statement
int randomFunction() {
    helloWorld();
    doALoop();
    return 4;
}

int main(int argc, char** argv) {
    // we have two arguments within main
    // these arguments are typically used for command line purposes
    // argc is the number of arguments
    // argv is the array of arguments

    // random function
    int x = randomFunction();

    // examples of pointers
    int a = 10;                 // a = 10 BUT the address of a is 0x42343ff7ac 
    int *pointer_to_a = &a;     // pointer_to_a will house the address of a

    // have a variable set to the function
    // then you can reference it
    int result = randomFunction();                  // function always returns 4 but the memory location will always change
    int *pointer_to_random_function = &result;      // pointer to random function will always have the same memory as "result" address

    // VOID does not always work
    // DISCLAIMER: avoid using void pointers unless usecase specifies it
    void *pointer_to_void = &result;

    // Run 1: address of a was 0x42343ff7ac
    // Run 2: address of a became 0xfdf71ffcbc
    // this is part of static compilation where memory is given "randomly" to the variable

    // to get guaranteed locations, you must set the pointer address
    pointer_to_a = 20;      // DISCLAIMER: 20 is 0x14 in hexadecimal
    
    return 0;
}