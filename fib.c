#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main(void)
{
    int num;

    printf("Input number of terms for the Series (<20): ");
    scanf("%d", & num);

    for (int i = 0; i < num; i++)
    {
        int value = fib(i);
        printf("%d ", value);
    }

    return 0;
}