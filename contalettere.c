/* Programma scritto da Marco Meli. Remember Smagen is the way. */
/*
Inserita una stringa da tastiera in un array da 80 caratteri contare
- Il numero di vocali
- Il numero di consonanti
- Il numero di spazi
- Il numero di caratteri speciali
*/
#define MAX 80

#include <stdio.h>
#include <ctype.h>

int main ()
{
	char stringa [MAX], c;
	int i=0, vocali=0, consonanti=0, spazi=0, specchar=0;

	//Popolo l'array di '0'
	for (i=0;i<MAX;i++)
		stringa[i]='0';
	//Fine popolamento array

	//Input
	printf ("Inserisci la stringa: ");
	gets(stringa);
	//Fine input

	//Inizio controlli
	for (i=0; i<MAX-1; i++)
	{
		if (isalpha(stringa[i])!=0)
			switch (tolower(stringa[i]))
			{
				case 'a': vocali++; break;
				case 'e': vocali++; break;
				case 'i': vocali++; break;
				case 'o': vocali++; break;
				case 'u': vocali++; break;
				default: consonanti++; break;
			}
		else
			if (stringa[i]==' ') spazi++;
		    	else
				if (!(stringa[i]>=48 && stringa[i]<=57)) specchar++;
	}
	//Fine controlli

	printf ("\nLa stringa contiene %d vocali, %d consonanti, %d spazi e %d caratteri speciali.\n", vocali, consonanti, spazi, specchar);
}
