#include <stdlib.h>
#include "c-sum.h"

void sum_abs_(int *in, int *num, int *sum) { //Aca se cambia int por void para definirla como 
   int i;                                    //vacia, de esta manera no tiene que "returnear"
                                             // nada y no me arma lio con FORTRAN que no acepta
   for (i=0,*sum=0; i < *num; ++i) {         // returns
       *sum += abs(in[i]);
   }
//   return ; //Por lo que puse arriba es que esta comentado este return
}
 
