#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define FrameX 13
#define FrameY 3
#define Frame_height 20
#define Frame_width 18

int i, j, Temp, Temp1, Temp2;
int a[80][80];
int b[4];

struct Tetris
{
    int x;
    int y;
    int flag;
    int next;
    int speed;
    int number;
    int score;
    int level;
};
HANDLE hOut;

int clolr(int c);
void gotoxy(int x, int y);
void title();
void flower();
void welcome();
void DrwaGameframe();
void MakeTetris(struct Tetris* tetris);
void PrintTetris(struct Tetris* tetris);
int ifMove(struct Tetris* tetris);
void CleanTetris(struct Tetris* tetris);
void Del_Fullline(struct Tetris* tetris);
void Flag(struct Tetris* tetris);
void Gameplay();
void Replay(struct Tetris* tetris);
void explation();
void regulation();
void close();
