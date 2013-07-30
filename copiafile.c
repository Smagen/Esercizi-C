#include <stdio.h>

int main()
{
	char inName[64], cutName[64];
	FILE *in, *out;
	int c;

	printf ("\nDigita il nome del file da copiare: ");
	scanf("%63s", inName);
	printf ("\nDigita il nome del file di output: ");
	scanf("%63s", outName);

	if ((in = fopen(inName, r)) == NULL)
	{
		printf ("\nImossibile aprire il file di input!\n");
		return 1;
	}
	if ((out = fopen(outName, w)) == NULL)
	{
		printf ("\nImossibile creare il file di output!\n");
		return 1;
	}

	while ((c=

	fclose(fpw);
}
