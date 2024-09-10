#include<stdio.h>
int main(){
int i,j,n;
  printf("enter the number\n");
  scanf("%d",&n);
  if(n<2){
    printf("the number is not prime\n");
  for(i=2;i<n;i++)
    if(n%i==0)
      j=1;}
  if(j==0)
    printf("the number is prime\n");
  else
    printf("the number is not prime\n");
}