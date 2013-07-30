/*Ordinamento crescente di un vettore. Sorgente di Marco Meli. Remember, Smagen is the way.*/

#include <stdio.h>
#include <time.h>
#define SIZE 10

void scambia(int *x, int *y);

int main ()
{
	int i, vettore [SIZE], c, j;
	srand (time(NULL));
	printf ("Vettore non ordinato: ");
	for (i=0; i<SIZE; i++)
	{
		vettore[i]=(rand()%100)+1;
		printf (" %d", vettore[i]);
	}

	for (i=0; i<SIZE; i++)
		for(j=0; j<SIZE; j++)
			if (vettore[j]>vettore[i])
				scambia (&vettore[i], &vettore[j]);

	printf ("\nVettore ordinato: ");
	for (i=0; i<SIZE; i++)
		printf (" %d", vettore[i]);
	putchar('\n');
}

void scambia(int *x, int *y)
{
	int app;
	app = *x;
	*x = *y;
	*y = app;
}
