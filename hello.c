#include <stdio.h>

#define valorDePorcion 1.5

int a,b,c;
float f,g,h;

const char NEWLINE = '\n';

int main()
{	
	float costoPizza = valorDePorcion * 6;

	a = 5;
	b = 30;
	c = a + b;

	printf("Value of sum is: %d \n", c);
	printf("Total bill: %f \n", costoPizza);
	printf("%c", NEWLINE);
	printf("*** Final del programa *** %c", NEWLINE);

	return 0;	
	
}
