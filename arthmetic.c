#include <stdio.h>
int main()
{
    int first, second, add, subtract, multiply;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    add = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;
    printf("hello sir");
    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication of numbers = %d\n",multiply);
    printf("Division of numbers = %.2f\n",divide);
    
    return 0;
}

