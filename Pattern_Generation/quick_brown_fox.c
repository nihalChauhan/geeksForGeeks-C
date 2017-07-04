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

void print_f(int n, int i);
void print_x(int n, int i);

void print_j(int n, int i);
void print_m(int n, int i);
void print_p(int n, int i);
void print_s(int n, int i);


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

    printf(" ");
    print_r(d, i);

    printf(" ");
    print_o(d, i);

    printf(" ");
    print_w(d, i);

    printf(" ");
    print_n(d, i);

    printf("\n");
  }
  printf("\n");
  for(int i=0; i<d; i++){
    print_f(d, i);

    printf(" ");
    print_o(d, i);

    printf(" ");
    print_x(d, i);

    printf(" ");
    printf(" ");
    printf(" ");

    print_j(d, i);

    printf(" ");
    print_u(d, i);

    printf(" ");
    print_m(d, i);

    printf(" ");
    print_p(d, i);

    printf(" ");
    print_s(d, i);

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
  static int k = 1;
  int c=1;
  for(int j=1; j<n; j++){
    if(i==0 || i==((n-1)/2) || (i<n/2 && j==n-1)){
      printf("*");
      continue;
    }
    else if(i>(n-1)/2){
      if(j==k && c){
        printf("*");
        k=k+2; c=0;
        continue;
      }
    }
    printf(" ");
  }
}

void print_o(int n, int i){
  printf("*");
  for(int j=1; j<n-1; j++){
    if(i==0 || i==n-1)
      printf("*");
    else
      printf(" ");
  }
  printf("*");
}

void print_w(int n, int i){
  printf("*");
  int k = 2*((n+1)/2);
  static int x = 0;
  int c = 2;
  for(int j=1; j<=k; j++){
    if(i>=k/2-1 && (j==k/2+1+x || j==k/2-x) && c>0){
      printf("*");
      c--;
      if(c==0)
      x++;
    }
    else
      printf(" ");
    }
  printf("*");
}

void print_n(int n, int i){
  printf("*");
  static int x = 0;
  int c = 1;
  for(int j=0; j<n; j++){
    if(j==x && c){
      printf("*");
      c--; x++;
    }
    else
      printf(" ");
    }
  printf("*");
}

void print_f(int n, int i){
  printf("*");
  for(int j=1; j < n; j++){
    if(i==0)
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

void print_x(int n, int i){
  for(int j=0; j<=n; j++){
    if(j==i||(n-j==i))
      printf("*");
    else
    printf(" ");
  }
}

void print_j(int n, int i){
  int k = n%2?n:n-1;
  for(int j=0; j < k; j++){
    if(i==0 || j == k/2 || (j<(k+1)/2 && i==n-1))
      printf("*");
    else
      printf(" ");
  }
}

void print_m(int n, int i){
  printf("*");
  int k = 2*((n+1)/2);
  static int x = 0;
  int c = 2;
  for(int j=1; j<=k; j++){
    if(i<=k/2-1 && (j==x+1 || j==k-x) && c>0){
      printf("*");
      c--;
      if(c==0)
      x++;
    }
    else
      printf(" ");
    }
  printf("*");
}

void print_p(int n, int i){
  printf("*");
  for(int j=1; j<n; j++){
    if(i==0 || i==((n-1)/2) || (i<n/2 && j==n-1)){
      printf("*");
      continue;
    }
    printf(" ");
  }
}

void print_s(int n, int i){
  for(int j=0; j<n; j++){
    if(i==0 || i==n-1 || i==n/2 || (i<n/2 && j==0) || (i>n/2 && j==n-1)){
      printf("*");
      continue;
    }
    printf(" ");
  }
}
