#include<stdio.h>
int main(){
int pos=2,value=10;
  int arr[5]={1,2,3,4,5};
  for(int i=4;i>=pos;i--){
    arr [i+1]= arr[i];
    }
    arr[pos]=value;
  for (int i=0;i<4;i++)
  printf("%d",arr[i]);
 
}
