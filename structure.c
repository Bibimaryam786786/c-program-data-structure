#include <stdio.h>
struct book{
int num;
char name[20];
float price;
};
int main(){
  struct book temp;
  temp.num=25;
  strcpy(temp.name,"harry potter");
  temp.price=100.0;
  printf("book number is %d\n",temp.num);
  printf("book name is %s\n",temp.name);
  printf("book price is %f\n",temp.price);  
}