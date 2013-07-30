/*Sorgente scritto da Marco Meli. Remember, Smagen is the way.*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define DIM 20


typedef struct list
{
	char stringa[DIM];
	struct list *next;
} lista;

lista *addCount(lista *testa); //prototipo della funzione

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
		testa = addCount(testa);
		printf ("\nVuoi inserire un altro elemento?\n0.No\n1.Si\nRisposta: ");
		scanf ("%d", &scelta);
	} while (scelta == 1);

	printf ("\nAddio!\n");

	return 0; //fine
}

//descrizione della funzione
lista *addCount(lista *testa)
{
	lista *l,*p; //creo 2 puntatori del tipo lista
	int conta=1; //contatore inizializzato a 1 perché quando cercherà la stringa che abbiamo immesso troverà sempre almeno una corrispondenza
	l=p=testa; //l mi servirà per scorrere dall'inizio della lista per effettuare la ricerca - p per non perdere l'inizio della coda
	while (testa->next != NULL)
	{
		testa=testa->next; //scorro fino all'ultima posizione
	}

	if (!(testa->next=(lista *)malloc(sizeof(lista)))) //tento di allocare un nuovo record
	{
		printf ("Errore di allocazione!\n");
		exit(1); //se fallisce esce con error code 1
	}
	testa=testa->next; //mi posiziono nel record appena aggiunto
	testa->next=NULL; //sposto la fine della lista di una posizione

	printf ("\nInserisci stringa: ");
	scanf ("%s", testa->stringa);

	while (l->next!=NULL) //l puntava ancora all'inizio della lista
	{
		if((strcmp(l->stringa, testa->stringa))==0) conta++; //strcmp restituisce 0 se le stringhe sono identiche
		l=l->next; //scorro la lista
	}

	printf ("\nLa stringa:'%s' compare %d volte all'interno della lista.\n", testa->stringa, conta);
	return p;
}

//NO COMMENT
