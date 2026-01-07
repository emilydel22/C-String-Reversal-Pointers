// Fully Commented Code (TiresAndApples).c

#include <stdio.h>      // Standard input/output functions
#include <string.h>     // For string handling functions like strcpy() and strlen()
#include <time.h>       // For getting the current time

// Function prototype declaration
void FlipMySentence(char* apples);   // Function takes a pointer to a char (string) and reverses it

int main()
{
    int i;                          // Integer for loop indexing
    char Tires[80];                 // Character array (string) with space for 79 chars + null terminator
    time_t rawtime = time(NULL);    // Store current time in seconds since epoch

    // Copies string "Whitewalls go faster" into Tires
    strcpy(Tires, "Whitewalls go faster");

    // Prints the memory address of the first element of Tires
    printf("Tires is located at %p\n", Tires);

    // Loop through first 10 characters of Tires to print each character and its address
    for (i = 0; i < 10; i++)
    {
        printf("Tires[%d] = %c at %p\n", i, Tires[i], &Tires[i]);

        // Alternative ways to print the same information are commented out below
        // printf("Tires[%d] = %c at %p\n", i, Tires[i], (Tires + i));
        // printf("Tires[%d] = %c at %p\n", i, *(Tires + i), (Tires + i));
    }

    // Calls function to reverse the string in Tires
    FlipMySentence(Tires);

    // Prints the reversed string and the current time as a formatted date
    printf("The reversed string is: '%s' on %s\n", Tires, ctime(&rawtime));

    return 0;   // End of program
}

// Function to reverse a string passed from main()
void FlipMySentence(char* apples)
{
    int i, j, length = 0;   // Loop counters and variable to store string length
    char temp;              // Temporary variable for swapping characters

    length = strlen(apples);            // Gets the length of the string
    printf("Sentence length = %d\n", length);

    // Loops from both ends of the string toward the center, swapping characters
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = apples[i];       // Store left-side character in temp
        apples[i] = apples[j];  // Move right-side character to left-side position
        apples[j] = temp;       // Move temp (original left-side) to right-side
    }

    return;   // End of function
}
