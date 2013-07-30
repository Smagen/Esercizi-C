#include <stdio.h>
#define SIZE 30

void sottostringa (char stringa[], int a, int b);
int contacaratteri (char stringa[]);

int main ()
{
	char stringa [SIZE];
	int a,b, lunghezza;
	printf ("Inserisci stringa: ");
	scanf ("%s", stringa);

	lunghezza=contacaratteri(stringa);
	printf ("\nLa stringa e' lunga %d caratteri.\n", lunghezza);

	do
	{
		printf ("\nRicorda, il primo estremo deve essere minore del secondo.\n");
		printf ("L'estremo piu' piccolo e' 1 e l'estremo piu' grande e' %d\n", lunghezza);

		printf ("Inserisci il primo estremo: ");
		scanf ("%d", &a);
		printf ("\nInserisci il secondo estremo: ");
		scanf ("%d", &b);
	} while (a>=b || a<=0 || b>lunghezza);

	b--;
	sottostringa (stringa,a,b);

	printf ("\nAddio!\n");
	return 0;
}

void sottostringa (char stringa[], int a, int b)
{
	for (a--; a<b; a++)
		putchar (stringa[a]);
}

int contacaratteri (char stringa[])
{
	int i;
	for (i=0; stringa[i]!='\0'; i++);
	return i;
}
