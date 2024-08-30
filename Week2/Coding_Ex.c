#include <stdio.h>

// extra libraries for the first three prints
#include <math.h>
#include <ctype.h> 
#include <string.h>

// gcc Coding_Ex.c -o outputname 
// ./outputname

int main () {
    // different libraries
    int x = 4;
    int x_squared = pow(4, 2); 
    printf("4 to the power of 2 is: %d\n", x_squared);

    char letter = 'c';
    if(isalpha(letter))
        printf("Is 'letter' an actual 'letter'? -> %c\n", letter);

    char* string = "dsjafklsdajfklaejflkasdrfjil";
    printf("this name has %ld characters. \n", strlen(string));

    // I/O

    // Addition
    int left;
    int right; 

    printf("\nFirst Number: ");
    scanf("%d", &left);
    printf("Second Number: ");
    scanf("%d", &right);
    printf("The result of %d plus %d is %d.\n", left, right, left+right);

    // Recording length
    int length_of_recording = 0;
    printf("\nLength of Recording: ");
    scanf("%d", &length_of_recording);
    printf("The length of the recording based on the user is %d minutes.\n ", length_of_recording);

    // Letter printing
    char new_letter = 'a';
    char extra_letter = 'b';

    printf("\nFirst Letter: ");
    scanf(" %c%c", &new_letter, &extra_letter);
    printf("The user has typed %c and %c \n.", new_letter, extra_letter);

    return 0;
}