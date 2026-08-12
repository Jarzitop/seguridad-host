#include <stdio.h>

int main(void){
    int opcion = 2;
    switch(opcion){
        case 1:
            printf("Consultar Archivo\n");
            break;
        case 2:
            printf("Modificar Archivo\n");
            break;
        case 3:
            printf("Eliminar archivo\n");
            break;
        default:
            printf("Opción no válida\n");
    
        }


    return 0;
}