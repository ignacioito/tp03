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

	ig.des[0] = 2;
	ig.des[1] = 3;
	ig.des[2] = 4;
	ig.des[3] = 5;
	ig.des[4] = 6;


	printf("%d\n", grandsuite(ig));
	

	return 0;
}


int grandsuite(Jet ig){
	int face1, face2, face3, face4, face5, face6;
	face1 = 0;
	face2 = 0;
	face3 = 0;
	face4 = 0;
	face5 = 0;
	face6 = 0;

	ordonner(&ig.des[0], &ig.des[1], &ig.des[2], &ig.des[3], &ig.des[4]);

	for (int i = 0; i < 5; ++i)
	{
		if(ig.des[i] == 1){
			face1++;
		}
		if (ig.des[i] == 2)
		{
			face2++;
		}
		if (ig.des[i] == 3)
		{
			face3++;
		}
		if (ig.des[i] == 4)
		{
			face4++;
		}
		if (ig.des[i] == 5)
		{
			face5++;
		}
		if (ig.des[i] == 6)
		{
			face6++;
		}
	}
	

	printf("%d %d %d %d %d %d\n", face1, face2, face3, face4, face5, face6);
	
	return 0;
}

/*
ordonner(&ig.des[0], &ig.des[1], &ig.des[2], &ig.des[3], &ig.des[4]);
	//printf("%d %d %d %d %d \n", ig.des[0], ig.des[1], ig.des[2], ig.des[3], ig.des[4]);
	int c = 0;
	for (int i = 0; i < 5; ++i)
	{
		//If la position 1 (- 1) est equal la position 0 (positon 0 vault 1 / position 1 vault 2 (-1 = 1))
		if(ig.des[i] == ig.des[i+1] - 1)
		{
			c++;
			if (c == 5)
			{
				printf("grandsuite vault 40 points %d\n", c);
			}
			
		}
	}
	return c;
*/



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