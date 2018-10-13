#include <stdio.h>
#include <stdlib.h>

 
int main(){
//create an array to hold in the values
   int values[6]={0};//set it to zero
   int sorted = 1; // 0 means false, 1 means true
//prompt for values
   printf("Hello! This is the bubble sorting machine.\n Please enter six whole numbers for us to sort!\n");
   printf("(Example: 4 5 6 7 2 0): ");
    
//scan in the values
   for (int i=0; i < 6; i++){
      scanf("%d", &values[i]);
//      printf("%d", values[i]);
   }

// start at index n of array
   do{
      sorted =1;
      for(int i =0; i < 6; i++){
         if(values [i] > values[i+1]&& i < 5){
            sorted = 0;
//            printf("The value being measured first is: %d", values[i]);
            int tempvara = values[i];
            int tempvarb= values[i+1];

            values[i+1] = tempvara;
            values[i] = tempvarb;
         }
      }
   }while(sorted == 0);
   printf("\n");
   printf("---Thinking ^_^ -----");
   printf("\n");
   printf("\n");
   printf("This is your newly sorted list!: ");
   printf("\n");
   for(int i = 0; i < 6; i++){
      printf("%d ", values[i]);
   }
//compare index n with index n of array
//if the element n is bigger than n+1, then switch, and mark "unsorted"
//
//move onto next element in array
//repeat 

//go to beginning of the array 
//
   printf("\n");
   return 0;
}
