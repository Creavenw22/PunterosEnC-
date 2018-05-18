#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero,int cantidad);

int main()
{
    int numeros[3];
    int *puntero;
    int aux=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;

    printf("\nnumero: %d",numeros);
    printf("\nnumero: %d",*puntero); //Muestra el contenido de punteros
    printf("\nnumero: %d",*(puntero+1)); //Muestra el contenido de la siguiente direccion de memoria
    printf("\nnumero: %d",*(puntero+2));
    mostrar(numeros,3);
    return 0;
}

void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nnumero: %d",*(puntero+i));
    }
}
