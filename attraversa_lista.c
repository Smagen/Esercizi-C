#include <stdio.h>

int main()
{
	typedef	struct asd
	{
		int value;
		struct asd *next;
	} str;

	int valore, posizione = 1, trovati=0;
	
	str n1, n2, n3;
	str *list_pointer = &n1;
	
	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = NULL;

	printf ("Inserisci valore da ricercare: ");
	scanf ("%d", &valore);
	
	while (list_pointer != NULL)
	{
		if (list_pointer->value == valore)
		{
			printf ("\nL'elemento %d si trova alla posizione %d.\n", valore, posizione);
			trovati++;
		}
		list_pointer = list_pointer->next;
		posizione++;
	}
	
	if (trovati == 0)
		printf ("\nElemento non trovato.\n");
	return 0;
}
