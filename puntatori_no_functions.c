#include <stdio.h>
#include <stdlib.h>

int main ()
{
	typedef struct entry
	{
		int value;
		struct entry *next;
	} str;

	str *list_pointer, *list_head, *list_record;
	int valore, nuovo;
	char risposta = 's';

	printf("Inserisci il primo valore: ");
	scanf("%d", &valore);

	list_record = (str *)malloc (sizeof(str));

	if (list_record->next != NULL)
	{
		fprintf(stderr, "\nErrore di allocazione!\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		list_record->value=valore;
		list_record->next=NULL;
		list_head=list_record;
		list_pointer=list_head;
	}

	while (risposta == 's')
	{
		printf ("\nInserisci nuovo valore: ");
		scanf ("%d", &nuovo);

		while (list_pointer->next!=NULL) list_pointer=list_pointer->next;

		list_record=(str *)malloc(sizeof(str));
		if (list_record->next!=NULL)
		{
			fprintf(stderr, "\nErrore di allocazione!\n");
			exit(EXIT_FAILURE);
		}
		else
		{
			list_record->value=valore;
			list_record->next=NULL;
			list_pointer->next=list_record;
		}
		printf ("Vuoi inserire un nuovo elemento alla fine della lista?\nRisposta: ");
		scanf ("%s", &risposta);
	}
	printf ("\nFine!\n");
}
