#include <stdio.h>
union book{
int num;
char name[2];
float price;
};
int main(){
  union book temp;
  temp.num=25;
  strcpy(temp.name,"ha");
  temp.price=100.0;
  printf("book number is %d\n",temp.num);
  printf("book name is %s\n",temp.name);
  printf("book price is %f\n",temp.price);  
}