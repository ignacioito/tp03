#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "yahtzee.h"

//****
 //
 //***
 Jet joue (Jet jet)
 {
  const int MIN = 1;
  const int MAX = 6;
  
  srand(time(NULL));

  int des[5];
  char quant [5];
  int n = 0;
// Nous déclarons ici les trois variables utilisées dans chacun des mouvements. 

  printf("Voici cinq nombres pigés au hasard entre %d et %d : \n\n", MIN, MAX);
// Ici, nous informons l'utilisateur qu'il y a cinq nombres choisis au hasard

  for (int i = 0; i < 5; ++i)
  {
     n = rand() % MAX + MIN;
     jet.des[i] = n;
// Ici nous avons couru un pour pour pour la première fois remplir le tableau contenant
// les valeurs des données du premier coup.
     
  }
  printf("\n");

  dessineDes(jet);
// Nous appelons ici la fonction dessineDes pour que les valeurs obtenues dans le premier
// les jeux sont représentés comme s'ils étaient des dés.

  for (int c = 0; c < 2; ++c)
  {
// Ici, nous réglons ceci pour que nous puissions lancer les dés deux fois plus

    printf("\nEntrez 0 POUR CONSERVER la valeur des données ou entrez 1 POUR MODIFIER la valeur de chacune des cinq données.\n\n");
// Nous demandons ici à l’utilisateur de choisir les valeurs des données qui seront conservées et les valeurs
// des données qui seront modifiées, à la fois au deuxième et au troisième coup de chaque tour.

        for (int i = 0; i < 5; ++i)
        {
        scanf (" %c", &quant[i]);
        }
// Ici, nous mettons un scanf pour que l’utilisateur puisse taper 0 ou 1 et conserver ou changer le
// valeur des données des deux derniers tours. Les valeurs 0 ou 1 sont reçues dans tableau quant []
        printf("\n");

        for (int i = 0; i < 5; ++i)
        {
         if (quant[i] == '1')
         {
          n = rand() % MAX + MIN;
          jet.des[i] = n;
         }
// Ici, nous avons fait cela pour déterminer quelles données devaient être conservées et quelles données devaient être conservées.
// a joué à nouveau, dans les deux derniers jeux de chaque tour.
        }
dessineDes(jet);
// Ici, nous appelons la fonction dessineDes afin que les valeurs obtenues à la fois dans le deuxième et le troisième
// dans le troisième coup sont représentés comme s'ils étaient des dés.
        
  }
  return jet;
// La fonction renvoie les valeurs dans une structure de type jet
 }

 //****
 //
 //***
 
int nbDeFace1 (Jet jet)
{
  int somme1 = 0;
  int somme1a = 0;
// Nous déclarons ici les deux variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 1)
              {
                somme1 ++;
              }
              
        }
// Ici, nous avons fait un for pour déterminer le nombre de fois que le visage 1 est apparu à la fin des trois coups.
 
  if (somme1 != 0)
    somme1 *= 1;
    somme1a = somme1;
// On multiplie ici le nombre de fois que la face 1 est apparue par la valeur de la face, qui dans ce cas est égale à 1.
      
  return somme1a; 
// La fonction renvoie le nombre de fois où le visage 1 apparaît à la fin du troisième mouvement, multiplié par la valeur du visage.
}

 //****
 //
 //***
int nbDeFace2 (Jet jet)
{
  int somme2 = 0;
  int somme2a = 0;
// Nous déclarons ici les deux variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 2)
              {
                somme2 ++;
              }
              
        }
// Ici, nous avons fait un for pour déterminer le nombre de fois que le visage 2 est apparu à la fin des trois coups.
 
  if (somme2 != 0)
    somme2 *= 2;
    somme2a = somme2;
// On multiplie ici le nombre de fois que la face 2 est apparue par la valeur de la face, qui dans ce cas est égale à 2.

  return somme2a;
// La fonction renvoie le nombre de fois où le visage 2 apparaît à la fin du troisième mouvement, multiplié par la valeur du visage.
}

 //****
 //
 //***
int nbDeFace3 (Jet jet)
{
  int somme3 = 0;
  int somme3a = 0;
// Nous déclarons ici les deux variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
    
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 3)
              {
                somme3 ++;
              }
              
        }
