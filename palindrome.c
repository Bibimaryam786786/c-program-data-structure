#include<stdio.h>
int main(){
int n,originalnum,reversednum=0,remainder,iteration=1;
printf("enter an integer\n");
scanf("%d",&n);
originalnum=n;
while(n!=0){
  remainder=n%10;
  reversednum=reversednum*10+remainder;
  n/=10;
  iteration++;
}
if(originalnum==reversednum)
  printf("the integer is palindrome\n");
else 
  printf("the number is not palindrome\n");
}

