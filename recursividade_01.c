// Exercicios das paginas 143, 144 e 145


// Fatorial
fact(n)
int n;
{
    int x, y;

    if (n == 0)
        return(1);
    x = n - 1;
    y = fact(x);
    return(n * y);
} /* fim fact */
/* Não copila*/


// Multitplicação a + b == c
mult(a, b)
int a, b;
{
    return(b == 1? a : mult(a, b - 1) + a)
} /* fim mult*/


// Fatorial mais compacto
fact(n)
int n;
{
    return(n == 0 ? 1 : n * fact(n-1))
} /* fim fact*/


int main(){
    return 0;
}