// Ici, nous avons fait un for pour déterminer le nombre de fois que le visage 3 est apparu à la fin des trois coups.

  if (somme3 != 0)
    somme3 *= 3;
    somme3a = somme3;
// On multiplie ici le nombre de fois que la face 3 est apparue par la valeur de la face, qui dans ce cas est égale à 3.
  
  return somme3a;
// La fonction renvoie le nombre de fois où le visage 3 apparaît à la fin du troisième mouvement, multiplié par la valeur du visage. 
}

 //****
 //
 //***
int nbDeFace4 (Jet jet)
{
  int somme4 = 0;
  int somme4a = 0;
// Nous déclarons ici les deux variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
    
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 4)
              {
                somme4 ++;
              }        
        }
// Ici, nous avons fait un for pour déterminer le nombre de fois que le visage 4 est apparu à la fin des trois coups.  
 
  if (somme4 != 0)
    somme4 *= 4;
    somme4a = somme4;
// On multiplie ici le nombre de fois que la face 4 est apparue par la valeur de la face, qui dans ce cas est égale à 4.
     
  return somme4a;
// La fonction renvoie le nombre de fois où le visage 4 apparaît à la fin du troisième mouvement, multiplié par la valeur du visage. 
}

 //****
 //
 //***
int nbDeFace5 (Jet jet)
{
  int somme5 = 0;
  int somme5a = 0;
// Nous déclarons ici les deux variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
   
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 5)
              {
                somme5 ++;
              }          
        }
 // Ici, nous avons fait un for pour déterminer le nombre de fois que le visage 5 est apparu à la fin des trois coups.

  if (somme5 != 0)
    somme5 *= 5;
    somme5a = somme5;
// On multiplie ici le nombre de fois que la face 5 est apparue par la valeur de la face, qui dans ce cas est égale à 5.
    
  return somme5a;
// La fonction renvoie le nombre de fois où le visage 5 apparaît à la fin du troisième mouvement, multiplié par la valeur du visage. 
}

 //****
 //
 //***
int nbDeFace6 (Jet jet)
{
  int somme6 = 0;
  int somme6a = 0;
// Nous déclarons ici les deux variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
      
      for (int i = 0; i < 5; ++i)
        { 
              if (jet.des[i] == 6)
              {
                somme6 ++;
              }       
        }
// Ici, nous avons fait un for pour déterminer le nombre de fois que le visage 6 est apparu à la fin des trois coups.  

  if (somme6 != 0)
    somme6 *= 6;
    somme6a = somme6;
// On multiplie ici le nombre de fois que la face 6 est apparue par la valeur de la face, qui dans ce cas est égale à 6.
   
    return somme6a;
// La fonction renvoie le nombre de fois où le visage 6 apparaît à la fin du troisième mouvement, multiplié par la valeur du visage. 
}

 //****
 //
 //***
int mainPleine(Jet jet)
{
  
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
// Nous déclarons ici les six variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  
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
// Ici, nous avons fait un for pour capturer en six variables (somme1, somme2, somme3, somme4, somme5 et somme6)
// le nombre de fois que chacune des cinq données apparaît
            
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
// Nous écrivons ici les conditions dans lesquelles une main plaine peut se produire      
            {
              return 25; 
            }
      
  return 0 ;
// Si une condition du main pleine est satisfaite, la fonction renvoie 25, sinon elle renvoie 0.
}
 //****
 //
 //***
int brelan(Jet jet)
{
  
  int total = 0;
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
// Nous déclarons ici les sept variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  
  for (int i = 0; i < 5; ++i)
    {
      total = total + jet.des[i]; 
    }
// Ici nous avons fait un for pour déterminer la somme de toutes les faces des données à la fin des trois tours de chaque tour.
      
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
// Ici, nous avons fait un for pour capturer en six variables (somme1, somme2, somme3, somme4, somme5 et somme6)
// le nombre de fois que chacune des cinq données apparaît.
            
            if ((somme1 >= 3) || (somme2 >= 3) || (somme3 >= 3) || (somme4 >= 3) || (somme5 >= 3) || (somme6 >= 3))
// Nous écrivons ici les conditions dans lesquelles une brelan peut se produire.
            {
              return total; 
            }
      
  return 0 ;
// Si l'une des conditions du brelan est remplie, la fonction renvoie la valeur de somme de toutes
// les données à la fin du troisième mouvement, sinon elle renvoie 0. 
}

 //****
 //
 //*** 
