/* Sorgente scritto da Marco Meli. Remember Smagen is the way. */
/*
Si scriva un programma in linguaggio C che legga due numeri da tastiera, detti A e B, e determini le seguenti informazioni, stampandole a video:
1. determini se B è un numero positivo o negativo
2. determini se A è un numero pari o dispari
3. calcoli il valore di A + B
4. determini quale scelta dei segni nell’espressione (A) + (B) porta al risultato massimo, e quale è questo valore massimo.
*/

#include <stdio.h>

void positivita (int b);
void parita (int a);
int somma (int a, int b);
void max (int a, int b);

int main ()
{
	int x, y, sum;
	printf ("Inserisci il primo valore: ");
	scanf ("%d", &x);
	printf ("\nInserisci il secondo valore: ");
	scanf ("%d", &y);
	positivita (y);
	parita (x);
	sum = somma (x,y);
	printf ("\nLa somma tra i due numeri e': %d", sum);
	max (x,y);
}

void positivita (int b)
{
	if (b<0) printf ("\nIl secondo numero e' negativo.");
	else printf ("\nIl secondo numero e' positivo.");
}


void parita (int a)
{
	if (a%2 != 0) printf ("\nIl primo numero e' dispari.");
	else printf ("\nIl primo numero e' pari.");
}

int somma (int a, int b)
{
	return (a+b);
}


void max (int a, int b)
{
	int x,y,max;
	x=abs(a);
	y=abs(b);
	max=x+y;
	printf ("\nIl valore massimo di somma e' %d e si ottiene sommando %d e %d\n", max, x, y);
}
