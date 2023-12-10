// Write a program to divide two numbers 

#include <stdio.h>

float divide(float num1, float num2){
    if (num2 == 0){
        printf("Error: Division by zero is not allowed.\n");
        return 0.0; // You can handle this error case as needed
    }
    return num1 / num2;
}

int main(){
    float dividend, divisor, result;

    printf("Enter dividend: ");
    scanf("%f", &dividend);

    printf("Enter divisor: ");
    scanf("%f", &divisor);

    result = divide(dividend, divisor);

    printf("Result of division: %.2f\n", result);

    return 0;
}


