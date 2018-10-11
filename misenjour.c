#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 
 }; 

Jet jogada (Jet jet);
int nbDeFace(Jet jet, int face);
int brelan(Jet jet);
int carre(Jet jet);
int mainPleine(Jet jet);
int petiteSuite(Jet jet);
int grandeSuite(Jet jet);
int yahtzee(Jet jet);
int chance(Jet jet);



int main()
{
  Jet jet;
  Jet jogadaFeita = jogada (jet);
  
 printf ("a soma sera %d\n\n", chance (jogadaFeita));
 printf ("no yahtzee %d\n\n", yahtzee (jogadaFeita));



}

//*******
//
//
//
//******
int chance(Jet teste)
 {
    int somme = 0;

    for (int i = 0; i < 5; ++i)
     
      somme = somme + teste.des[i]; 
      
      return somme;


 }
 //****
 //
 //
 //
 //***
 Jet jogada (Jet jet)
 {
  const int MIN = 1;
  const int MAX = 6;
  
  srand(time(NULL));

  int des[5];
  char quant [5];
  int n = 0;

  printf("Voici trois nombres pigés au hasard entre %d et %d : \n\n", MIN, MAX);

  for (int i = 0; i < 5; ++i)
  {
     n = rand() % MAX + MIN;
     jet.des[i] = n;
     printf("%d  ", jet.des[i]);
  }
  printf("\n");

  for (int c = 0; c < 2; ++c)
  {
    
    printf("\nTapez le 0 pour non et 1 pour oui dedans chaque des 12345\n\n");
    
        for (int i = 0; i < 5; ++i)
        {
        scanf (" %c", &quant[i]);
        }
        printf("\n");

        for (int i = 0; i < 5; ++i)
        {
         if (quant[i] == '1')
         {
          n = rand() % MAX + MIN;
          jet.des[i] = n;
         }
        }

        for (int i = 0; i < 5; ++i)
        {
          printf("%d  ", jet.des[i]);
        }
        printf("\n");
  }
  return jet;
 }
 //****
 //
 //
 //
 //****
 int yahtzee(Jet jet)
 {
    if((jet.des[0] == jet.des[1]) && (jet.des[1] == jet.des[2]) && (jet.des[2]== jet.des[3]) && (jet.des[3]== jet.des[4])) 
    {
      return 50;
    }
  
  return 0;
}