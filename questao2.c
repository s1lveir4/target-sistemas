#include <stdio.h>

void temAa(char * str)
{
	int i = 0;
	int contador = 0;
	while(str[i] != '\0' && str[i] != '\n')
	{
		if(str[i] == 'a' || str[i] == 'A')
		{
			contador++;
		}
		i++;
	}
	if(contador == 0)
	{
		printf("A letra 'a' nao esta presente na string: %s\n", str);
	}
	else
	{
		printf("Letra a ocorre %d vezes na string: %s\n", contador, str);
	}
}

int main()
{
	char str[100];

	printf("Digite uma string: ");
	scanf("%s", str);

	temAa(str);


	return 0;
}