
// ****************************************************************************
// Nom : piger.c
//
// Auteur : Ignacio, João, Luiz
//
// Date : 5 octobre 2018
//
// Pige trois nombres au hasard entre 1 et 10.
//
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Jet Jet;
struct Jet{
  int des[5];
};


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
  const int MIN = 1;
  const int MAX = 6;

  // à faire une fois avant tout tir au hasard, on utilise l'heure comme "germe"
  // à notre fonction pseudo-aléatoire.
  srand(time(NULL));

  int des[5];
  char quant[5];
  int n = 0;

    printf("Voici cinq nombres pigés au hasard entre %d et %d : \n\n", MIN, MAX);
  
    for (int i = 0; i < 5; ++i)
    {
      n = rand() % MAX + MIN;

      //printf("%d\n", n);
      des[i] = n;
      printf("%d  ", des[i]);
    }
    printf("\n");

    for (int c = 0; c < 2; ++c)
    {
    
    printf("\nTapez le 0 pour non et 1 pour oui dedans chaque des 12345\n");
    for (int i = 0; i < 5; ++i)
    {
      scanf(" %c", &quant[i]);
     // printf(" %c", quant[i]);
    }
    printf("\n");



    for (int i = 0; i < 5; ++i)
    {
      if(quant[i] == '1')
      {

      n = rand() % MAX + MIN;

      des[i] = n;

      }
    }
    for (int i = 0; i < 5; ++i)
    {
      printf("%d\n", des[i]);
    }

    }
    chance(jet);

  
  }



// *****************************************************************************
// nbDeFace
//
// Calcule le pointage pour la figure "face"
//
// INPUT :
//     jet : cinq dés.
//     face : la face a comptabiliser.
//
// OUTPUT :
//     le pointage pour face dans jet. Le pointage est le produit de face et du
//     nombre de des dans jets qui valent face.
//
// Exemples :
//     nbDeFace({5,5,1,3,2}, 5) = 2 * 5 = 10;
//     nbDeFace({5,5,1,3,2}, 1) = 1 * 1 = 1;
//     nbDeFace({5,5,1,3,2}, 2) = 1 * 2 = 2;
//     nbDeFace({2,2,1,1,2}, 2) = 3 * 2 = 6;
// *****************************************************************************
int nbDeFace(Jet jet, int face);

// *****************************************************************************
// brelan
//
// Calcule le pointage pour la figure "brelan"
//
// INPUT :
//     jet : cinq dés.
//
// OUTPUT :
//     le pointage pour brelan dans jet. Un brelan est trois faces
//     identiques. Il vaut la somme de dés.
//
// Exemples :
//     brelan({5,5,1,3,2}) = 0;
//     brelan({2,2,1,5,2}) = 2 + 2 + 1 + 5 + 2 = 12;
// *****************************************************************************
int brelan(Jet jet);

// *****************************************************************************
// carre
//
// Calcule le pointage pour la figure "carre"
//
// INPUT :
//      jet : cinq dés.
//
// OUTPUT :
//     le pointage pour carre dans jet. Un carre est quatres faces
//     identiques. Il vaut la somme des dés.
//
// Exemples :
//     carre({5,5,1,3,2}) = 0;
//     carre({2,2,1,2,2}) = 2 + 2 + 1 + 2 + 2 = 9;
// *****************************************************************************
int carre(Jet jet);

// *****************************************************************************
// mainPleine
//
// Calcule le pointage pour la figure "main pleine"
//
// INPUT :
//      jet : cinq dés.
//
// OUTPUT :
//     le pointage pour main pleine dans jet. Une main pleine est trois faces
//     identiques et deux faces identiques. Elle vaut 25 points.
//
// Exemples :
//     mainPleine({5,5,5,3,2}) = 0;
//     mainPleine({2,2,1,1,2}) = 25;
// *****************************************************************************
int mainPleine(Jet jet);

// *****************************************************************************
// petiteSuite
//
// Calcule le pointage pour la figure "petite suite"
//
// INPUT :
//     jet : cinq dés.
//
// OUTPUT :
//     le pointage pour petite suite dans jet. Une petite suite vaut 30
//     points. Il y a trois petites suites possibles : 1,2,3,4 ou 2,3,4,5 ou
//     3,4,5,6. L’ordre des dés n’a pas d’importance
//
// Exemples :
//     petiteSuite{{5,3,2,3,4}) = 30;
//     petiteSuite({2,3,5,6,1}) = 0;
// *****************************************************************************
int petiteSuite(Jet jet);

// *****************************************************************************
// grandeSuite
//
// Calcule le pointage pour la figure "grande suite"
//
// INPUT :
//     jet : cinq dés.
//
// OUTPUT :
//     le pointage pour grande suite dans jet. Une grande suite vaut 40
//     points. Il y a deux grandes suites possibles : 1,2,3,4,5 ou
//     2,3,4,5,6. L’ordre des dés n’a pas d’importance.
//
// Exemples :
//     grandeSuite{{5,3,2,6,4}) = 40;
//     grandeSuite({2,3,5,6,1}) = 0;
// *****************************************************************************
int grandeSuite(Jet jet);

// *****************************************************************************
// yahtzee
//
// Calcule le pointage pour la figure "yahtzee"
//
// INPUT :
//     jet : cinq dés.
//
// OUTPUT :
//     le pointage pour yahtzee dans jet. Un yahtzee est cinq des identiques. Il
//     vaut 50 points.
//
// Exemples :
//     yahtzee{{2,2,2,2,2}) = 50;
//     yahtzee({2,3,2,2,2}) = 0;
// *****************************************************************************
int yahtzee(Jet jet);

// *****************************************************************************
// chance
//
// Calcule le pointage pour la figure "chance"
//
// INPUT :
//     jet : cinq dés.
//
// OUTPUT : 
//     le pointage pour chance est la somme des faces.
//
// Exemples :
//     chance{{5,6,2,1,4}) = 18;
//     chance({1,1,1,1,3}) = 7;
// *****************************************************************************
int chance(Jet jet)
{
  int somme = 0;
  for (int i = 0; i < 5; ++i)
  {
    somme = somme + jet.des[i];
  }
  printf("%d\n", somme);
  
}  
 


