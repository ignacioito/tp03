//y
// Montreal QC 24 octobre de 2018
//
// Auteurs
// Ignacio Ito
// João Gustavo
// Luis Gustavo
// Travail Pratique 03 Introduction À La Programmation
/*
Le but de ce TP est de développer une solution programmatique 
pour un problème de complexité intermédiaire (le jeue Yahtzee). Il couvre les tableaux, 
les structures, les pointeurs et les arguments d’exécution. 
Il emmène aussi l’étudiante à développer ses aptitudes de testeur 
afin de valider sa stratégie. 
*/ 
// Professeure Rébecca Lapointe
//
// *****************************************************************************
//
// Nom : yahtzee.h
//
// Auteurs :  Luiz Gustavo
//            João Gustavo
//            Ignacio Ito
//
// Date : 24 octobre 2018
//
//
// *****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE_JET 5

typedef struct Jet Jet;
struct Jet{
  int des[TAILLE_JET];  
};
typedef struct Score Score;
struct Score{
  int une;
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
  int yahtzee;
  int chance;
  int scores[13]; 
};

void testJouer(Jet jet);
void match(Jet jet, Score score, int contreTour, int tour);
int piger();
void dessineDes(Jet jet);
Jet ordonne(Jet jet);
int nbDeFace(Jet jet, int face);
int brelan(Jet jet);
int carre(Jet jet);
int mainPleine(Jet jet);
int petiteSuite(Jet jet);
int grandeSuite(Jet jet);
int yahtzee(Jet jet);
int chance(Jet jet);
int pointFace(Jet jet, int valeur);
void dessineFeuillePointage(Score score, int contreTour, int tour);
void dessineFeuilleScore(Score score);

