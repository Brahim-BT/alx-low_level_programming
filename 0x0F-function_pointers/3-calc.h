#ifndef _calc_h
#define _calc_h

/**
 * struct op - Struct op
 * @op: an operator
 * @f: The function auxilary
 */

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif