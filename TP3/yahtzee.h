// *****************************************************************************
//
// Nom : yahtzee.h
//
// Auteur : Rébecca
//
// Date : 3 octobre 2018
//
// Liste de fonctions et documentation pour trouver le pointage donné pour une
// figure pour un jet.
//
// *****************************************************************************







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
int chance(Jet jet);
