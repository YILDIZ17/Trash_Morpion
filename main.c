#include <stdio.h>
#include "void.h"
#include "game.h"

int main(void) {

  char tab[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
  char d = 'Z';
  int e = 1;
  int f = 1;

  printf("\nBIENVENUE DANS \"Trash Morpion\"\n\n");

  printf("\nINSTRUCTIONS:\n");
  printf("\nPour saisir votre réponse, vous devez choisir le nom de la ligne, et le nom de la colone tout en séparant la saisie (ex 0 1).\n\nPour gagner la partie vous devez aligner avant votre adversaire 3 symboles identiques: horizontalement, verticalement ou en diagonale.\n\nIMPORTANT ! Le perdant aura bien évidemment un gage.\n\n\n");

  char nom1[255] ="";
  char nom2[255] ="";
  
  printf("Joueur 1, choisissez un pseudo: ");
  scanf(" %s",&nom1);
  printf("Joueur 2, choisissez un pseudo: ");
  scanf("%s",&nom2);
  printf("\n");

  char choix1 = ' ';
  char choix2 = ' ';
  
  printf("%s, choisissez un symbole: ",nom1);
  scanf(" %c",&choix1);
  printf("%s, choisissez un symbole: ",nom2);
  scanf(" %c",&choix2);
  printf("\n");

  printf("\nSYMBOLES DES JOUEURS:\n");
    printf("\n\t - %s | '%c'",nom1,choix1);
    printf("\n\t - %s | '%c'\n",nom2,choix2);
  printf("\n\nBonne partie, que le meilleur gagne !\n\n");

 display_grid(tab);


  char symbole1 = choix1;
  char symbole2 = choix2;
 while(1){
   printf("\n %s: \n",nom1);
  scanf(" %d %d",&e, &f);
   update_grid(tab, symbole1, e,f);
   display_grid(tab);
   if(test_win(tab, symbole1) == 1){
     printf("\nVictoire de %s\n", nom1);
     printf("Défaite de %s\n", nom2);
     return 0;
   }

  printf("\n %s: \n",nom2);
   scanf(" %d %d",&e, &f);
   update_grid(tab, symbole2, e,f);
   display_grid(tab);
   if(test_win(tab, symbole2) == 1){
     printf("\nVictoire de %s\n", nom2);
     printf("Défaite de %s\n", nom1);
     return 0;
   }
 }
}
