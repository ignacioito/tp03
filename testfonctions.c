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

	ig.des[0] = 5;
	ig.des[1] = 4;
	ig.des[2] = 3;
	ig.des[3] = 2;
	ig.des[4] = 3;


	printf("test %d\n", petitesuite(ig));
	

	return 0;
}


int petitesuite(Jet ig){
	ordonner(&ig.des[0], &ig.des[1], &ig.des[2], &ig.des[3], &ig.des[4]);
	printf("%d %d %d %d %d \n", ig.des[0], ig.des[1], ig.des[2], ig.des[3], ig.des[4]);
	int c = 0;
	for (int i = 0; i < 3; ++i)
	{
		if((ig.des[i] = ig.des[i-1]+1) ){
			c++;
		}
		if (c == 4)
		{
			printf("now you got 50 points\n");
		}
	}
	
	return 0;
}









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