#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <strings.h>

int main()
{
    //punteros
    int *punteroNumero;
    int numero=66;
    int numeroDos;
    numeroDos=&numero;
    punteroNumero=&numero;

    printf("\n a- %d",numeroDos);
    numeroDos=*punteroNumero;
    printf("\n b- %d\n",numeroDos);
    //*punteroNumero=&numero; NO ANDA
    //*punteroNumero=55; NO ANDA
    printf("%d\n",numero);
    printf("%d\n",numeroDos);
    printf("%d\n",&numero);
    printf("%d\n",punteroNumero);
    printf("%d\n",&punteroNumero);
    printf("%p\n",&numero);         //Notacion de
    printf("%p\n",punteroNumero);   //punteros es
    printf("%p\n",&punteroNumero);  // %p muesta la direccion de memoria en n=16

    printf("%d\n",*punteroNumero);
    //printf("%d",*punteroNumero);NO ANDA


    return 0;
}
