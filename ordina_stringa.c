/*Ordinamento alfabetico di un array di stringhe. Sorgente di Marco Meli. Remember, Smagen is the way.*/

#include <stdio.h>
#include <string.h>
#define ROW 5
#define COL 50

int main ()
{
	char matrice[ROW][COL];
	char comodo[COL];
	int i, j;
	for (i=0; i<ROW; i++)
	{
		printf ("\nInserisci stringa %d: ", i+1);
		scanf ("%s", matrice [i]);
	}

	printf ("Elenco stringhe non ordinato:\n");
	for (i=0; i<ROW; i++)
		printf ("%s\n", matrice[i]);

	for (i=0; i<ROW; i++)
		for (j=0; j<ROW; j++)
			if ((strcmp(matrice[i], matrice[j])) < 0)
			{
				strcpy(comodo, matrice[i]);
				strcpy(matrice[i], matrice[j]);
				strcpy(matrice[j], comodo);
			}

	printf ("Elenco stringhe ordinato:\n");
	for (i=0; i<ROW; i++)
		printf ("%s\n", matrice[i]);
}
