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


int grandsuite(Jet ig);

void inverser (int* a, int* b){
	int temp = *b;
	*b = *a;
	*a = temp;

}


void ordonner(int* a, int* b, int* c, int* d, int* e)
{

	if(*a > *b)
	{
		inverser(a, b);
	}
	if (*a > *c)
	{
		inverser(a, c);
	}
	if (*a > *d)
	{
		inverser(a, d);
	}
	if (*a > *e)
	{
		inverser(a, e);
	}
	if(*b > *c)
	{
		inverser(b, c);
	}
	if(*b > *d)
	{
		inverser(b, d);
	}
	if (*b > *e)
	{
		inverser(b, e);
	}
	if (*c > *d)
	{
		inverser(c, d);
	}
	if (*c > *e)
	{
		inverser(c, e);
	}
	if (*d > *e)
	{
		inverser(d, e);
	}
}


int main(int argc, char const *argv[])
{
	Jet ig;

	ig.des[0] = 4;
	ig.des[1] = 4;
	ig.des[2] = 3;
	ig.des[3] = 1;
	ig.des[4] = 2;


	printf("test %d\n", grandsuite(ig));
	

	return 0;
}


int grandsuite(Jet ig){
	ordonner(&ig.des[0], &ig.des[1], &ig.des[2], &ig.des[3], &ig.des[4]);
	//printf("%d %d %d %d %d \n", ig.des[0], ig.des[1], ig.des[2], ig.des[3], ig.des[4]);
	int c = 0;
	int des2[3];
	for (int i = 0; i < 5; ++i)
	{
		if(ig.des[i] == ig.des[i+1] + 1)
		{
			c = ig.des[i];
			for (int j = 0; j < 4; ++j)
			{
				des2[j] = c;
			}
		}
		++i;
	}
	printf("%d %d %d %d\n", des2[0], des2[1], des2[2], des2[3]);
}





/*
//conditionnel pour vérifier si le sequence est de 1 à 5 ou de 2 à 6 en utilisant le "if"

if ((&ig.des[0] == 1) && (&ig.des[1] == 2) && (&ig.des[2] == 3) && (&ig.des[3] == 4) && (&ig.des[4] == 5)
	{
		printf("50 points d'un grandsuite\n");		
	}
	if ((&ig.des[0] == 2) && (&ig.des[1] == 3) && (&ig.des[2] == 4) && (&ig.des[3] == 5) && (&ig.des[4] == 6)
	{
		printf("50 points d'un grandsuite\n");		
	}
	else{
	printf("grandsuite 0 points\n");
	}
*/


/*
	while(diferent)
	{

		for (int i = 0; i < 4; ++i)
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

*/




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