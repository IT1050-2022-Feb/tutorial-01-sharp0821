/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
      int mark,i,total=0;
   
   for(i=1;i<3;i++){ 
      printf("Enter your marks:\n");
      scanf("%d",&mark);
      
      total+=mark;
   }
   printf("Average mark is:%d",total/i);
  
  return 0;
}

