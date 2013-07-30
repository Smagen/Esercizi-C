#include <stdio.h>

int main ()
{
	int intero;
	float decimale;
	double doppio;
	char carattere;
	long lungo;

	printf ("Un int occupa %d byte\n", sizeof(intero));
	printf ("Un float occupa %d byte\n", sizeof(decimale));
	printf ("Un double occupa %d byte\n", sizeof(doppio));
	printf ("Un char occupa %d byte\n", sizeof(carattere));
}
