#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b;
	char s='0',c;
	while (s!='n')
	{
		printf ("\nInserisci il numero: ");
		scanf ("%f", &a);
		b = floor(a+.5);
		printf ("\nIl numero intero piu' vicino a %.2f e' %.2f\n", a, b);
		printf ("Vuoi inserire un altro numero? [s/n]");
		printf ("\nScelta: ");
		s=getchar();
	}
	printf ("\nAddio!\n");
	return 0;
}
