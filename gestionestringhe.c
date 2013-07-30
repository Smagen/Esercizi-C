#include <stdio.h>

void inserisci (char *ptr);
void stampa (char *ptr, char *msg);
int conta (char *ptr);
char * estrai (char *ptr, int a, int b);

int main ()
{
	char stringa[80], *stringa1;
	int numero_car,a,b;

	inserisci(stringa);
	stampa(stringa, "\nLa stringa inserita e': ");

	numero_car=conta(stringa);
	printf ("\nLa stringa e' composta da %d caratteri.\n", numero_car);

	printf ("\nInserisci valori il primo estremo della sottostringa: ");
	scanf ("%d", &a);
	printf ("\nInserisci valori il secondo estremo della sottostringa: ");
	scanf ("%d", &b);

	stringa1=estrai(stringa,a,b);
	printf ("\nLa sottostringa e': %s\n", stringa1);

	return 0;
}

void inserisci (char *ptr)
{
	fputs("\nDigita una linea di testo: ", stdout);
	fgets(ptr, 80, stdin);
}

void stampa (char *ptr, char *msg)
{
	puts (msg);
	puts (ptr);
}

int conta (char *ptr)
{
	int count=0, i;

	while (*ptr!='\0')
	{
		++count;
		++ptr;
	}
	return count;
}

char * estrai (char *ptr, int a, int b)
{
	char *estr;

	estr=ptr+a;
	*(estr+b) = '\0';
	return estr;
}
