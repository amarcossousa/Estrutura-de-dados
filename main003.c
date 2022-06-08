// Uniões simples 
// Estrutura basica de C conjunta de struct 

#define INTERGER 1
#define REAL 2

struct stint {
    int f3, f4;
};

struct stfloat {
    float f5, f6;
};

struct sample {
    int f1;
    float f2;
    int utype;
    union {
        struct stint x;
        struct stfloat y;
    } funion;
};
