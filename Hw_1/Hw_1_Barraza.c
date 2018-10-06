#include <stdio.h>
#include <stdlib.h> 

int billfunc(int billvalue){
   printf("I'm in bill value for %d\n!", billvalue);
}

int main(){
   int dolammt;
   char response;
   printf("Hello! Welcome to the currency counter!\n");
   printf("Please enter a whole dollar amount: $");
   scanf("%d", &dolammt);
   printf("You entered: $%d\n", dolammt);
   
   if (dolammt > 20){
      billfunc(dolammt);
      }
   else if(dolammt > 10){
      billfunc(dolammt);
   }
   else if(dolammt > 5){
      billfunc(dolammt);
   }
   else if(dolammt > 1){
      billfunc(dolammt);
   }

   
   
   
   
   
   
   
   return 0;
}
