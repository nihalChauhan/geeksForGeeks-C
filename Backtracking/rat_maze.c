#include <stdio.h>
#include <stdbool.h>
#define N 4

bool solve(int maze[N][N]);
bool solve_utility(int maze[N][N], int x, int y, int sol[N][N]);
bool isSafe(int maze[N][N], int x, int y);
void print(int sol[N][N]);

int main(){
    int maze[N][N]  =  {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    solve(maze);
    return 0;
}

bool solve_utility(int maze[N][N], int x, int y, int sol[N][N]){
  if(x == N-1 && y == N-1){
    sol[x][y] = 1;
    return true;
  }
  if(isSafe(maze, x, y)){
    sol[x][y] = 1;
    if(solve_utility(maze, x+1, y, sol))
      return true;
    if(solve_utility(maze, x, y+1, sol))
      return true;
    sol[x][y] = 0;
    return false;
  }
  return false;
}


void print(int sol[N][N]){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++)
      printf(" %d ", sol[i][j]);
    printf("\n");
  }
}

bool isSafe(int maze[N][N], int x, int y){
  if(x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
    return true;
  return false;
}

bool solve(int maze[N][N]){
  int sol[N][N] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  };

  if(!solve_utility(maze, 0, 0, sol)){
    printf("Solution doesn't exist");
    return false;
  }
  print(sol);
  return true;
}
