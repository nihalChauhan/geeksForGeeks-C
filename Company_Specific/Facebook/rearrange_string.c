#include <stdio.h>
#include <string.h>

void rearrange_str(char a[50]);
void quickSort(char a[], int beg, int end);
int partition(char a[], int beg, int end);
void swap(char *x, char *y);


int main(){
  char a[50];
  fgets(a, 50, stdin);
  rearrange_str(a);
  printf("%s\n", a);
  return 0;
}

void rearrange_str(char a[50]){
  int n = strlen(a);
  int i, k, j, sum;
  for(i=0; i<n-1; i++)
    if(a[i]<='9')
      a[i]+=60;
  quickSort(a, 0, n-2);

  k=0;
  sum=0;
  for(i=0; i<n-1; i++)
    if(a[i]>='0'+60){
      if(!k){
        k=1;
        j=i;
      }
      sum+=a[i]-60-'0';
    }
  printf("%d %d\n", sum, j);

  int temp = sum;
  i=0;
  while(temp){
    temp/=10;
    i++;
  }
  a[j+i]='\0';
  while(sum){
    a[j+i-1] = sum%10 + '0';
    sum/=10;
    i--;
  }

}

void quickSort(char a[], int beg, int end){
  if(beg<end){
    int p = partition(a, beg, end);
    quickSort(a, beg, p-1);
    quickSort(a, p+1, end);
  }
}

int partition(char a[], int beg, int end){
  int i;
  int pivot = a[end];
  int j = beg - 1;
  for(i=beg; i<end; i++){
    if(a[i] <= pivot){
      j++;
      swap(&a[j], &a[i]);
    }
  }
  swap(&a[j+1], &a[end]);
  return j+1;
}

void swap(char *x, char *y)
{
  char t = *x;
  *x = *y;
  *y = t;
}
