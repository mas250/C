#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){

  int num1, num2, low, high;

  printf("Enter the first number: ");
  scanf("%d",&num1 );

  printf("Enter the second number: ");
  scanf("%d",&num2 );

  if (num1 < num2){
    low  = num1;
    high = num2;

  }
  else{
    low  = num2;
    high = num1;
  }

  for (int i=low; i < high; i++){
    int count = 1;
    printf("iteration %d:\nvalue:%d", i,count++ );
    
  }




}
