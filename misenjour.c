#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 

typedef struct Score score;
struct score
{
  int un;
  int deux;
  int trois;
  int quatre;
  int cinq;
  int six;
  int brelan;
  int carre;
  int mainPleine;
  int petiteSuite;
  int grandeSuite;
  int chance;
  int yahtzee;

};

Jet jogada (Jet jet);
<<<<<<< HEAD
int nbDeFace1(Jet jet);
int nbDeFace2(Jet jet);
int nbDeFace3(Jet jet);
int nbDeFace4(Jet jet);
int nbDeFace5(Jet jet);
int nbDeFace6(Jet jet);
=======
int nbDeFace(Jet jet);
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
int brelan(Jet jet);
int carre(Jet jet);
int mainPleine(Jet jet);
int petiteSuite(Jet jet);
int grandeSuite(Jet jet);
int yahtzee(Jet jet);
int chance(Jet jet);
void dessineDes(Jet jet);



int main()
{
<<<<<<< HEAD
  char option;
=======
  
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
  Jet jet;
  int i;


//for(i = 0; i < 2; i++)
//{

//printf("\033c" );

  Jet jogadaFeita = jogada (jet);
  


 printf ("\n\n");
 printf ("**********************\n");
 printf ("*                QUEL POINTAGE VOULEZ-VOUS GARDER?               *\n");
 printf ("**********************\n");
<<<<<<< HEAD
 nbDeFace1(jogadaFeita);
 nbDeFace2(jogadaFeita);
 nbDeFace3(jogadaFeita);
 nbDeFace4(jogadaFeita);
 nbDeFace5(jogadaFeita);
 nbDeFace6(jogadaFeita);
=======
 nbDeFace (jogadaFeita);
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
 printf ("*  (G) - Pour le main plaine on a la valeur: %d\n", mainPleine (jogadaFeita));
 printf ("*  (H) - Pour le brelan on a la valeur: %d\n", brelan (jogadaFeita));
 printf ("*  (I) - Pour le carre on a la valeur: %d\n", carre (jogadaFeita));
 printf ("*  (J) - Pour le petite suite on a la valeur: %d\n", petiteSuite (jogadaFeita));
 printf ("*  (K) - Pour le grande suite on a la valeur: %d\n", grandeSuite (jogadaFeita)); 
 printf ("*  (L) - Pour le chance on a la valeur: %d\n", chance (jogadaFeita));
 printf ("*  (M) - Pour le yahtzee on a la valeur: %d\n", yahtzee (jogadaFeita));
 printf ("\n");
 printf ("**********************\n\n");
 
<<<<<<< HEAD
printf ("Choisissez votre jeu:");
scanf ("%c", &option);

switch(option)
  {
      case 'A': 
      Score.un = nbDeFace1(jogadaFeita);
      break;
    
      case 'B': 
      Score.deux = nbDeFace2(jogadaFeita);
      break;

      case 'C': 
      Score.trois = nbDeFace3(jogadaFeita);
      break;

      case 'D': 
      Score.quatre = nbDeFace4(jogadaFeita);
      break;

      case 'E': 
      Score.cinq = nbDeFace5(jogadaFeita);
      break;

      case 'F': 
      Score.six = nbDeFace6(jogadaFeita);
      break;

      case 'G': 
      Score.un = mainPleine(jogadaFeita);
      break;
    
      case 'H': 
      Score.deux = brelan(jogadaFeita);
      break;

      case 'I': 
      Score.trois = carre(jogadaFeita);
      break;

      case 'J': 
      Score.quatre = petiteSuite(jogadaFeita);
      break;

      case 'K': 
      Score.cinq = grandeSuite(jogadaFeita);
      break;

      case 'L': 
      Score.six = chance(jogadaFeita);
      break;

      case 'M': 
      Score.six = yahtzee(jogadaFeita);
      break;

  }




=======


//}


>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
}

 //****
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
<<<<<<< HEAD
     
