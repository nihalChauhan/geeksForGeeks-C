#include <stdio.h>
#include <string.h>
#define MAX 256

void search(char a[], char b[]);

int main(){
  char a[20], b[20];
  scanf("%s", a);
  scanf("%s", b);
  search(a, b);
  return 0;
}

int compare(int pattern[], int window[]){
  for(int i=0; i<MAX; i++)
    if(pattern[i]!=window[i])
      return 0;
  return 1;
}

void search(char a[], char b[]){
  int n = strlen(a);
  int m = strlen(b);
  int i;
  int pattern[MAX]={0}, window[MAX]={0};
  for(i=0; i<m; i++){
    pattern[(int)b[i]]++;
    window[(int)a[i]]++;
  }
  for(i=m; i<n; i++){
    if(compare(pattern, window))
      printf("Found at : %d\n", i-m+1);

    window[(int)a[i]]++;
    window[(int)a[i-m]]--;
  }
  if(compare(pattern, window))
    printf("Found at : %d\n", n-m+1);
}
