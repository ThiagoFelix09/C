
#include <stdio.h>

int main (void)
{
	float nota;
	printf ("Digite a nota: ");
	scanf("%f", &nota);
	printf("%f\n",nota);
	if (nota >= 5)
		printf("Parabens você foi aprovado\n");
	if (nota < 5)
		printf("Nao deu desta vez, mas nao desista!");
	return 0;
}