int carre(Jet jet)
{
  
  int total = 0;
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
// Nous déclarons ici les sept variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  

  for (int i = 0; i < 5; ++i)
    {
      total = total + jet.des[i]; 
    }
// Ici nous avons fait un for pour déterminer la somme de toutes les faces des données à la fin des trois tours de chaque tour.
      
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
// Ici, nous avons fait un for pour capturer en six variables (somme1, somme2, somme3, somme4, somme5 et somme6)
// le nombre de fois que chacune des cinq données apparaît.
            
            if ((somme1 >= 4) || (somme2 >= 4) || (somme3 >= 4) || (somme4 >= 4) || (somme5 >= 4) || (somme6 >= 4))
// Nous écrivons ici les conditions dans lesquelles une carre peut se produire.
            {
              return total; 
            }
      
  return 0 ;
// Si l'une des conditions du carre est remplie, la fonction renvoie la valeur de somme de toutes
// les données à la fin du troisième mouvement, sinon elle renvoie 0.  
} 

 //****
 //
 //***

 int petiteSuite(Jet jet)
{
  
  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
// Nous déclarons ici les six variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  
      
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
// Ici, nous avons fait un for pour capturer en six variables (somme1, somme2, somme3, somme4, somme5 et somme6)
// le nombre de fois que chacune des cinq données apparaît.
            
            if (((somme1 >= 1) && (somme2 >= 1) && (somme3 >= 1) &&
                (somme4 >= 1)) ||
                ((somme2 >= 1) && (somme3 >= 1) && (somme4 >= 1) &&
                (somme5 >= 1)) ||
                ((somme3 >= 1) && (somme4 >= 1) && (somme5 >= 1) &&
                (somme6 >= 1)))
// Nous écrivons ici les conditions dans lesquelles une petite suite peut se produire.   
            {
              return 30; 
            }
      
  return 0 ;
// Si une condition du petite suite est satisfaite, la fonction renvoie 30, sinon elle renvoie 0.
}

 //****
 //
 //***
 int grandeSuite(Jet jet)
{

  int somme1 = 0;
  int somme2 = 0;
  int somme3 = 0;
  int somme4 = 0;
  int somme5 = 0;
  int somme6 = 0;
// Nous déclarons ici les six variables de paramètres locaux de type int que nous allons utiliser dans la fonction.
  
      
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
// Ici, nous avons fait un for pour capturer en six variables (somme1, somme2, somme3, somme4, somme5 et somme6)
// le nombre de fois que chacune des cinq données apparaît.
            
            if (((somme1 == 1) && (somme2 == 1) && (somme3 == 1) &&
                (somme4 == 1) && (somme5 == 1)) ||
                ((somme2 == 1) && (somme3 == 1) && (somme4 == 1) &&
                (somme5 == 1) && (somme6 == 1)))
// Nous écrivons ici les conditions dans lesquelles une grande suite peut se produire.       
            {
              return 40; 
            }
      
  return 0 ;
// Si une condition du grande suite est satisfaite, la fonction renvoie 40, sinon elle renvoie 0. 
}
 
 //****
 //
 //****
int chance(Jet teste)
 {
    int somme = 0;
// Ici, nous déclarons la variable de type int de paramètres locaux que nous allons utiliser dans la fonction.

    for (int i = 0; i < 5; ++i)
     
      somme = somme + teste.des[i]; 
      
      return somme;
// Ici nous avons fait un for pour déterminer la somme de toutes les faces des données à la fin du troisième tour de chaque tour.
// Nous demandons également que la valeur de la somme des données renvoie la fonction.

 }
 //****
 //
 //***
 int yahtzee(Jet jet)
 {
    if((jet.des[0] == jet.des[1]) && (jet.des[1] == jet.des[2]) && (jet.des[2]== jet.des[3]) && (jet.des[3]== jet.des[4])) 
// Ici nous avons fait la condition pour qu'un yahtzee soit fait.
    {
      return 50;
    }
  
  return 0;
// Si la condition du yahtzee est satisfaite, la fonction renvoie 50, sinon elle renvoie 0.
}

 //****
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