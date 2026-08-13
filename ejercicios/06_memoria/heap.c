#include <stdio.h>
#include <stdlib.h>

int main (void){
    int *q = calloc(4,sizeof (int));
    *(q+0) = 5;
    *(q+1)=10;
    *(q+2) =15;
    *(q+3)=20;
    printf("Numero 1 %d\n",*(q+0));
    printf("Numero 2 %d\n",*(q+1));
    printf("Numero 3 %d\n",*(q+2));
    printf("Numero 4 %d\n",*(q+3));
    printf("Dirección 1 %p\n",(void *)q);
    printf("Dirección 2 %p\n",(void *)(q+1));
    printf("Dirección 3 %p\n",(void *)(q+2));
    printf("Dirección 4 %p\n",(void *)(q+3));
    free(q);

    


}