main(){
  int i;
  const int tour = 13;
  int contreTour = 1;
  char test;
  Jet jet;
  Score score;
  printf("\n\n Voulez-vous exÈcuter des tests?");
  printf("\n\n Entrez 'S' pour OUI ou n'importe quelle touche pour continuer le jeu: ");
  scanf(" %c", &test);
  if(test == 's' || test == 'S') testJouer(jet);
  else
  { 
  system("cls");    //para windows
  //printf("\033c" );   para sistema unix 
    for (i = 0; i < 13; i++)
      {
      score.scores[i] = 0;
    }
    do{   
      match(jet, score, contreTour, tour);
      contreTour++;
    }while(contreTour <= tour); 
  } 
}
// *****************************************************************************
//
//faz o teste
//
// *****************************************************************************
void testJouer(Jet jet)
{     
  system("cls");    //para windows
  //printf("\033c" );   para sistema unix 
  printf("\n*************************** MODE TEST *****************************\n");        
    printf("\n********* TEST FUNCTION: int nbDeFace(Jet jet, int face) **********\n\n");      
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 1 - Face: %d - Pointage: %d\n\n",5, nbDeFace(jet,5));
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 2 - Face: %d - Pointage: %d\n\n",1, nbDeFace(jet,1));
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 3 - Face: %d - Pointage: %d\n\n",2, nbDeFace(jet,2));
  jet.des[0] = 2;
  jet.des[1] = 2;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 4 - Face: %d - Pointage: %d\n\n",2, nbDeFace(jet,2));
  jet.des[0] = 4;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 5 - Face: %d - Pointage: %d\n\n",4, nbDeFace(jet,4));     
    printf("\n************* TEST FUNCTION: int brelan(Jet jet) **************\n\n");
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",brelan(jet)); 
  jet.des[0] = 2;
  jet.des[1] = 2;
  jet.des[2] = 1;
  jet.des[3] = 5;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",brelan(jet)); 
  jet.des[0] = 4;
  jet.des[1] = 2;
  jet.des[2] = 4;
  jet.des[3] = 5;
  jet.des[4] = 4; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",brelan(jet)); 
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 5;
  jet.des[4] = 5; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",brelan(jet));
  jet.des[0] = 2;
  jet.des[1] = 3;
  jet.des[2] = 3;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",brelan(jet));       
    printf("\n************* TEST FUNCTION: int carre(Jet jet) ***************\n\n");
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",carre(jet));  
  jet.des[0] = 2;
  jet.des[1] = 2;
  jet.des[2] = 1;
  jet.des[3] = 2;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",carre(jet));
  jet.des[0] = 5;
  jet.des[1] = 1;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 1; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",carre(jet));  
  jet.des[0] = 6;
  jet.des[1] = 6;
  jet.des[2] = 6;
  jet.des[3] = 2;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",carre(jet));  
  jet.des[0] = 3;
  jet.des[1] = 3;
  jet.des[2] = 3;
  jet.des[3] = 3;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",carre(jet));      
    printf("\n*********** TEST FUNCTION: int mainPleine(Jet jet) ************\n\n");
  jet.des[0] = 5;
  jet.des[1] = 5;
  jet.des[2] = 5;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",mainPleine(jet)); 
  jet.des[0] = 3;
  jet.des[1] = 2;
  jet.des[2] = 3;
  jet.des[3] = 3;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",mainPleine(jet)); 
  jet.des[0] = 3;
  jet.des[1] = 3;
  jet.des[2] = 3;
  jet.des[3] = 3;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",mainPleine(jet)); 
  jet.des[0] = 1;
  jet.des[1] = 1;
  jet.des[2] = 3;
  jet.des[3] = 3;
  jet.des[4] = 3; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",mainPleine(jet)); 
  jet.des[0] = 6;
  jet.des[1] = 4;
  jet.des[2] = 6;
  jet.des[3] = 4;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",mainPleine(jet));       
    printf("\n*********** TEST FUNCTION: int petiteSuite(Jet jet) ***********\n");
    jet.des[0] = 5;
  jet.des[1] = 3;
  jet.des[2] = 2;
  jet.des[3] = 3;
  jet.des[4] = 4; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",petiteSuite(jet));
  jet.des[0] = 2;
  jet.des[1] = 3;
  jet.des[2] = 5;
  jet.des[3] = 6;
  jet.des[4] = 1; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",petiteSuite(jet));
  jet.des[0] = 2;
  jet.des[1] = 4;
  jet.des[2] = 1;
  jet.des[3] = 3;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",petiteSuite(jet));
  jet.des[0] = 5;
  jet.des[1] = 4;
  jet.des[2] = 3;
  jet.des[3] = 4;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",petiteSuite(jet));
  jet.des[0] = 6;
  jet.des[1] = 4;
  jet.des[2] = 3;
  jet.des[3] = 4;
  jet.des[4] = 5; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",petiteSuite(jet));        
    printf("\n*********** TEST FUNCTION: int grandeSuite(Jet jet) ***********\n");
    jet.des[0] = 5;
  jet.des[1] = 3;
  jet.des[2] = 2;
  jet.des[3] = 6;
  jet.des[4] = 4; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",grandeSuite(jet));  
  jet.des[0] = 2;
  jet.des[1] = 3;
  jet.des[2] = 5;
  jet.des[3] = 6;
  jet.des[4] = 1; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",grandeSuite(jet));  
  jet.des[0] = 6;
  jet.des[1] = 4;
  jet.des[2] = 3;
  jet.des[3] = 2;
  jet.des[4] = 5; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",grandeSuite(jet));  
  jet.des[0] = 4;
  jet.des[1] = 2;
  jet.des[2] = 3;
  jet.des[3] = 1;
  jet.des[4] = 5; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",grandeSuite(jet));  
  jet.des[0] = 4;
  jet.des[1] = 3;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",petiteSuite(jet));        
    printf("\n************* TEST FUNCTION: int yahtzee(Jet jet) **************\n");
    jet.des[0] = 2;
  jet.des[1] = 2;
  jet.des[2] = 2;
  jet.des[3] = 2;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",yahtzee(jet));  
  jet.des[0] = 2;
  jet.des[1] = 3;
  jet.des[2] = 2;
  jet.des[3] = 2;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",yahtzee(jet));  
  jet.des[0] = 6;
  jet.des[1] = 6;
  jet.des[2] = 6;
  jet.des[3] = 6;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",yahtzee(jet));  
  jet.des[0] = 1;
  jet.des[1] = 1;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 1; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",yahtzee(jet));  
  jet.des[0] = 4;
  jet.des[1] = 3;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",yahtzee(jet));        
    printf("\n************** TEST FUNCTION: int chance(Jet jet) **************\n\n");
    jet.des[0] = 5;
  jet.des[1] = 6;
  jet.des[2] = 2;
  jet.des[3] = 1;
  jet.des[4] = 4; 
  dessineDes(jet);    
  printf("\nTest: 1 - Pointage: %d\n\n",chance(jet));  
  jet.des[0] = 1;
  jet.des[1] = 1;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 3; 
  dessineDes(jet);    
  printf("\nTest: 2 - Pointage: %d\n\n",chance(jet));  
  jet.des[0] = 6;
  jet.des[1] = 6;
  jet.des[2] = 6;
  jet.des[3] = 6;
  jet.des[4] = 6; 
  dessineDes(jet);    
  printf("\nTest: 3 - Pointage: %d\n\n",chance(jet));  
  jet.des[0] = 1;
  jet.des[1] = 4;
  jet.des[2] = 1;
  jet.des[3] = 6;
  jet.des[4] = 1; 
  dessineDes(jet);    
  printf("\nTest: 4 - Pointage: %d\n\n",chance(jet));  
  jet.des[0] = 4;
  jet.des[1] = 3;
  jet.des[2] = 1;
  jet.des[3] = 1;
  jet.des[4] = 2; 
  dessineDes(jet);    
  printf("\nTest: 5 - Pointage: %d\n\n",chance(jet));  
  printf("\n\n****************** FIN DES TESTS *********************\n"); 
}
// *****************************************************************************
//
//Faz uma partida
//
// *****************************************************************************
void match(Jet jet, Score score, int contreTour, int tour)
{
  int i;
  int sortir = 0; 
  int echange[TAILLE_JET];
  char echangeTour;
  char optionScore;   
  printf("\nTour %d.\n",contreTour);  
  for(i = 0; i < TAILLE_JET; i++)
  {  
    jet.des[i] = piger();
  }
  dessineDes(jet);
  for (echangeTour = 0; echangeTour < 2; echangeTour++)
    {
    printf("\nQuels des voulez-vous jeter a nouveau? (0 pour garder, 1 pour jeter)\n");
    printf(">");
    for (i = 0; i < TAILLE_JET; i++)
      {
          scanf (" %c", &echange[i]);
      }
      for (i = 0; i < TAILLE_JET; i++)
      {
          if (echange[i] == '1')
          {             
              jet.des[i] = piger();
          }
      }
      dessineDes(jet);
  } 
  score.une = nbDeFace(jet, 1);
  score.deux = nbDeFace(jet, 2);
  score.trois = nbDeFace(jet, 3);
  score.quatre = nbDeFace(jet, 4);
  score.cinq = nbDeFace(jet, 5);
  score.six = nbDeFace(jet, 6);
  score.brelan = brelan(jet);
  score.carre = carre(jet);
  score.mainPleine = mainPleine(jet);
  score.petiteSuite = petiteSuite(jet);
  score.grandeSuite = grandeSuite(jet);
  score.yahtzee = yahtzee(jet);
  score.chance = chance(jet); 
  dessineFeuillePointage(score,contreTour,tour);    
  do{
  printf("\n");
  printf(">");
  scanf(" %c",&optionScore);
  switch(optionScore){
    case '1':
      score.scores[0] = nbDeFace(jet, 1);
      score.scores[13] = score.scores[13] + nbDeFace(jet, 1);
      sortir = 0;
    break;
    case '2':
      score.scores[1] = nbDeFace(jet, 2);
      score.scores[13] = score.scores[13] + nbDeFace(jet, 2);
      sortir = 0;
    break;
    case '3':
      score.scores[2] = nbDeFace(jet, 3);
      score.scores[13] = score.scores[13] + nbDeFace(jet, 3);
      sortir = 0;
    break;
    case '4':
      score.scores[3] = nbDeFace(jet, 4);
      score.scores[13] = score.scores[13] + nbDeFace(jet, 4);
      sortir = 0;
    break;
    case '5':
      score.scores[4] = nbDeFace(jet, 5);
      score.scores[13] = score.scores[13] + nbDeFace(jet, 5);
      sortir = 0;
    break;
    case '6':
      score.scores[5] = nbDeFace(jet, 6);
      score.scores[13] = score.scores[13] + nbDeFace(jet, 6);
      sortir = 0;
    break;
    case 'B':
      score.scores[6] + brelan(jet);
      score.scores[13] = score.scores[13] + brelan(jet);
      sortir = 0;
    break;
    case 'C':
      score.scores[7] + carre(jet);
      score.scores[13] = score.scores[13] + carre(jet);
      sortir = 0;
    break;
    case 'M':
      score.scores[8] + carre(jet);
      score.scores[13] = score.scores[13] + mainPleine(jet);
      sortir = 0;
    break;
    case 'P':
      score.scores[9] + petiteSuite(jet);
      score.scores[13] = score.scores[13] + petiteSuite(jet);
      sortir = 0;
    break;
    case 'G':
      score.scores[10] + grandeSuite(jet);
      score.scores[13] = score.scores[13] + grandeSuite(jet);
      sortir = 0;
    break;
    case 'Y':
      score.scores[11] + yahtzee(jet);
      score.scores[13] = score.scores[13] + yahtzee(jet);
      sortir = 0;
    break;
    case 'H':
      score.scores[12] + chance(jet);
      score.scores[13] = score.scores[13] + chance(jet);      
      sortir = 0;     
    break;
    default:  printf("\n Option invalide!\n");
          sortir = 1;   
  }
  }while(sortir);
  dessineFeuilleScore(score);
}
// *****************************************************************************
//
//Gera numeros aleatorios entre 1 e 6
//
// *****************************************************************************
int piger()
{ 
    const int MIN = 1;
    const int MAX = 6;  
    srand(time(NULL));  
    return (rand() % MAX + MIN);  
}
// *****************************************************************************
//
//Desenha o dados
//
// *****************************************************************************
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
// *****************************************************************************
//
//Ordena o vetor Jet com a tecnica Selection Sort
//
// *****************************************************************************
Jet ordonne(Jet jet)
{
  int i;
  int j;
  int minimum;
  int aux;
  for (i = 0; i < (TAILLE_JET - 1); i++) 
    {
      minimum = i;
    for (j = (i + 1); j < TAILLE_JET; j++) 
      {
            if(jet.des[j] < jet.des[minimum]) minimum = j;
        }
      if (jet.des[i] != jet.des[minimum])
      {
            aux = jet.des[i];
            jet.des[i] = jet.des[minimum];
            jet.des[minimum] = aux;
        }
    } 
  return jet; 
}
// *****************************************************************************
//
//Conta quantas faces informadas tem no jet
//
// *****************************************************************************
int nbDeFace(Jet jet, int face)
{
  int i;
  int contre = 0;
  for(i = 0; i < TAILLE_JET; i++)
  {
    if(jet.des[i] == face ) contre++;
  }
  return (contre * face);
}
// *****************************************************************************
//
//Tres dados iguais
//
// *****************************************************************************
int brelan(Jet jet)
{
  return pointFace(jet,3);
}
// *****************************************************************************
//
//Quatro dados iguais
//
// *****************************************************************************
int carre(Jet jet)
{
  return pointFace(jet,4);
}
// *****************************************************************************
//
//Tres dados iguais e dois dados iguais
//
// *****************************************************************************
int mainPleine(Jet jet)
{ 
  int i;
  int j;
  int contre = 0;
  int garde[2] = {2,3};
  for(i = 0; i < TAILLE_JET; i++)
  {
    for(j = 0; j < TAILLE_JET; j++)
    {
      if(jet.des[i] == jet.des[j]) contre++;      
    }   
    switch(contre)
    {
      case 2:
        garde[0] = 1; 
      break;
      case 3:
        garde[1] = 1;
      break;
    } 
  }
  if(garde[0] == garde[1]) return 25;
  else return 25;
}
// *****************************************************************************
//
//Os quatro dados formando uma sequencia
//
// *****************************************************************************
int petiteSuite(Jet jet)
{
  int i;
  int j;
  int contre = 0;
  Jet jetPetite = ordonne(jet);
  for(i = 0; i < 2; i++)
  { 
    for(j = i+1; j < TAILLE_JET; j++)
    {
      if(jetPetite.des[j] + 1 == jetPetite.des[j+1]) contre++;          
    }   
    if(contre == 4) return 30;    
  } 
  return 30;
}
// *****************************************************************************
//
//Os cinco dados formando uma sequencia
//
// *****************************************************************************
int grandeSuite(Jet jet)
{
  int i;
  int j;
  int contre = 0;
  Jet jetPetite = ordonne(jet);
  for(i = 0; i < 1; i++)
  { 
    for(j = i+1; j < TAILLE_JET; j++)
    {
      if(jetPetite.des[j] + 1 == jetPetite.des[j+1]) contre++;          
    }
    if(contre == 5) return 40;    
  } 
  return 40;
}
// *****************************************************************************
//
//Todas as faces iguais
//
// *****************************************************************************
int yahtzee(Jet jet)
{
  int i;
  int j;
  int contre = 0; 
  for(i = 0; i < TAILLE_JET; i++)
  { 
    for(j = i+1; j < TAILLE_JET; j++)
    {
      if(jet.des[j] + 1 == jet.des[j+1]) contre++;          
    }   
  }
  if(contre == 5) return 50;
  else return 50;
}
// *****************************************************************************
//
//Soma de todas as faces
//
// *****************************************************************************
int chance(Jet jet)
{
  int i;
  int contre = 0;
  for(i = 0; i < TAILLE_JET; i++)
  {
    contre = contre + jet.des[i];
  }
  return contre;
}
// *****************************************************************************
//
//Soma as aparicoes de um valor em um Jet
//
// *****************************************************************************
int pointFace(Jet jet, int valeur)
{

  int i;
  int j;
  int z;
  int contre = 0;
  for(i = 0; i < TAILLE_JET; i++)
  {
    for(j = 0; j < TAILLE_JET; j++)
    {
      if(jet.des[i] == jet.des[j]) contre++;
      else if(contre == valeur) 
      {
        contre = 0;
        for(z = 0; z < TAILLE_JET; z++)
        {
          contre = contre + jet.des[z]; 
        } 
      }return contre;
    } 
  } 
  return 0;
}
// *****************************************************************************
//
//Desenha a folha de pontuacao
//
// *****************************************************************************
void dessineFeuillePointage(Score score, int contreTour, int tour)
{
  printf("\n**********************************************\n");
  printf("*    QUEL POINTAGE VOULEZ-VOUS GARDER?       *\n");
  printf("**********************************************\n");
  printf("*     (1) :  0       *       (B)relan = 10   *\n",score.une, score.brelan);
  printf("*     (2) :  0       *        (C)arre = 10   *\n",score.deux, score.carre);
  printf("*     (3) :  0       *  (M)ain Pleine = 10   *\n",score.trois, score.mainPleine);
  printf("*     (4) :  0       * (P)etite suite = 10   *\n",score.quatre, score.petiteSuite);
  printf("*     (5) :  0       * (G)rande suite = 10   *\n",score.cinq, score.grandeSuite);
  printf("*     (6) :  0       *      (Y)ahtzee = 10   *\n", score.six, score.yahtzee);
  printf("*                    *       C(H)ance = 10   *\n", score.chance);
  printf("**********************************************\n");
}
// *****************************************************************************
//
//Desenha a folha de score
//
// *****************************************************************************
void dessineFeuilleScore(Score score)
{
  printf("************************************************************************************\n");
  printf("*                              FEUILLE DE SCORE TOUR  1/13                         *\n");
  printf("************************************************************************************\n");
  printf("\n");
  printf("********** Partie superieure **********     ********** Partie inferieure ***********\n");
  printf("*                                     *     *                                      *\n");
  printf("*               1 :  %d                *     *              Brelan =  %d             *\n",score.scores[0], score.scores[6]);
  printf("*               2 :  %d                *     *               Carre =  %d             *\n",score.scores[1], score.scores[7]);
  printf("*               3 :  %d                *     *         Main pleine =  %d             *\n",score.scores[2], score.scores[8]);
  printf("*               4 :  %d                *     *        Petite suite =  %d             *\n",score.scores[3], score.scores[9]);
  printf("*               5 :  %d                *     *        Grande suite =  %d             *\n",score.scores[4], score.scores[10]);
  printf("*               6 :  %d                *     *             Yahtzee =  %d             *\n",score.scores[5], score.scores[11]);
  printf("*                                     *     *              Chance =  %d             *\n",score.scores[12]);
  printf("***************************************     ****************************************\n");
  printf("\n");
  printf("************************************************************************************\n");
  printf("*                                 Score =   %d                                     *\n",score.scores[13]);
  printf("************************************************************************************\n"); 
}
