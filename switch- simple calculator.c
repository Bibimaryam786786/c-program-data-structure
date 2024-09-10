#include <stdio.h>

int main() {
  int a,b;
  char oper;
  
  printf("Enter the number 1: ");
  scanf("%d",&a);

  printf("Enter the number 2: ");
  scanf("%d",&b);
  printf("Enter the operation: ");
  scanf(" %c",&oper);
  switch(oper) {
    case'+' : printf("The sum is %d\n",a+b);
      break;
    case'-' : printf("The substraction is %d\n",a-b);
      break;
    case'*' : printf("The multiplication is %d\n",a*b);
      break;
    case'/' : printf("The division is %d\n",a/b);
      break;
    default : printf("invalid operation\n");
  }
      
  
}