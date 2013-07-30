/*Sorgente scritto da Marco Meli. Remember, Smagen is the way.*/
/*
1. Chiedere quale elemento eliminare
2. Trovare elemento
    2.1 Se elemento è di testa
	2.1.1 Rimuovi testa
    2.2 Se elemento è di coda
	2.2.1 Rimuovi coda
	2.2.2 Altrimenti rimuovi elemento di mezzo
*/

#include <stdio.h>

typedef struct asd
{
	int value;
        struct asd *next;
} str;


int main ()
{
	int scelta, posizione=1, trovato=0;
;
	str e1, e2, e3;
	str *testa = &e1, *comodo;

	printf ("\nInserisci valore 1: ");
	scanf ("%d", &e1.value);

	printf ("\nInserisci valore 2: ");
	scanf ("%d", &e2.value);

	printf ("\nInserisci valore 3: ");
	scanf ("%d", &e3.value);

	e1.next=&e2;
	e2.next=&e3;
	e3.next=NULL;

	printf ("Inserisci valore da eliminare: ");
	scanf ("%d", &scelta);

        while (testa != NULL)
        {
                if (testa->value == valore)
                {
			printf ("\nValore trovato alla posizione %d!", posizione);
			if (posizione == 1)
			{
				comodo=testa->next;
				testa->next=NULL;
				testa=comodo;
			}


			else if (posizione == 2) list_pointer == 
                }
                list_pointer = list_pointer->next;
                posizione++;
        }

        if (trovati == 0)
                printf ("\nElemento non trovato.\n");
	return posizione;
}
