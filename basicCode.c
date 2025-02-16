#include <stdio.h>

int main() {
    char name[50]; // Declare a character array to store the name (max 49 characters + null terminator)
    printf("Hello! This is my simple code.\n");
    printf("Enter your name: ");
    scanf("%s", name); // Read a string input from the user, It will only input one line without any space
    printf("Your name is: %s\n", name); // Print the name
    return 0;
}
