#pragma once

typedef struct Jet Jet;
struct Jet
 {
  int des[5]; 

 }; 

 typedef struct Score Score;
struct Score
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

Jet joue (Jet jet);
//void positionScore (struct Score score);
void dessineDes(Jet jet);
int nbDeFace1(Jet jet);
int nbDeFace2(Jet jet);
int nbDeFace3(Jet jet);
int nbDeFace4(Jet jet);
int nbDeFace5(Jet jet);
int nbDeFace6(Jet jet);
int brelan(Jet jet);
int carre(Jet jet);
int mainPleine(Jet jet);
int petiteSuite(Jet jet);
int grandeSuite(Jet jet);
int yahtzee(Jet jet);
int chance(Jet jet);