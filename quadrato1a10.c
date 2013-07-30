//Remember, Smagen is the way.

#include <stdio.h>

void quadrato(int a, int b);

int main ()
{
	int a, b;
	printf ("Inserisci A: ");
	scanf ("%d", &a);
	printf ("Inserisci B: ");
	scanf ("%d", &b);
	quadrato(a,b);
	return 0;
}

void quadrato (int a, int b)
{
	int i;
	for (i=a; i<=b; i++)
		printf ("Il quadrato di %d e': %d\n", i, i*i);
}