=======
     //printf("%d  ", jet.des[i]);
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
  }
  printf("\n");

  dessineDes(jet);

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
dessineDes(jet);
        
  }
  return jet;
 }
 //****
 //
 //***
 int yahtzee(Jet jet)
 {
    if((jet.des[0] == jet.des[1]) && (jet.des[1] == jet.des[2]) && (jet.des[2]== jet.des[3]) && (jet.des[3]== jet.des[4])) 
    {
      return 50;
    }
  
  return 0;
}
<<<<<<< HEAD
 //****
 //
 //***
=======
//*******
//
//
//
//******
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
int chance(Jet teste)
 {
    int somme = 0;

    for (int i = 0; i < 5; ++i)
     
      somme = somme + teste.des[i]; 
      
      return somme;

 }
<<<<<<< HEAD
 //****
 //
 //***
=======
//*******
//
//
//
//*******
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
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
<<<<<<< HEAD
 //****
 //
 //***
=======
//*******
//
//
//
//*******
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
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
<<<<<<< HEAD
 //****
 //
 //*** 
int mainPleine(Jet jet)
{
  
=======
//*******
//
//
//
//*******  
int mainPleine(Jet jet)
{
  
  int total = 0;
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  
      
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
            
            if (((somme1 == 3) && (somme2 == 2)) ||
                ((somme1 == 3) && (somme3 == 2)) ||
                ((somme1 == 3) && (somme4 == 2)) ||
                ((somme1 == 3) && (somme5 == 2)) ||
                ((somme1 == 3) && (somme6 == 2)) ||
                ((somme2 == 3) && (somme1 == 2)) ||
                ((somme2 == 3) && (somme3 == 2)) ||
                ((somme2 == 3) && (somme4 == 2)) ||
                ((somme2 == 3) && (somme5 == 2)) ||
                ((somme2 == 3) && (somme6 == 2)) ||
                ((somme3 == 3) && (somme1 == 2)) ||
                ((somme3 == 3) && (somme2 == 2)) ||
                ((somme3 == 3) && (somme4 == 2)) ||
                ((somme3 == 3) && (somme5 == 2)) ||
                ((somme3 == 3) && (somme6 == 2)) ||
                ((somme4 == 3) && (somme1 == 2)) ||
                ((somme4 == 3) && (somme2 == 2)) ||
                ((somme4 == 3) && (somme3 == 2)) ||
                ((somme4 == 3) && (somme5 == 2)) ||
                ((somme4 == 3) && (somme6 == 2)) ||
                ((somme5 == 3) && (somme1 == 2)) ||
                ((somme5 == 3) && (somme2 == 2)) ||
                ((somme5 == 3) && (somme3 == 2)) ||
                ((somme5 == 3) && (somme4 == 2)) ||
                ((somme5 == 3) && (somme6 == 2)) ||
                ((somme6 == 3) && (somme1 == 2)) ||
                ((somme6 == 3) && (somme2 == 2)) ||
                ((somme6 == 3) && (somme3 == 2)) ||
                ((somme6 == 3) && (somme4 == 2)) ||
                ((somme6 == 3) && (somme5 == 2)))
                
                
            {
              return 25; 
            }
      
  return 0 ;
  
}
<<<<<<< HEAD
 //****
=======
//****
 //
 //
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
 //
 //***
 int petiteSuite(Jet jet)
{
  
<<<<<<< HEAD
=======
  int total = 0;
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  
      
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
            
            if (((somme1 >= 1) && (somme2 >= 1) && (somme3 >= 1) &&
                (somme4 >= 1)) ||
                ((somme2 >= 1) && (somme3 >= 1) && (somme4 >= 1) &&
                (somme5 >= 1)) ||
                ((somme3 >= 1) && (somme4 >= 1) && (somme5 >= 1) &&
                (somme6 >= 1)))
                
            {
              return 30; 
            }
      
  return 0 ;
  
}
<<<<<<< HEAD
 //****
=======
//****
 //
 //
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
 //
 //***
 int grandeSuite(Jet jet)
{
<<<<<<< HEAD

=======
  
  int total = 0;
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  
      
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
            
            if (((somme1 == 1) && (somme2 == 1) && (somme3 == 1) &&
                (somme4 == 1) && (somme5 == 1)) ||
                ((somme2 == 1) && (somme3 == 1) && (somme4 == 1) &&
                (somme5 == 1) && (somme6 == 1)))
                
            {
              return 40; 
            }
      
  return 0 ;
  
}
<<<<<<< HEAD
 //****
 //
 //****
//Les fonctions suivantes font le calcul de nombre des faces. 
//De nbDeFace1 jusqu'à nbDeFcace6

int nbDeFace1 (Jet jet)
{
  int somme1 = 0;
  int somme1a = 0;
  
=======
//****
 //
 //
 //
 //***
int nbDeFace (Jet jet)
{
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
  int somme1a = 0;
  int somme2a = 0;
  int somme3a = 0;
  int somme4a = 0;
  int somme5a = 0;
  int somme6a = 0;
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
  
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 1)
              {
                somme1 ++;
              }
<<<<<<< HEAD
              
        }
 
  if (somme1 != 0)
    somme1 *= 1;
    somme1a = somme1;

      
  return printf("*  (A) - Les valeurs de données avec la face 1 seront: %d\n", somme1a); 
  
}
 //****
 //
 //***
