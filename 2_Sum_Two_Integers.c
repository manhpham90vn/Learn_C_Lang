#include <stdio.h>

int main() {
    int number1;
    int number2;

    puts("Enter first number");
    scanf("%d", &number1);

    puts("Enter second number");
    scanf("%d", &number2);

    printf("sum of %d and %d is %d\n", number1, number2, number1 + number2);
}