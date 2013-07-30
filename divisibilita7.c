/*Numero divisibile per 7

Autore: Zarcone Domenico */

//includo le librerie
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
	int n,tmp,exp,cifra,sott;
    	/*
        TABELLA DI DATI INTERI
        n -> Numero inserito
        tmp -> Variabile temporanea
        exp -> Fornisce il numero di cifre di cui è composto n
        cifra -> Contatore
        sott -> Contiene il valore della sottrazione dell'ultima cifra e del numero
    	*/
	float div,decimale;
    	/*
        TABELLA DI DATI FLOAT
        div -> consente di dividere il numero per 10 per prendere l'ultima cifra
        decimale -> contiene la parte decimale * 2
	*/
	char test;
	do{
        	do
		{
		        printf("Inserisci numero: ");
		        scanf("%d", &n);
		        if(n<=0) printf("Il numero deve essere positivo!\n\n");
          	}while(n<=0); //continuo a chiedere un numero finché non viene inserito un intero positivo

	        tmp=n;
	        exp=cifra=0;

        	while(n>=pow(10,exp)) exp++;//conto di quante cifre è composto n

	        while((cifra!=exp) && (tmp!=7) && (tmp!=0))
		{
                        div=(float)tmp/10;		//Eseguo la divisione per per 10, ottenendo un numero decimale.
                        tmp=div;			//assegno a tmp la parte intera di div, infatti tmp è intero
                        decimale=(float)(div-tmp)*10*2;	//Ottengo la parte decimale * 2
                        decimale=ceil(decimale);	//ceil permette di arrotondare automaticamente la cifra
                        sott=(tmp - decimale);		//eseguo la sottrazione
                        if(sott<0)
				sott=sott*(-1);		//se la sottrazione è negativa faccio il valore assoluto
                        tmp=sott;			//a tmp associo sott
                        cifra++;			//incremento cifra
		}
		if((tmp!=0) && (tmp!=7))
			printf("Il numero non e' divisibile per 7.\n\n");
			//se tmp è diverso è un numero diverso da 0 e da 7 dico che non è positivo
          /*
                Durante l'esecuzione del ciclo while infatti tmp assume i valori prodotti dall'algoritmo. Un numero è divisibile per 7 se alla fine 
		il numero ottenuto è un numero pari a 0, 7 o un multiplo di 7. L'algoritmo funziona anche con i multipli di 7 di due cifre 
		quindi non è necessario controllarli, basterà controllare solo se l'ultimo numero è pari a 0 o a 7.
          */
	        else //altrimenti il numero è divisibile per 7 e mostro quanto fa il risultato.
        	{
	            printf("Il numero e' divisibile per 7.\n");
	            printf("Il risultato della divisione e': %d\n\n", n/7);
	        }

	        printf("Vuoi ricominciare? ");//Chiedo se l'utente vuole ricominciare.
	        scanf("%s", &test);
	        tolower(test);//Trasformo in minuscolo la variabile test, ovvero: se test='S' -> test='s'...
	}while(test=='s');//condizione affinchè si ricominci a provare un altro numero
}
