#include<stdio.h>
#include<string.h>
 
int main() {
   int num, digits;
   char ch[10];
 
   printf("\nEnter the Number : ");
   scanf("%d", &num);
 
   sprintf(ch, "%d", num);
 
   digits = strlen(ch);
   printf("\nNumber of Digits : %d", digits);
 
   return(0);
}
