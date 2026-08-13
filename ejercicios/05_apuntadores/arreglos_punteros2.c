#include <stdio.h>

int main(void){
    int numeros[5]= {3,6,9,12,15};
    int *p=numeros;
    printf("DIrección actual: %d\n", *p);
    p++;
    printf("DIrección actual1: %d\n", *p);
    p++;
    printf("DIrección actual2: %d\n", *p);
    p++;
    printf("DIrección actual3: %d\n", *p);
}