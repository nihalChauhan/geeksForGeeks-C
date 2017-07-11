#include <stdio.h>
#include <stdbool.h>

bool n_queens(int n);
bool solve(int board[10][10], int n, int col);
bool is_safe(int board[10][10], int n, int row, int col);

int main(){
  int n;
  scanf("%d", &n);
  if(!n_queens(n))
    printf("Solution does not exist\n");
  return 0;
}

bool n_queens(int n){
  int board[10][10] = {0};
  if(solve(board, n, 0)){
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(board[i][j]) printf("+ ");
        else printf("- ");
      }
      printf("\n");
    }
    return true;
  }
  return false;
}

bool solve(int board[10][10], int n, int col){
  if(col>=n)
    return true;
  for(int i=0; i<n; i++){
    if(is_safe(board, n, i, col)){
      board[i][col] = 1;
      if(solve(board, n, col+1))
        return true;
      board[i][col] = 0;
    }
  }
  return false;
}

bool is_safe(int board[10][10], int n, int row, int col){
  int i, j;
  for(i=0; i<col; i++){
    if(board[row][i])
      return false;
  }
  for(i=row, j=col; i>=0 && j>=0; i--, j--)
    if(board[i][j])
      return false;
  for(i=row, j=col; i<n && j>=0; i++, j--)
    if(board[i][j])
      return false;
  return true;
}
