#define  ROW  9
#define  COL  9
#define  ROWS  11
#define  COLS  COL+2
#define  EASY  10

void  BoardInit(char  board[ROWS][COLS], int  rows, int  cols, char  set);
void  Display(char  board[ROWS][COLS], int  rows, int  cols);
void  Setmine(char  board[ROWS][COLS], int  row, int  col);