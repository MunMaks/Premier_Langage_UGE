#include <stdio.h>

typedef enum {integer, real, complex} NumType;

typedef struct{
  NumType type;
  union{         // new data type union{};
    int integer;
    float real;
    float complex[2];
  };
}Numeric;

void print_numeric(Numeric* n) {
    // Grace a "NumType type;" dnas Numeric on peut verifier n->type.
    switch(n->type) {
        case integer: printf("%d", n->integer); break;
        case real: printf("%f", n->real); break;
        case complex: printf("%f%+f*i", n->complex[0], n->complex[1]); break;
    }
}