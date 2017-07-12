#include <stdio.h>
#include <stdbool.h>

#define N 9

bool solve_sudoku(int grid[N][N]);
bool find_unassigned(int grid[N][N], int *row, int *col);
bool is_safe(int grid[N][N], int row, int col, int num);
bool used_in_row(int grid[N][N], int row, int num);
bool used_in_col(int grid[N][N], int col, int num);
bool used_in_box(int grid[N][N], int sr, int sc, int num);

int main(){
  int grid[N][N] = {
    {8,0,0,0,0,0,0,0,0},
    {0,0,3,6,0,0,0,0,0},
    {0,7,0,0,9,0,2,0,0},
    {0,5,0,0,0,7,0,0,0},
    {0,0,0,0,4,5,7,0,0},
    {0,0,0,1,0,0,0,3,0},
    {0,0,1,0,0,0,0,6,8},
    {0,0,8,5,0,0,0,1,0},
    {0,9,0,0,0,0,4,0,0}
  };
  if(solve_sudoku(grid)){
    for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
        printf("%d ", grid[i][j]);
        if((j+1)%3==0 && j!=N-1)
          printf("| ");
      }

      if((i+1)%3==0 && i!=N-1){
        printf("\n");
        for(int k=0; k<N+2; k++)
          printf("--");
      }
      printf("\n");
    }
  }
  else
    printf("No solution\n");
  return 0;
}

bool solve_sudoku(int grid[N][N]){
  int row, col;
  if(!find_unassigned(grid, &row, &col))
    return true;
  for(int num=1; num<=9; num++){
    if(is_safe(grid, row, col, num)){
      grid[row][col] = num;
      if(solve_sudoku(grid)) return true;
      grid[row][col] = 0;
    }
  }
  return false;
}

bool find_unassigned(int grid[N][N], int *row, int *col){
  for((*row)=0; *row<N; (*row)++)
    for((*col)=0; *col<N; (*col)++)
      if(grid[*row][*col] == 0)
        return true;
  return false;
}

bool is_safe(int grid[N][N], int row, int col, int num){
  return (!used_in_row(grid,row,num)
       && !used_in_col(grid,col,num)
       && !used_in_box(grid,row-row%3,col-col%3,num));
}

bool used_in_row(int grid[N][N], int row, int num){
  for(int i=0; i<N; i++)
    if(grid[row][i] == num)
      return true;
  return false;
}

bool used_in_col(int grid[N][N], int col, int num){
  for(int i=0; i<N; i++)
    if(grid[i][col] == num)
      return true;
  return false;
}

bool used_in_box(int grid[N][N], int sr, int sc, int num){
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
      if(grid[i+sr][j+sc] == num)
        return true;
  return false;
}
