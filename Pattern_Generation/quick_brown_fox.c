#include <stdio.h>

void print_t(int n, int i);
void print_h(int n, int i);
void print_e(int n, int i);

void print_q(int n, int i);
void print_u(int n, int i);
void print_i(int n, int i);
void print_c(int n, int i);
void print_k(int n, int i);

void print_b(int n, int i);
void print_r(int n, int i);
void print_o(int n, int i);
void print_w(int n, int i);
void print_n(int n, int i);


int main(){
  int d;
  scanf("%d",&d);
  for(int i=0; i<d; i++){

    print_t(d, i);

    printf(" ");
    print_h(d, i);

    printf(" ");
    print_e(d, i);

    printf(" ");
    printf(" ");
    printf(" ");

    print_q(d, i);

    printf(" ");
    print_u(d, i);

    printf(" ");
    print_i(d, i);

    printf(" ");
    print_c(d, i);

    printf(" ");
    print_k(d, i);

    printf(" ");
    printf(" ");
    printf(" ");

    print_b(d, i);

    printf("\n");
  }
  return 0;
}

void print_t(int n, int i){
  n = n%2?n:n-1;
  for(int j=0; j < n; j++){
    if(i==0 || j == n/2)
      printf("*");
    else
      printf(" ");
  }
}

void print_h(int n, int i){
  printf("*");
  for(int j=1; j < n-1; j++){
    if(i==n/2)
      printf("*");
    else
      printf(" ");
  }
  printf("*");
}

void print_e(int n, int i){
  printf("*");
  for(int j=1; j < n; j++){
    if(i==0 || i==n-1)
      printf("*");
    else if(i==n/2){
      if(j<n/2+1)
      printf("*");
      else
      printf(" ");
    }
    else printf(" ");
  }
}

void print_q(int n, int i){
  static int k = 0;
  int c = 0;
  printf("*");
  for(int j=1; j < n-1; j++){
    if(i==0 || i==n-1)
      printf("*");
    else if(i>=2*n/3){
      if(j==2*n/3+k && c!=1){
        printf("*");
        k++;c++;
      }
      else
      printf(" ");
    }
    else printf(" ");
  }
  printf("*");
}

void print_u(int n, int i){
  printf("*");
  for(int j=1; j < n-1; j++){
    if(i==n-1)
      printf("*");
    else
      printf(" ");
  }
  printf("*");
}

void print_i(int n, int i){
  int k = n%2?n:n-1;
  for(int j=0; j<k; j++){
    if(i==0 || i==n-1)
      printf("*");
    else{
      if(j==k/2)
        printf("*");
      else
        printf(" ");
    }
  }
}

void print_c(int n, int i){
  printf("*");
  for(int j=1; j<n; j++){
    if(i==0 || i==n-1)
      printf("*");
    else
      printf(" ");
  }
}

void print_k(int n, int i){
  printf("*");
  static int k = 1;
  int c = 1;

  for(int j=1; j<n+1; j++){
    if(j==(n-k) && c==1){
      printf("*");
      c = 0;
    }
    else
      printf(" ");
  }
  if(i<n/2) k+=2;
  else k-=2;
  if(i==n/2-1 && n%2==0)k-=2;
}

void print_b(int n, int i){
  printf("*");
  for(int j=1; j<n-1; j++){
    if(i==0 || i==n-1 || i==n/2)
      printf("*");
    else
      printf(" ");
  }
  printf("*");
}

void print_r(int n, int i){
  printf("*");
  for(int j=1; j<n-1; j++){
    if(i==0 || i==n-1 || i==n/2)
      printf("*");
    else
      printf(" ");
  }
  printf("*");
}
