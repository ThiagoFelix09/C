#include <stdio.h>
#include <stdlib.h>
int main()
{
    const int tamvet=5, tamlista=5;
    int vet[tamvet], numero, posicao, posvet, achou;
    printf ("Digite os dados para o vetor\n");
    for (posicao=0; posicao<tamvet; posicao++)
    {
        scanf ("%d", &vet[posicao]);
    } 
    printf ("Digite os numeros da lista\n");
    for (posicao=1; posicao<=tamlista; posicao++)
    {
        printf("Digite um numero\n");
        scanf ("%d", &numero);
        posvet=0;
        achou=0;
        while (posvet<=tamvet-1 && achou==0)
        {
            if (numero==vet[posvet])
            { 
                achou=1;
            }
            else posvet=posvet+1;

            if (achou==1)
            {
                printf ("achou o numero na posicao: %d", posvet);
            }
            else
                printf("nao achou o numero\n");
            
            
        }
        
    }
return 0;
}