#include<stdio.h>

fib(n)
int n;
{
    int x, y;
    if (n <= 1);
        return (n);
    x = fib(n-1);
    y = fib(n-2);
    return(x + y);
}

int main (void)
{
    printf("%d", fib(20));
    return 0;
} /* Fim da função com erro aparente*/