int nbDeFace2 (Jet jet)
{
  int somme2 = 0;
  int somme2a = 0;
  
      for (int i = 0; i < 5; ++i)
        { 
=======
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
              if (jet.des[i] == 2)
              {
                somme2 ++;
              }
<<<<<<< HEAD
              
        }
 
  if (somme2 != 0)
    somme2 *= 2;
    somme2a = somme2;

  return printf("*  (B) - Les valeurs de données avec la face 2 seront: %d\n", somme2a);
  
}
 //****
 //
 //***
int nbDeFace3 (Jet jet)
{
  int somme3 = 0;
  int somme3a = 0;
    
      for (int i = 0; i < 5; ++i)
        { 
=======
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
              if (jet.des[i] == 3)
              {
                somme3 ++;
              }
<<<<<<< HEAD
              
        }
 
  if (somme3 != 0)
    somme3 *= 3;
    somme3a = somme3;
  
  return printf("*  (C) - Les valeurs de données avec la face 3 seront: %d\n", somme3a);
  
}
 //****
 //
 //***
int nbDeFace4 (Jet jet)
{
  int somme4 = 0;
  int somme4a = 0;
    
      for (int i = 0; i < 5; ++i)
        { 
=======
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
              if (jet.des[i] == 4)
              {
                somme4 ++;
              }
<<<<<<< HEAD
              
        }
 
  if (somme4 != 0)
    somme4 *= 4;
    somme4a = somme4;
     
  return printf("*  (D) - Les valeurs de données avec la face 4 seront: %d\n", somme4a);
  
}
 //****
 //
 //***
int nbDeFace5 (Jet jet)
{
  int somme5 = 0;
  int somme5a = 0;
   
      for (int i = 0; i < 5; ++i)
        { 
=======
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
              if (jet.des[i] == 5)
              {
                somme5 ++;
              }
<<<<<<< HEAD
              
        }
 
  if (somme5 != 0)
    somme5 *= 5;
    somme5a = somme5;
    
  return printf("*  (E) - Les valeurs de données avec la face 5 seront: %d\n", somme5a);
  
}
 //****
 //
 //***
int nbDeFace6 (Jet jet)
{
  int somme6 = 0;
  int somme6a = 0;
      
      for (int i = 0; i < 5; ++i)
        { 
=======
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
              if (jet.des[i] == 6)
              {
                somme6 ++;
              }
<<<<<<< HEAD
              
        }
 
  if (somme6 != 0)
    somme6 *= 6;
    somme6a = somme6;
   
  return printf("*  (F) - Les valeurs de données avec la face 6 seront: %d\n", somme6a);
  
}
 //****
