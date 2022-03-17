#ifndef VOID_H
#define VOID_H

extern void display_grid(char (*grid)[3]);
extern void init_grid(char (*grid)[3], char c);
extern void update_grid(char (*grid)[3], char c, int x, int y);
extern int test_win(char (*grid)[3], char c);

#endif
