#include <stdio.h>
int main(void){
    int a = 10;
    int b = 3;
    printf("Suma; %d\n", a+b);
    printf("Resta; %d\n", a-b);
    printf("Multiplicación; %d\n", a*b);
    printf("División; %d\n", a/b);
    printf("Residuo; %d\n", a%b);
    printf("División decimal; %.2f\n", (double)a/b);
    double numero = 8.75;
    int entero = numero;

printf("Entero: %d\n", entero);
    return 0;
}