#include<stdio.h>
#include<string.h>
int main()
{ char str[100],str1[100];
 scanf("%s",str);
 scanf("%s",str1);
 int result=strcmp(str,str1);
 if(result==0)
 printf("equal");
else if(result<0)
   printf("%s comes before %s",str,str1);
   else
  printf("%s comes after %s",str,str1);
}
   
