#include <stdio.h>

int main(void){
    int numero = 10; 
    int *p = &numero;
    printf("%d\n", numero);
    printf("*p:%d\n", *p);
    *p = 50;
    printf("numero despues:%d\n", numero);
    printf("*p despues %d\n", *p);
    printf("Direccion de numero: %p\n", (void *)&numero);
    printf("Valor de p: %p\n", (void *)p);
    return 0;

}