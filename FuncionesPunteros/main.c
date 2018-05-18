#include <stdio.h>
#include <stdlib.h>

void intercambiar(int num1,int num2);
void intercambiarConPunteros(int *num1,int *num2);
void PonerEnCero(int *num1);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    PonerEnCero(&edadDos);
    printf("\n Edad 1: %d",edadUno);
    printf("\n Edad 2: %d",edadDos);
    intercambiarConPunteros(&edadUno,&edadDos);
    printf("\n Edad 1: %d",edadUno);
    printf("\n Edad 2: %d",edadDos);


    return 0;
}

void PonerEnCero(int *num1)
{
    *num1=0;
}

void intercambiar(int num1,int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}

void intercambiarConPunteros(int *num1,int *num2)
{
    int aux;
    aux=*num1;
    *num1=*num2;
    *num2=aux;
}
