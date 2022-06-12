// Motando operações PUSH

push(ps, x)
struct stack *ps;
int x; 
{
    ps->items [++(ps->top)] =x;
    return;
} /*fim push*/