=======
        }
 
  if (somme1 != 0)
    somme1 *= 1;
    somme1a = somme1;

  if (somme2 != 0)
    somme2 *= 2;
    somme2a = somme2;

  if (somme3 != 0)
    somme3 *= 3;
    somme3a = somme3;

  if (somme4 != 0)
    somme4 *= 4;
    somme4a = somme4;

  if (somme5 != 0)
    somme5 *= 5;
    somme5a = somme5;

  if (somme6 != 0)
    somme6 *= 6;
    somme6a = somme6;


  
  printf ("*  (A) - Les valeurs de données avec la face 1 seront: %d\n", somme1a);
  printf ("*  (B) - Les valeurs de données avec la face 2 seront: %d\n", somme2a);
  printf ("*  (C) - Les valeurs de données avec la face 3 seront: %d\n", somme3a);
  printf ("*  (D) - Les valeurs de données avec la face 4 seront: %d\n", somme4a);
  printf ("*  (E) - Les valeurs de données avec la face 5 seront: %d\n", somme5a);
  printf ("*  (F) - Les valeurs de données avec la face 6 seront: %d\n", somme6a);

      
  return 0;
  
}
//****
 //
 //
>>>>>>> cb063a063cb611ddd0a7b07289132b94cc9c6aa8
 //
 //***
