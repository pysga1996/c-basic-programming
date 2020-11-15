#include <stdio.h>
#include <string.h>

void stringFunction(char string1[], char string2[]) {
    // Copy string
    char string3[6];
    strcpy(string3, string1);
    printf("String 3 copied from string 1: %s\n", string3);
    strcat(string3, string2);
    printf("String 3 concatenated by string 2: %s\n", string3);
    printf("String 3 length: %llu\n", strlen(string3));
    /*
     * <0	the first character that does not match has a lower value in ptr1 than in ptr2
        0	the contents of both strings are equal
        >0	the first character that does not match has a greater value in ptr1 than in ptr2
     */
    printf("Compare string 2 and string 3: %d\n", strcmp(string3, string2));
}

void demoString() {
    printf("---String Demo---\n");
    char string1[] = "abc"; // using literal initialization
    char string2[] = {'d', 'e', 'f', '\0'}; // using array initialization
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    stringFunction(string1, string2);
    printf("---End---\n\n\n");
}

