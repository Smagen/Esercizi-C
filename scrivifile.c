#include <stdio.h>

int main()
{
	char ch;
	FILE *fpw;
	if (fpw=fopen("out.txt", "w"))
	{
		printf ("Cosa vuoi scrivere sul file?\n> ");
		do
			fputc(ch=getchar(),fpw);
		while (ch!='\n');
	}
	fclose(fpw);
}
