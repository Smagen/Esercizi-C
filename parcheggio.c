//Sorgente di Marco Meli. Remember, Smagen is the way.

#include <stdio.h>

float calculateCharges (float ore);

int main ()
{
	int i;
	float ore[3], costo, totalHours=0, totalCharge=0;
	for (i=0; i<3; i++)
	{
		do
		{
			do
			{
				printf ("Quante ore e' stata parcheggiata la macchina %d?\nOre: ", i+1);
				scanf ("%f", &ore[i]);
				if (ore[i]>24) printf ("\nNon puoi parcheggiare per piu' di 24 ore!\n\n");
			} while (ore[i]>24);
			if (ore[i]<=0) printf ("\nSe vuoi pagare senza parcheggiare un'auto fai pure :D\n\n");
		}while (ore[i]<=0);
	}
	printf ("Car\tHours\tCharge\n");
	
	for (i=0; i<3; i++)
	{	
		costo = calculateCharges(ore[i]);
		printf ("%d\t%.2f\t%.2f\n", i+1, ore[i], costo);
		totalHours+=ore[i];
		totalCharge+=costo;
	}	
	printf ("TOTAL\t%.2f\t%.2f\n", totalHours, totalCharge);
}

float calculateCharges (float ore)
{
	float costo;
	int i;

	if (ore<=3) return costo=2;
		
	else 
	{
		costo = 2;
		for (i=3; i <= ore; i++)
			costo += 0.5;
	}
	return costo;
}
