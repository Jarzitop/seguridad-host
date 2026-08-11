#include <stdio.h>
int main (void){
    int edad= 15; 
    int tienePermiso= 1; 
    if (edad>=18 && tienePermiso==1) {
        printf("Acceso Permitido");
    } else{
        printf("Acceso Denegado");
    }



    return 0;
}