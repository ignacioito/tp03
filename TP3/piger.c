// ****************************************************************************
// Nom : piger.c
//
// Auteur : Rébecca
//
// Date : 5 octobre 2018
//
// Pige trois nombres au hasard entre 1 et 10.
//
// *****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  const int MIN = 1;
  const int MAX = 10;

  // à faire une fois avant tout tir au hasard, on utilise l'heure comme "germe"
  // à notre fonction pseudo-aléatoire.
  srand(time(NULL));

  printf("Voici trois nombres pigés au hasard entre %d et %d : \n", MIN, MAX);
  int n = rand() % MAX + MIN;
  printf("%d\n", n);
  
  n = rand() % MAX + MIN;
  printf("%d\n", n);

  n = rand() % MAX + MIN;
  printf("%d\n", n);
}

