#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.h"

//#ifdef BS_Verbose
   //to my understanding, BS_Verboseexecute the following steps whenever it is called
  // printf("Compares completed: %d ", compares);
   //printf("Swaps completed: %d", swaps);
//#endif 

int bubbleSort(int arr[], int size, int *ncompares_ptr, int *nswaps_ptr){
//create an array to hold in the values
   //int values[6]={0};//set it to zero
   int sorted = 1; // 0 means false, 1 means true
//prompt for values
   //int swaps = 0; //create the variables to hold the number of swaps and compares
   //int compares = 0;
   //int *nswaps_ptr = &swaps; //point to these so that the values can be used and retained from 
   //int *ncompares_ptr = &compares;

   #ifdef BS_Verbose
     printf("BS_Verbose is defined.\n");
     //printf("Compares completed: %d ", compares); 
     // printf("Swaps completed %d", swaps);
   #endif
   
   *ncompares_ptr = 0;
   *nswaps_ptr = 0;

//   printf("Hello! This is the bubble sorting machine.\n Please enter six whole numbers for us to sort!\n");
  // printf("(Example: 4 5 6 7 2 0): ");
   
//scan in the values
   //for (int i=0; i < 6; i++){
     // scanf("%d", &values[i]);
//      printf("%d", values[i]);
   //}
   
  // bubblesort(values, 6, nswaps_ptr, ncompares_ptr); 
// start at index n of array
   do{
      #ifdef BS_Verbose
         printf("Current Array Status: ");
         for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
         } 
         printf("\n");
      #endif

      sorted =1;
      for(int i =0; i < size -1; i++){
            #ifdef BS_Verbose
               printf("Items compared: [%d,%d], ", arr[i], arr[i+1]);
            #endif
         if(arr[i] > arr[i+1]&& i < size-1){
            *nswaps_ptr = *nswaps_ptr +1;
              sorted = 0;
             
            #ifdef BS_Verbose
               printf("=> swapped [%d,%d]\n", arr[i+1], arr[i]);  
            #endif
            int tempvara = arr[i];
            int tempvarb= arr[i+1];

            arr[i+1] = tempvara;
            arr[i] = tempvarb;
         }
        else{
           #ifdef BS_Verbose
              printf("=> not swapped [%d,%d]\n", arr[i], arr[i+1]);
           #endif
        }
            *ncompares_ptr = *ncompares_ptr + 1;
      //printf("These values were being compared, %d and %d \n", arr[i], arr[i+1]);  
   }
   }while(sorted == 0);
   printf("\n");
   printf("---Thinking ^_^ -----");
   printf("\n");
   printf("\n");
   printf("This is your newly sorted list!: ");
   printf("\n");
   for(int i = 0; i < size; i++){
      printf("%d ", arr[i]);
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