void dessineDes(Jet jet)
{
  
  int rangee;
  int colonne;
  int JetGauche = 0;
  int JetDroite = 6;  
  char montrerDes[5][47];
  
  
  for(rangee = 0; rangee < 5; rangee++)
  {
    for(colonne = 0; colonne < 47; colonne++)
    {
      montrerDes[rangee][colonne] = ' ';      
      if(((rangee == 0) || (rangee == 4)) && (colonne != 7) && (colonne != 8)
      && (colonne != 9) && (colonne != 17) && (colonne != 18) && (colonne != 19) && (colonne != 27) && (colonne != 28)
      && (colonne != 29) && (colonne != 37) && (colonne != 38) && (colonne != 39))
      {
        montrerDes[rangee][colonne] = '-';        
      }                 
      if(colonne == JetGauche)
      {
        montrerDes[rangee][colonne] = '|';
        montrerDes[0][JetGauche] = '+'; 
        montrerDes[4][JetGauche] = '+';   
        JetGauche += 10;              
      }
      else if(colonne == JetDroite)
      {
        montrerDes[rangee][colonne] = '|';
        montrerDes[0][JetDroite] = '+';
        montrerDes[4][JetDroite] = '+';
        JetDroite += 10;        
      }             
    }
    JetGauche = 0;
    JetDroite = 6;  
  } 
  switch(jet.des[0])
  {
    case 1:     
      montrerDes[2][3] = 'o';       
    break;
    case 2:
      montrerDes[1][5] = 'o';
      montrerDes[3][1] = 'o';
    break;
    case 3:
      montrerDes[1][5] = 'o';
      montrerDes[2][3] = 'o';
      montrerDes[3][1] = 'o';       
    break;
    case 4:
      montrerDes[1][1] = 'o';
      montrerDes[1][5] = 'o';
      montrerDes[3][1] = 'o';
      montrerDes[3][5] = 'o';
    break;
    case 5:
      montrerDes[1][1] = 'o';
      montrerDes[1][5] = 'o';
      montrerDes[2][3] = 'o'; 
      montrerDes[3][1] = 'o';
      montrerDes[3][5] = 'o';
    break;
    case 6:
      montrerDes[1][1] = 'o';
      montrerDes[1][5] = 'o';
      montrerDes[1][3] = 'o';
      montrerDes[3][3] = 'o';
      montrerDes[3][1] = 'o';
      montrerDes[3][5] = 'o';
    break;
  }
  switch(jet.des[1])
  {
    case 1:     
      montrerDes[2][13] = 'o';        
    break;
    case 2:
      montrerDes[1][15] = 'o';
      montrerDes[3][11] = 'o';
    break;
    case 3:
      montrerDes[1][15] = 'o';
      montrerDes[2][13] = 'o';
      montrerDes[3][11] = 'o';        
    break;
    case 4:
      montrerDes[1][11] = 'o';
      montrerDes[1][15] = 'o';
      montrerDes[3][11] = 'o';
      montrerDes[3][15] = 'o';
    break;
    case 5:
      montrerDes[1][11] = 'o';
      montrerDes[1][15] = 'o';
      montrerDes[2][13] = 'o';  
      montrerDes[3][11] = 'o';
      montrerDes[3][15] = 'o';
    break;
    case 6:
      montrerDes[1][11] = 'o';
      montrerDes[1][15] = 'o';
      montrerDes[1][13] = 'o';
      montrerDes[3][13] = 'o';
      montrerDes[3][11] = 'o';
      montrerDes[3][15] = 'o';
    break;
  }
  switch(jet.des[2])
  {
    case 1:     
      montrerDes[2][23] = 'o';        
    break;
    case 2:
      montrerDes[1][25] = 'o';
      montrerDes[3][21] = 'o';
    break;
    case 3:
      montrerDes[1][25] = 'o';
      montrerDes[2][23] = 'o';
      montrerDes[3][21] = 'o';        
    break;
    case 4:
      montrerDes[1][21] = 'o';
      montrerDes[1][25] = 'o';
      montrerDes[3][21] = 'o';
      montrerDes[3][25] = 'o';
    break;
    case 5:
      montrerDes[1][21] = 'o';
      montrerDes[1][25] = 'o';
      montrerDes[2][23] = 'o';  
      montrerDes[3][21] = 'o';
      montrerDes[3][25] = 'o';
    break;
    case 6:
      montrerDes[1][21] = 'o';
      montrerDes[1][25] = 'o';
      montrerDes[1][23] = 'o';
      montrerDes[3][23] = 'o';
      montrerDes[3][21] = 'o';
      montrerDes[3][25] = 'o';
    break;
  }
  switch(jet.des[3])
  {
    case 1:     
      montrerDes[2][33] = 'o';        
    break;
    case 2:
      montrerDes[1][35] = 'o';
      montrerDes[3][31] = 'o';
    break;
    case 3:
      montrerDes[1][35] = 'o';
      montrerDes[2][33] = 'o';
      montrerDes[3][31] = 'o';        
    break;
    case 4:
      montrerDes[1][31] = 'o';
      montrerDes[1][35] = 'o';
      montrerDes[3][31] = 'o';
      montrerDes[3][35] = 'o';
    break;
    case 5:
      montrerDes[1][31] = 'o';
      montrerDes[1][35] = 'o';
      montrerDes[2][33] = 'o';  
      montrerDes[3][31] = 'o';
      montrerDes[3][35] = 'o';
    break;
    case 6:
      montrerDes[1][31] = 'o';
      montrerDes[1][35] = 'o';
      montrerDes[1][33] = 'o';
      montrerDes[3][33] = 'o';
      montrerDes[3][31] = 'o';
      montrerDes[3][35] = 'o';
    break;
  }
  switch(jet.des[4])
  {
    case 1:     
      montrerDes[2][43] = 'o';        
    break;
    case 2:
      montrerDes[1][45] = 'o';
      montrerDes[3][41] = 'o';
    break;
    case 3:
      montrerDes[1][45] = 'o';
      montrerDes[2][43] = 'o';
      montrerDes[3][41] = 'o';        
    break;
    case 4:
      montrerDes[1][41] = 'o';
      montrerDes[1][45] = 'o';
      montrerDes[3][41] = 'o';
      montrerDes[3][45] = 'o';
    break;
    case 5:
      montrerDes[1][41] = 'o';
      montrerDes[1][45] = 'o';
      montrerDes[2][43] = 'o';  
      montrerDes[3][41] = 'o';
      montrerDes[3][45] = 'o';
    break;
    case 6:
      montrerDes[1][41] = 'o';
      montrerDes[1][45] = 'o';
      montrerDes[1][43] = 'o';
      montrerDes[3][43] = 'o';
      montrerDes[3][41] = 'o';
      montrerDes[3][45] = 'o';
    break;
  }   
  for(rangee = 0; rangee < 5; rangee++)
  {
    for(colonne = 0; colonne < 47; colonne++)
    {
      printf("%c",montrerDes[rangee][colonne]);
    }
    printf("\n");
  }
}