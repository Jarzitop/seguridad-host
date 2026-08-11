#include <stdio.h>

int main(void) {
    int edad = 20;
    char inicial = 'J';
    float altura = 1.75f;
    double nota = 4.35;

    printf("Edad: %d\n", edad);
    printf("Inicial: %c\n", inicial);
    printf("Altura: %.2f\n", altura);
    printf("Nota: %.2f\n", nota);

    printf("\nTamanos en memoria:\n");
    printf("char: %zu bytes\n", sizeof(char));
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    return 0;
}
