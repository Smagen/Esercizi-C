/*Sorgente scritto da Marco Meli. Remember, Smagen is the way.*/

#include <stdio.h>

//INIZIO DICHIARAZIONE DI FUNZIONI
int somma (int a, int b);
int differenza (int a, int b);
int prodotto (int a, int b);
int divisione (int a, int b);
int menu (void);
//FINE DICHIARAZIONE DI FUNZIONI

int main ()
{
	int scelta=0; 
	while (scelta == 0)
		scelta = menu();
	return 0; //ESCE DAL PROGRAMMA
}

//INIZIO DESCRIZIONE FUNZIONI

int menu (void)
{
	int choose, a, b, ris; //DICHIARAZIONE VARIABILI

	//INSERIMENTO DATI

	printf ("\nInserisci primo numero: ");
	scanf ("%d", &a);
	printf ("\nInserisci secondo numero: ");
	scanf ("%d", &b);

	//SCELTA DELL'OPERAZIONE
	printf ("\n\nCosa vuoi fare ora?\n1. Somma\n2. Differenza\n3. Prodotto\n4. Divisione\n9. Ricomincia\n0. Esci\nScelta: ");
	scanf ("%d", &choose);
	switch (choose)
	{
		//CHIAMATE A FUNZIONE
		case 1: ris = somma (a,b); break; 
		case 2: ris = differenza(a,b); break;
		case 3: ris = prodotto (a,b); break;
		case 4: ris = divisione (a,b); break;
		case 9: return 0; break;
		//SE NESSUNO DEI PRECEDENTI, ESCI
		default: printf ("\nAddio!\n"); return 1; break;
	}
	printf ("\nIl risultato e': %d\n", ris); //STAMPA RISULTATO

	printf ("\nVuoi effettuare un'altra operazione?\n0. Si\n1. No\nScelta: ");
	scanf ("%d", &choose);
	if (choose==1)
	{
		printf ("\nAddio!\n");
		return 1;
	}
	else return 0;
}	
	
// RITORNO DIRETTAMENTE L'OPERAZIONE PER NON ALLOCARE UN'ALTRA VARIABILE INUTILE

int somma (int a, int b)
{
	return (a+b);
}

int differenza (int a, int b)
{
	return (a-b);
}

int prodotto (int a, int b)
{
	return (a*b);
}

int divisione (int a, int b)
{
	return (a/b);
}

//THE GAME
//FINE
