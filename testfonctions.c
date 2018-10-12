//
// TP03
//
// Test de fonctions
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

	int diferente = 1;
	int aux;

	while(diferente)
	{

		for (int i = 0; i < 5; ++i)
		{
			if(ig.des[i] > ig.des[i+1])
			{
				aux = ig.des[i+1];
				ig.des[i+1] = ig.des[i];
				ig.des[i] = aux;
				printf("**");
			}
			else diferente = 0;

		}
	}








	for (int i = 0; i < 5; ++i)
	{
		if(ig.des[i+1] == (ig.des[i] + 1))   
			{
				printf("%d\n", ig.des[i]);
			
			
			}
	}
	return 0;
}