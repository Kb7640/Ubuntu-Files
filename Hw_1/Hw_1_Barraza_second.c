#include <stdio.h>
#include <stdlib.h>
int billfunc(int ammount, int billvalue){
   int numbills;
   numbills = ammount/billvalue;
   return numbills;
}


int valuefunc(int ammount, int *numbills, int billvalue){
   int newammt = ammount - (*numbills *billvalue);
   return newammt;

}
void pay_amount(int dollars, int *twenties, int *tens, int*fives, int*ones){
   int billdenom[4] = {20, 10,5,1};
   int * billarray[4] = {twenties, tens, fives, ones};
   int billnumholder;
   printf("You should pay with the following bills:\n");

   for(int i = 0; i < 4; i = i+1){
      if(dollars >= billdenom[i]){
       billnumholder = billfunc(dollars, billdenom[i]);
       billarray[i] = &billnumholder;
       dollars = valuefunc(dollars, billarray[i], billdenom[i]);
      
       printf("$%d bills: %d\n", billdenom[i], *billarray[0]);
           
      }
   }
}


int main(){
   int curramt;
   printf("Hello! Welcome to the currency counter!\n");
   printf("Please enter a whole dollar amount: $");
   scanf("%d", &curramt);
   printf("You entered: $%d\n", curramt);
   
   int *twenties = NULL, *tens = NULL, *fives = NULL, *ones = NULL;
   pay_amount(curramt, twenties, tens, fives, ones);
}
