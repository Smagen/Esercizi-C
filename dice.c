//Sorgente scritto da Marco Meli. Remember, Smagen is the way.
 
/*
In questo gioco si lancia una coppia di dadi una o più volte, finchè non si vince o non si perde.
Il gioco si può simulare al computer sostituendo al lancio effettivo la generazione di numeri random (casuali).
Ci sono due modi per vincere in questo gioco: si lancia una volta e si ottiene un 7 o un 11, oppure si ottiene 4, 5, 6, 8 o 10 al primo lancio e si ottiene lo stesso punteggio al lancio successivo, prima di ottenere 7 al terzo lancio.
Ci sono due modi per perdere, si lancia una volta e si ha 2, 3, o 12 oppure si ha 4, 5, 6, 8, 9, 10 al primo lancio, poi 7 al secondo prima di ripetere il punteggio iniziale.
Si sviluppi il gioco in modo interattiva, in modo da simulare un lancio di dadi ogni volta che si preme il tasto INVIO, in quel momento appare un messaggio che dice com'è andata.
Alla fine di ogni gioco ci viene chiesto se vogliamo ricominciare a giocare.
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int roll(void);
int checkwin (int a, int b, int c);
int checklose (int a, int b, int c);
 
int main ()
{
        int risa, risb, risc;
        char scelta;
 
        srand(time(NULL));
        do
        {
                //Lancio 1
                printf ("\nPremi INVIO per lanciare il dado");
                getchar();
                risa=roll();
               
                printf ("\nRisultato: %d\n", risa);
               
                if (risa==7 || risa==11)
                	printf ("\nHai vinto! Il punteggio del tuo primo lancio e' %d\n", risa);
		else if (risa==2 || risa==3 || risa==12)
                	printf ("\nHai Perso! Il punteggio del tuo primo lancio e' %d\n", risa);
                else {
                        //Lancio 2
                        printf ("\nPremi INVIO per lanciare il dado");
                        getchar();
                        risb=roll();
       
                        printf ("\nRisultato: %d\n", risb);
       
                        //Lancio 3
                        printf ("\nPremi INVIO per lanciare il dado");
                        getchar();
                        risc=roll();
       
                        printf ("\nRisultato: %d\n", risa);
       
                        if (risa==risb && risc==7) checkwin (risa, risb, risc);
                        if (risb==7 && risa==risc) checklose (risa, risb, risc);
               
                        printf ("\n************\nRisultati: %d, %d, %d\n************\nNon hai vinto o perso\n", risa, risb, risc);
                }
                printf ("\nVuoi giocare ancora? [s/n] ");
                scanf ("%c", &scelta);
                // svuota il buffer
                while( getchar()!='\n');
        } while (scelta == 's');
	printf ("\nAddio!\n");
        return 0;
}      
       
 
int roll (void)
{
        int dadoa, dadob;
        dadoa=(rand() % 6) +1;
        dadob=(rand() % 6) +1;
        return(dadoa+dadob);
}
 
int checkwin (int a, int b, int c)
{
        int i, check=0;
        int vinci[5]= {4,5,6,8,10};
        for (i=0; i<6; i++)
                if (a == vinci[i]) check=1;
        if (check==1)
        {
                printf("\nHai vinto! Il punteggio del tuo primo lancio e' %d, quello del secondo e' %d e quello del terzo e' %d\n", a, b, c);
                return 0;
        }
}
 
int checklose (int a, int b, int c)
{
        int i, check=0;
        int perdi[6]= {4,5,6,8,9,10};
        for (i=0; i<7; i++)
                if (a == perdi[i]) check=1;
        if (check==1)
        {
                printf("\nHai perso! Il punteggio del tuo primo lancio e' %d, quello del secondo e' %d e quello del terzo e' %d\n", a, b, c);
                return 0;
        }
}
