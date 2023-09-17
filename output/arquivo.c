#include <stdio.h>
#include <stdlib.h>

int main (){
    int num, ind,soma=0;
    scanf("%d", &num);
    for (ind=1,ind<=5;ind++)
    { scanf ("%d", &num);
        if (num%2==0)
            soma=soma+num;

    }
    printf ("%d", soma);
}