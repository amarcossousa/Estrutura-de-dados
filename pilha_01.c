// Estrutura de dados do tipo pilha


/*push, pop, stacktop e empty - Tipos de operações 
usadas numa pilha.

Pilhas devem sempre ser usadas quando o tipo
de dado exige que: "O ultima a entrar é o 
primeiro a sair. */


// Exercicios das paginas 96 e 97


// Definindo uma pilha em C
#define STACKSIZE 100
struct stack{
    int pop;
    int items[STACKSIZE];
} s ;

// Uma pilha sem restrinção de tipos de dados
#define STACKSIZE 100
#define INTEGR 1
#define FLT 2
#define STRING 3
struct stackelement {
    int etype; /* etype equivale a INTGR, FLT, ou STRINGS */
                /* Dependo do tipo do elem. correspondente*/
    union {
        int ival;
        float fval;
        char *pval;
    } element;
};

#define STACKTOP 0 // Definido para tirar erro. Verificar função 
struct stack {
    int top;
    struct stackelement items[STACKTOP]; // "ver de onde vem STACKTOP"
};


pop(ps)
struct statck *ps;
{
    if (empty(ps)){
        printf("%s", "stack underflow");
        exit(1);
    } /* fim if*/
    return(ps->items[ps->top--]);
} /* fim pop*/


// Esvazia a pilha e retorna um aviso se ocorrer subfluxo

popandtest(ps, px, pund)
struct stack *ps;
int *pund, *px; 
{
    if (empty(ps)) {
        *pund = TRUE;
        return;
    } /*fim id*/
    *pund = FALSE;
    *px = ps -> intems [ps->top--];
    return;
}/*fim popandtest*/






























































































