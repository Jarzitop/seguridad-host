#include <stdio.h>
int global = 50;
int main (void){
    
    int local = 20;
    int *p = &global;
    int *j= &local;
    printf("Memoria global %p\n",(void *)p );
    printf("Memoria local %p\n",(void *)j );
}