#include <stdio.h>
int main()
{
    int first, second, add, subtract, multiply;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    add = first + second;
    subtract = first - second;
    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    
    return 0;
}

