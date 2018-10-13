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
  
 printf ("\nNo chance %d\n", chance (jogadaFeita));
 printf ("No yahtzee %d\n", yahtzee (jogadaFeita));
 printf ("No carre %d\n", carre (jogadaFeita));
 printf ("No brelan %d\n\n", brelan (jogadaFeita)); 



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
//*******
//
//
//
//*******
int carre(Jet jet)
{
  
  int total = 0;
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  

  for (int i = 0; i < 5; ++i)
    {
      total = total + jet.des[i]; 
    }
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 1)
              {
                somme1 ++;
              }
              if (jet.des[i] == 2)
              {
                somme2 ++;
              }
              if (jet.des[i] == 3)
              {
                somme3 ++;
              }
              if (jet.des[i] == 4)
              {
                somme4 ++;
              }
              if (jet.des[i] == 5)
              {
                somme5 ++;
              }
              if (jet.des[i] == 6)
              {
                somme6 ++;
              }
        }
            
            if ((somme1 >= 4) || (somme2 >= 4) || (somme3 >= 4) || (somme4 >= 4) || (somme5 >= 4) || (somme6 >= 4))
            {
              return total; 
            }
      
  return 0 ;
  
}  
//*******
//
//
//
//*******
int brelan(Jet jet)
{
  
  int total = 0;
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  

  for (int i = 0; i < 5; ++i)
    {
      total = total + jet.des[i]; 
    }
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 1)
              {
                somme1 ++;
              }
              if (jet.des[i] == 2)
              {
                somme2 ++;
              }
              if (jet.des[i] == 3)
              {
                somme3 ++;
              }
              if (jet.des[i] == 4)
              {
                somme4 ++;
              }
              if (jet.des[i] == 5)
              {
                somme5 ++;
              }
              if (jet.des[i] == 6)
              {
                somme6 ++;
              }
        }
            
            if ((somme1 >= 3) || (somme2 >= 3) || (somme3 >= 3) || (somme4 >= 3) || (somme5 >= 3) || (somme6 >= 3))
            {
              return total; 
            }
      
  return 0 ;
  
}