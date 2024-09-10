#include <stdio.h>

int main(void) {
  int n,sum=0;
  printf("enter the number of terms\n");
  scanf("%d",&n);
  while(n!=0){
  sum=sum+(n%10);
    n=n/10;
  }
  printf("the sum is %d",sum);
  }