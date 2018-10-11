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


int yahtzee(Jet ig);



int main(int argc, char const *argv[])
{
	Jet ig;

	ig.des[0] = 1;
	ig.des[1] = 2;
	ig.des[2] = 3;
	ig.des[3] = 4;
	ig.des[4] = 6;


	printf("test %d\n", yahtzee(ig));
	

	return 0;
}


int yahtzee(Jet ig){

 	
	int yahtzee = 50;

	
	//for (int i = 0; i < 5; ++i)
	//{
		if((ig.des[0] == ig.des[1]) && (ig.des[1] == ig.des[2]) 
			&& (ig.des[2]== ig.des[3]) && (ig.des[3]== ig.des[4])) 
		{
			//printf("Teste %d\n", yahtzee);
			return 50;
		}
	//}
	return 0;
}