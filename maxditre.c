//Sorgente scritto da Marco Meli. Remember, Smagen is the way.

#include <stdio.h>

int massimo (int a, int b, int c);

int main ()
{
	int a,b,c, max;
	printf ("Inserisci A: ");
	scanf ("%d", &a);
	printf ("\nInserisci B: ");
	scanf ("%d", &b);
	printf ("\nInserisci C: ");
	scanf ("%d", &c);
	max = massimo (a,b,c);
	printf ("\nIl valore massimo e': %d\n", max);
	return 0;
}

int massimo (int a, int b, int c)
{
	if (a>=b && a>=c) return a;
	if (b>=a && b>=c) return b;
	//if (c>=a && c>=b) return c;
	return c;
}
