#include <stdio.h>


/*

Estrucutura de una funcion en C

return-type function-name(parameter declartions, if any){
    declarations;
    statemets;
}

*/

//Init function
int power(int base, int n);

int main()
{	
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("| n = %d resultado de la potencia = %d | \n", i, power(2,i));
	};
	return 0;
};


int power(int base, int n)
{
	int i, p;
	p = 1;

	for(i = 1 ; i <= n ; i++)
	{
		p = p * base;
	};

	return p;
};