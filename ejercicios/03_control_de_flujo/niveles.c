#include <stdio.h>

int main (void){
    int nota = 69;
    
    if( nota >= 90){
        printf("Excelente");    
    } else if ( nota>= 70){
        printf("Aprobado");
    } else {
        printf("Reprobado");
    }


    return 0; 
}
