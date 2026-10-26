#ifndef RUSH01_H
# define RUSH01_H

# define SIZE 4
# define CLUE_COUNT 16

int     parse_clues(const char *input, int clues[CLUE_COUNT]);
int     is_safe(int grid[SIZE][SIZE], int lig, int col, int num);
int     count_visible(int line[SIZE], int reverse);
int     check_completed_lig(int grid[SIZE][SIZE], int lig, int clues[CLUE_COUNT]);
int     check_solution(int grid[SIZE][SIZE], int clues[CLUE_COUNT]);
int     solve(int grid[SIZE][SIZE], int clues[CLUE_COUNT], int pos);
void    print_grid(int grid[SIZE][SIZE]);
void    print_error(void);

#endif
