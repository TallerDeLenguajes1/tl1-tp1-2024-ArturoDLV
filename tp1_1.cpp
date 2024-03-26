#include <stdio.h>

int main()
{
    float pi = 3.14159265358979327;
    float *puntero = &pi;

    printf("\nHola mundo.\n");
    printf("\nContenido del puntero: %f",*puntero);
    printf("\nDireccion guardada por el puntero: %p",puntero);
    printf("\nDireccion de la variable: %p",&pi);
    printf("\nDireccion del puntero: %p",&puntero);
    printf("\nTamaño ocupado por el contenido del puntero: %d",sizeof(*puntero));

    return 0;
}