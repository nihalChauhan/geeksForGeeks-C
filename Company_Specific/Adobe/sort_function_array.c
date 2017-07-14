#include <stdio.h>

void apply_function(int nums[], int n, int coeff[3]);

int main(){
  int n, i;
  int nums[20];
  int coeff[3];
  scanf("%d", &n);
  for(i=0; i<n; i++)
    scanf("%d", &nums[i]);
  scanf("%d%d%d", &coeff[0], &coeff[1], &coeff[2]);
  apply_function(nums, n, coeff);
  for(i=0; i<n; i++)
    printf("%d ", nums[i]);
  printf("\n");
  return 0;
}

void apply_function(int nums[], int n, int coeff[3]){
  int i, j, k = 0;
  nums[0] = coeff[0]*nums[0]*nums[0]+coeff[1]*nums[0]+coeff[2];
  for(i=1; i<n; i++){
    nums[i] = coeff[0]*nums[i]*nums[i]+coeff[1]*nums[i]+coeff[2];
    if(nums[i]>nums[k])
      k = i;
  }
  int new_n[n], p;
  p=i=0; j=n-1;
  while(i<k && j>k){
    if(nums[i]<nums[j])
      new_n[p++]=nums[i++];
    else
      new_n[p++]=nums[j--];
  }
  for(;i<k;)
    new_n[p++]=nums[i++];
  for(;j>k;)
    new_n[p++]=nums[j--];
  new_n[p]=nums[k];

  for(i=0; i<n; i++)
    nums[i]=new_n[i];
}
