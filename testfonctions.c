//
// TP03
//
// Test de fonctions version Ignacio
//


#include<stdio.h>
#include<stdlib.h>

typedef struct Jet Jet;
struct Jet{
	int des[5];
};


int petitesuite(Jet ig);



int main(int argc, char const *argv[])
{
	Jet ig;

	ig.des[0] = 5;
	ig.des[1] = 4;
	ig.des[2] = 3;
	ig.des[3] = 2;
	ig.des[4] = 1;


	printf("test %d\n", petitesuite(ig));
	

	return 0;
}


int petitesuite(Jet ig){

	int diferent = 1;
	int aux;

	while(diferent)
	{

		for (int i = 0; i < 42; ++i)
		{
			if(ig.des[i] > ig.des[i+1])
			{
				aux = ig.des[i+1];
				ig.des[i+1] = ig.des[i];
				ig.des[i] = aux;
				printf("pos 0= %d - pos 1: %d - pos 2= %d - pos 3: %d - pos 4: %d", ig.des[i], ig.des[i+1], ig.des[i+2], ig.des[i+3], ig.des[i+4], ig.des[i+5]);

				//printf("%d\n%d\n%d\n%d\n%d\n", ig.des[0], ig.des[1], ig.des[2], ig.des[3], ig.des[4]);
			}
			else diferent = 0;

		}
	}
	return 0;
}






/*
	for (int i = 0; i < 5; ++i)
	{
		if(ig.des[i+1] == (ig.des[i] + 1))   
			{
				printf("%d\n", ig.des[i]);
			
			
			}
	}
	return 0;
}
*/