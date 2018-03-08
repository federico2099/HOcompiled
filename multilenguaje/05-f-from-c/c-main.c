
#include <stdio.h>

#define NUM 200

extern void sum_abs_(int *data, int *num, int *sumat);
int main(int argc, char **argv)
{
    int data[NUM], num, i, sumat;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }

    sum_abs_(data, &num, &sumat); /* saque el llamado a sumat_abs afuera del print */
    printf("sum=%d\n", sumat);    /* porque FORTRAN "devuelve el puntero donde esta */ 
    return 0;                     /* el valor de sumat. Entonces tengo que pedir en el */
}                                 /* printf que imprima el valor que se encuentra dentro */
                                  /* del puntero que me devolvio FORTRAN y eso justamente */
                                  /* es sumat. Si no hago eso y dejo el llamado dentro del */
                                  /* print como estaba, C no sabe que imprimir */
