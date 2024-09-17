#include <stdio.h>

// RECAP
    // covered basic file I/O
    // covered command line arguments
    // covered DRY (by reducing close and file checking)

int checkForFileExistence(FILE *ptr) {
    if(ptr == NULL)
        return 1;

    return 0;
}

void closingIsImportant(FILE *file) {
    fclose(file);
}

void readingIsBoring()
{
    /* in order to read in C, you need three aspects
        1. you need a file name
        2. you need to select a mode
        3. you need a pointer
    */

    // this is initialization
    FILE *reader = NULL;
    reader = fopen("example.txt", "r");

    // two things can occur, file EXISTS or NOT
        // we need to check a file has been OPENED
    if(checkForFileExistence(reader))
        return;

    // read the inputs (similar to scanf which read USER input, we will use FSCANF to read file inputs)
    char string_array[128];         // WHY do we do this? we use an array to hold whatever "value" we will read in
    fscanf(reader, "%s", string_array);         // you can still substitute ints/floats/chars instead of arrays here

    printf("string read from the file: \n");
    printf("\t %s \n", string_array);

    // WHY did the print only show PART of the file contents???
        // did not use a loop to continuoulsy read the contents
        // this is saved for part 2 of week 5 (or the specifics regarding char processing)


    closingIsImportant(reader);
}

void writingIsBetter() {
    // you still need the same three requirements
    FILE *writer = fopen("example.txt", "w");

    if(checkForFileExistence(writer))
        return;

    // computers are binary. that means, powers of 2. What is 128? 
    char user_input[128];
    scanf("Asking for user input: ", user_input);

    fprintf(writer, "%s", user_input);

    closingIsImportant(writer);
}


int main(int argc, char **argv)
{
    printf("Going over File I/O \n");

    /*
        List of items I wanna go over:
        - opening and reading a file
        - opening and writing a file
        - closing a file. this is found within reading/writing functions
        - command line ARGUMENTS (this was not covered within the lecture slides)
    */

    // first item
    readingIsBoring();

    // second item
    writingIsBetter();

    // four item
        // youve been seeing this for the last 3-4 assignments? this includes the PAs (proghramming assignments) and the labs
    // argc is the number of arguments SUPPLIED at command line
    // argv are the ACTUAL arguments SUPPLIED at command line

    printf("The number of command line arguments assigned is: %d\n", argc);


    // printing each command line argument passed into the program
    // COMMAND LINE INPUTS: a.exe example.txt README.md
        // index 0: is a.exe
        // index 1: example.txt
        // index 2: README.md
    for(int i = 0; i < argc; i++)
        printf("Command line argument %d: %s\n", i, argv[i]);

    return 0;
}