//
// Montreal QC 23 octobre de 2018
// Auteurs
// Ignacio Ito
// João Gustavo
// Luis Gustavomain
// Travail Pratique 03 Introduction À La Programmation
//
/*
Le but de ce TP est de développer une solution programmatique 
pour un problème de complexité intermédiaire (le jeue Yahtzee). Il couvre les tableaux, 
les structures, les pointeurs et les arguments d’exécution. 
Il emmène aussi l’étudiante à développer ses aptitudes de testeur 
afin de valider sa stratégie. 
*/ 
// Professeure Rébecca Lapointe
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "yahtzee.h"


int main()
{
  
  Score score = {0,0,0,0,0,0,0,0,0,0,0,0,0};
  Jet jet;
  int scoreFinale = 0;

printf ("\n\nATTENTION! UTILISEZ VOTRE CLAVIER UNIQUEMENT AVEC LES MAJUSCULE PENDANT LE JEU\n\n");

  for (int i = 0; i < 2; ++i)
  {
    Jet jogadaFeita = joue (jet);
    char option;

  
     printf ("\n\n\n");
     printf ("******************************************************************\n");
     printf ("*                QUEL POINTAGE VOULEZ-VOUS GARDER?               *\n");
     printf ("******************************************************************\n\n");
     printf ("*  (A) - Les valeurs avec le visage 1 ajouté: %d\n", nbDeFace1(jogadaFeita));
     printf ("*  (B) - Les valeurs avec le visage 2 ajouté: %d\n", nbDeFace2(jogadaFeita));
     printf ("*  (C) - Les valeurs avec le visage 3 ajouté: %d\n", nbDeFace3(jogadaFeita));
     printf ("*  (D) - Les valeurs avec le visage 4 ajouté: %d\n", nbDeFace4(jogadaFeita));
     printf ("*  (E) - Les valeurs avec le visage 5 ajouté: %d\n", nbDeFace5(jogadaFeita));
     printf ("*  (F) - Les valeurs avec le visage 6 ajouté: %d\n", nbDeFace6(jogadaFeita));
     printf ("*  (G) - Pour le main plaine on a la valeur: %d\n", mainPleine (jogadaFeita));
     printf ("*  (H) - Pour le brelan on a la valeur: %d\n", brelan (jogadaFeita));
     printf ("*  (I) - Pour le carre on a la valeur: %d\n", carre (jogadaFeita));
     printf ("*  (J) - Pour le petite suite on a la valeur: %d\n", petiteSuite (jogadaFeita));
     printf ("*  (K) - Pour le grande suite on a la valeur: %d\n", grandeSuite (jogadaFeita)); 
     printf ("*  (L) - Pour le chance on a la valeur: %d\n", chance (jogadaFeita));
     printf ("*  (M) - Pour le yahtzee on a la valeur: %d\n", yahtzee (jogadaFeita));
     printf ("\n");
     printf ("******************************************************************\n\n\n\n");
 
     printf ("ATENTION!!! CHOISISSEZ EN MAJUSCULE VOTRE JEU: ");
     scanf (" %c", &option);
     // Ici, l'utilisateur est invité à choisir le jeu qu'il souhaite marquer. 
     printf ("\n\n\n");

        switch(option)
          {
              case 'A': 
              score.un = nbDeFace1(jogadaFeita);
              break;
            
              case 'B': 
              score.deux = nbDeFace2(jogadaFeita);
              break;

              case 'C':
              score.trois = nbDeFace3(jogadaFeita);
              break;

              case 'D': 
              score.quatre = nbDeFace4(jogadaFeita);
              break;

              case 'E': 
              score.cinq = nbDeFace5(jogadaFeita);
              break;

              case 'F': 
              score.six = nbDeFace6(jogadaFeita);
              break;

              case 'G': 
              score.mainPleine = mainPleine(jogadaFeita);
              break;
            
              case 'H': 
              score.brelan = brelan(jogadaFeita);
              break;

              case 'I': 
              score.carre = carre(jogadaFeita);
              break;

              case 'J': 
              score.petiteSuite = petiteSuite(jogadaFeita);
              break;

              case 'K': 
              score.grandeSuite = grandeSuite(jogadaFeita);
              break;

              case 'L': 
              score.chance = chance(jogadaFeita);
              break;

              case 'M': 
              score.yahtzee = yahtzee(jogadaFeita);
              break;

          }
  
              scoreFinale = (score.un + score.deux + score.trois + score.quatre + score.cinq + score.six +
                            score.mainPleine + score.brelan + score.carre + score.petiteSuite + score.grandeSuite +
                            score.chance + score.yahtzee);

      printf ("******************************************************************\n");
      printf ("*                            SCORE                               *\n");
      printf ("******************************************************************\n");
      printf("* (A) - Vous avez %d points dans la somme des données de valeur 1   \n", score.un);
      printf("* (B) - Vous avez %d points dans la somme des données de valeur 2 \n", score.deux);
      printf("* (C) - Vous avez %d points dans la somme des données de valeur 3   \n", score.trois);
      printf("* (D) - Vous avez %d points dans la somme des données de valeur 4   \n", score.quatre);
      printf("* (E) - Vous avez %d points dans la somme des données de valeur 5   \n", score.cinq);
      printf("* (F) - Vous avez %d points dans la somme des données de valeur 6   \n", score.six);
      printf("* (G) - Vous avez %d points dans en main plaine   \n", score.mainPleine);
      printf("* (H) - Vous avez %d points dans en brelan   \n", score.brelan);
      printf("* (I) - Vous avez %d points dans en carre   \n", score.carre);
      printf("* (J) - Vous avez %d points dans en petite suite   \n", score.petiteSuite);
      printf("* (K) - Vous avez %d points dans en grande suite   \n", score.grandeSuite);
      printf("* (L) - Vous avez %d points dans en chance   \n", score.chance);
      printf("* (M) - Vous avez %d points dans en yahtzee   \n\n", score.yahtzee);
      printf ("******************************************************************\n");
      printf ("\n*                      VOTRE SCORE:  %d                          *\n\n", scoreFinale);
      printf ("******************************************************************\n\n\n");
}


}