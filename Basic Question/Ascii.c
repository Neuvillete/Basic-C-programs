// Write a c program to find ASCII value.

include <stdio.h>

int main(){

    char character;

    printf("Enter any character to know its ASCII value");
    scanf("%c", &character);

    int asciiValue = character;

    printf("The ASCII value of %c is %d", character , asciiValue);

    return 0;
    
}
