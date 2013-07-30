//Sorgente scritto da Marco Meli. Remember Smagen is the way.

/* Scrivere un programma che stampi una stringa data in input da tastiera al contrario.
NB: Usare una funzione ricorsiva
*/


#include <stdio.h>

void reverse (void);

int main ()
{
	printf ("Inserisci la stringa da stampare al contrario: ");
	reverse();
	putchar ('\n');
}

void reverse (void)
{
	char c;

	if ((c=getchar()) != '\n') reverse();
	
	putchar (c);
}
