#include <stdio.h>
#include <stdlib.h>
 int main ()
 {
    int num, cont;
    printf ("\n Digite um numero: ");
    scanf ("%d", &num);
    for (cont=1;cont<=5;cont=cont+1)
    {
        printf ("\n Numero = %d", num);
    }
    return 0;
 }
//comando for será executado quando ouver um numero fixo