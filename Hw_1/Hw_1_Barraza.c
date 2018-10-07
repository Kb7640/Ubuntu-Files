#include <stdio.h>
#include <stdlib.h> 
//billfunc calculates the # of bills that fit into the given amount
int billfunc(int ammount, int billvalue){
   //printf("I'm in bill value for %d\n!", billvalue);
   int numbills;
   numbills = ammount/billvalue;
   return numbills;
}
//this function subtracts the value number of bills from billlfunc() from the total value of money
int valuefunc(int ammount, int numbills, int billvalue)
{
	int newammt = ammount - (numbills * billvalue);
	return newammt;
}

int main(){
   int curramt;
   int billarray[4] = {0};//initialize arrays to 0s
   int billdenom[4] = {20,10,5,1}; //prestore the denomiantor valor
   printf("Hello! Welcome to the currency counter!\n");
   printf("Please enter a whole dollar ammount: $");
   scanf("%d", &curramt);
   printf("You entered: $%d\n", curramt);

   for(int i = 0; i < 4; i = i+1){
      if(curramt >= billdenom[i]){
	billarray[i] = billfunc(curramt, billdenom[i]);
	curramt = valuefunc(curramt, billarray[i], billdenom[i]);

      }
   }
   printf("You should pay with the following bills: \n");
   printf("$20 bills: %d\n", billarray[0]);
   printf("$10 bills: %d\n", billarray[1]);
   printf("$5 bills: %d\n", billarray[2]);
   printf("$1 bills: %d\n", billarray[3]);

   return 0;
}
