#include <stdio.h>

int main() {
int i=1,n,fact=i;
  printf("Enter a number:");
  scanf("%d",&n);
  do{
    fact=fact+i;
    i++;
    
  }while(i<=n);
    printf("factorial of %d is %d",n,fact);
}
  
