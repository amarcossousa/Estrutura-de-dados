// Exemplo: INFIXO, POSFIXO E PREFIXO
// Algoritmo de avaliação de forma POSFIXA
#include<stdio.h>
#define MAXCOLS 80
int main()
{
    char expr[MAXCOLS];
    int position = 0;
    float eval();

    while ((expr[position++] = getchar()) != '\n');
    expr[-position] = '\0';
    printf("%s%s", "a expressão posfixa original eh", expr);
    
    printf("%f\n", eval(expr));
} /* Fim main*/

struct stack{
    int top;
    float items[MAXCOLS];
};

float eval(expr)
char expr [];
{
    int c, position;
    float opnd1, opnd2, value;
    float oper(), pop();
    struct stack opndstk;
    opndstk.top = -1;
    for (position = 0; (c = expr[position]) != '\0'; position++)
        if (isdigit(c))
        /* operando-- converte a represent. em caractere */
        /* do digito em flutuante e introduz
        */
        /*
        na pilha
        */
        push(&opndstk, (float)(c-'0'));
        else {
            opnd2 = pop (&opndstk);
            opnd1 = pop (&opndstk);
            value = oper(c, opnd1, opnd2);
            push (&opndstk, value);
        }/* fim else*/
    return (pop(&opndstk));
}/*fim eval*/

isdigit(symb)
char symb;
{
    return (symb >= '0' && symb <= '9');
}


// Rever formas INFIXA, POSFIXA e PREFIXA
// Exercicios das paginas 129, 130 e 131





