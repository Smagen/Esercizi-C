#include <stdio.h>
#include <time.h>
#define SIZE 20
int main ()
{
	int i, vettore [SIZE], minimo;
	srand (time(NULL));
	for (i=0; i<SIZE; i++)
	{
		vettore[i]=(rand()%100)+1;
		printf ("Valore %d:\t%d\n", i+1, vettore[i]);
	}
	minimo=vettore[0];
	for (i=1; i<SIZE; i++)
		if (vettore[i]<minimo)
			minimo=vettore[i];
	printf ("\nIl minimo e': %d\n", minimo);
}

