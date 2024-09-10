#include <stdio.h>
int main(){
int n,originalnum,remainder,result=0;
printf("enter the number\n");
scanf("%d",&n);
originalnum=n;
while(originalnum!=0)
{
  remainder=originalnum%10;
  result=result+remainder*remainder*remainder;
  originalnum=originalnum/10;
    }
if(result==n)
  printf("armstrong number");
  else 
  printf("not armstrong");
}
  










