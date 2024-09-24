# include <stdio.h>


// retorna 1 se pertence e 0 caso contrário
int fibonnaci(int x)
{
	int a = 0; 
	int b = 1;
	int temp; 

	// verifica se x == 0 || x== 1
	if(x == a || x == b) return 1;

	// calcula os números de fibonacci até que seja >= x
	while(b<x)
	{
		temp = b;
		b = a + b;
		a = temp;
	}

	// se for == x pertence caso contrário não pertence
	return (b == x);
}

int main()
{


	return 0;
}