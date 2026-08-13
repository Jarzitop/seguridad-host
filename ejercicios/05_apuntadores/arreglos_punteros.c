#include <stdio.h>

int main(void){
    int valores [4]= {5,10,15,20};
    int *p = valores;
    printf("*(p+1): %d\n", *(p+1));
    printf("*(p+2): %d\n", *(p+2));
    printf("*(p+3): %d\n", *(p+3));
    *(p+2) = 2031;
    printf("valores[2]: %d\n", *(p+2));
    return 0;

}