/*Sorgente scritto da Marco Meli. Remember, Smagen is the way.*/
/*Dichiarare una funzione che data una lista di stringhe come parametro formale permette di inserire nuovi elementi nella lista e restituisce
le lista ordinata in ordine crescente.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define DIM 20


typedef struct list
{
	char stringa[DIM];
	struct list *next;
} lista;

lista *addOrder(lista *testa); //prototipo della funzione

int main ()
{
	int scelta;
	lista *testa;	//puntatore all'inizio della lista

	if (!(testa = (lista *) malloc (sizeof(lista)))) //provo ad allocare il primo elemento
	{
		printf ("Errore di allocazione!\n");
		exit(1); //se non riesce ad allocare esce con error code 1
	}
	testa->next=NULL; //ultimo elemento che punta a NULL

	do //menu
	{
		testa = addOrder(testa);
		printf ("\nVuoi inserire un altro elemento?\n0.No\n1.Si\nRisposta: ");
		scanf ("%d", &scelta);
	} while (scelta == 1);

	printf ("\nAddio!\n");

	return 0; //fine
}

//descrizione della funzione
lista *addOrder(lista *testa)
{
	int i=1;
	char temp[DIM];
	lista *j,*k,*p; //creo 3 puntatori del tipo lista
	p=testa; //p serve per non perdere l'inizio della coda

	while (testa->next != NULL)
		testa=testa->next; //scorro fino all'ultima posizione

	if (!(testa->next=(lista *)malloc(sizeof(lista)))) //tento di allocare un nuovo record
	{
		printf ("Errore di allocazione!\n");
		exit(1); //se fallisce esce con error code 1
	}
	testa=testa->next; //mi posiziono nel record appena aggiunto
	testa->next=NULL; //sposto la fine della lista di una posizione

	//inserimento
	printf ("\n******************\nInserisci stringa: ");
	scanf ("%s", testa->stringa);
	printf ("\nElemento aggiunto!\n******************\n");
	//fine inserimento

	//inizio ordinamento
	for (j=p; j!=NULL; j=j->next) //confronto ogni elemento con tutti quelli presenti
	{
		for (k=p; k!=NULL; k=k->next)
		{
			if ((strcmp(j->stringa, k->stringa) < 1)) //se il secondo viene prima del primo allora faccio lo scambio
			{
				strcpy(temp,j->stringa);
				strcpy(j->stringa,k->stringa);
				strcpy(k->stringa,temp);
			}
		}
	}
	//fine ordinamento


	//stampa lista ordinata
        printf ("Lista ordinata:\n");
        for (testa=p->next; testa!=NULL; testa=testa->next)
        {
                printf ("\n%d.) %s \n", i, testa->stringa);
                i++;
        }
	//fine stampa lista ordinata

	return p; //punta sempre all'inizio della lista
}

//NO COMMENT
