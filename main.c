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
  printf("\nPour saisir votre réponse, vous devez choisir le nom de la ligne, et le nom de la colone tout en séparant la saisie (ex 0 1).\n\n 
  Pour gagner la partie vous devez aligner avant votre adversaire 3 symboles identiques: horizontalement, verticalement ou en diagonale.\n\n");

  printf("\n SYMBOLES DES JOUEURS:\n");
    printf("\n\t - Joueur 1 | 'X'");
    printf("\n\t - Joueur 2 | 'O'\n");
  printf("\n\n Bonne partie, que le meilleur gagne !\n\n");

 display_grid(tab);
  
 while(1){
   printf("\nJoueur 1:\n");
  scanf(" %d %d",&e, &f);
   update_grid(tab, 'X', e,f);
   display_grid(tab);
   if(test_win(tab, 'X') == 1){
     printf("\nVictoire du joueur 1 !\n");
     printf("Défaite du joueur 2 !\n");
     return 0;
   }

  printf("\nJoueur 2:\n");
   scanf(" %d %d",&e, &f);
   update_grid(tab, 'O', e,f);
   display_grid(tab);
   if(test_win(tab, 'O') == 1){
     printf("\nVictoire du joueur 2 !\n");
     printf("Défaite du joueur 1 !\n");
     return 0;
   }

 }
 
}
