#include <stdio.h>
#include <stdlib.h>
#define N 15
#define PM 20  //prezzo menù

typedef struct prenotazione
{
	char nome[N];
	int posti;
	struct prenotazione *next;
} pren;

pren * inserisci(pren *lista);
pren * elimina(pren *lista);
//pren * modifica(pren *lista);
void totale(pren *lista);

int main()
{
	pren *lista=NULL;
	int scelta;
	while (scelta != 0)
	{
		printf("\n1.Inserisci prenotazione\n2.Elimina prenotazione\n3.Visualizza prenotazione\n4.Vedi totale\n0.Esci\nScelta: ");
		scanf ("%d", &scelta);
		switch (scelta)
		{
			case 1: lista = inserisci(lista); break;
			case 2: lista = elimina(lista); break;
//			case 3: lista = modifica (lista); break;
			case 4: totale(lista); break;
			case 0: printf ("\nAddio!\n"); break;
			default: printf ("\nScelta non valida!\n"); break;
		}
	}
	return 0;
}


pren *inserisci(pren *lista)
{
	if (lista==NULL) lista=(pren *)malloc(sizeof(pren));
	else
	{
		pren *p, *tmp;
		p=lista;
		tmp=(pren *)malloc(sizeof(pren));

		while (p->next!=NULL) p=p->next;

		printf ("\nInserisci nome per la prenotazione: ");
		scanf ("%s", tmp->nome);
		printf ("\nInserisci il numero di posti da prenotare: ");
		scanf ("%d", &tmp->posti);

		tmp->next=NULL;
		p->next=tmp;
		return p;
	}
}

void totale (pren *lista)
{
	pren *p=lista;
	int acc=0;
	while (p!=NULL)
	{
		acc+=p->posti;
		p=p->next;
	}
	printf ("\nIl ristorante incassera' %d euro\n", acc*PM);
}

pren * elimina(pren *lista)
{
	char nome[N];
	printf ("Inserisci il nome da eliminare: ");
	scanf("%s", nome);

	if (lista==NULL) return lista;
	else
	{
		pren *p1, *p2;
		p1=p2=lista;
		if (p2->next==NULL && strcmp(nome, p2->nome)!=0) free(p2);
		else
		{
			while (strcmp(nome, p2->nome)!=0 && p2->next!=NULL)
			{
				if(strcmp(nome, p2->nome)==0)
				{
					p1->next=p2->next;
					free(p2);
					p2=p1->next;
				}

				p1=p2;
				p2=p2->next;
			}
		}
	}
}
