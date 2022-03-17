#include <stdio.h>
#include <stdlib.h>


void display_grid(char (*grid)[3]){ //Afficher la grille
  printf("|---|---|---|\n");
   for (int x = 0; x < 3; x++){
     printf("|");
     for (int y = 0; y < 3; y++){;
     printf(" %c |",grid[x][y]);}
  printf("\n|---|---|---|\n");
     }
  
}

void update_grid(char (*grid)[3], char c, int a, int b){ //Jouer
  for (int x = 0; x < 3; x++){
    for (int y = 0; y < 3; y++){
      if (x == a && y == b){
        grid[x][y] = c;
      }
    }
  }
}
