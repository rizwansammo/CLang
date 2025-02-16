#include <stdio.h>

int main() {
    char name[50]; // Declare a character array to store the name
    printf("Hello! This is my simple code.\n");
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read the full name including spaces
    printf("Your full name is: %s", name); // Print the full name
    return 0;
}
