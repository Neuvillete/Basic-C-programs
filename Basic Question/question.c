// Write a program to add two numbers

#include <stdio.h>

int addNUmbers(int a, int b) {
    return a + b;
}

int main (){
    int num1 , num2;

    printf("Enter the value of number 1 and number 2");
    scanf("%d %d", &num1 &num2);

    int sum = addNUmbers(num1, num2);
    
    printf("The sum of two numbers is %d", sum);
    return 0;
    
}
