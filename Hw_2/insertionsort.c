#include <stdio.h>
#include <stdlib.h>
#include "insertionsort.h"


int insertionSort(int arr[], int size, int * ncompares_ptr, int *nswaps_ptr){
   int index = 0;
   int startIndex = 0; 
   int tempVal = 0;
   int compareTo = 0; 
   //if the number is bigger than the next one, you move on. If it's not, you save the next one and compare it to all the rest before. 
   //if a number is smaller than all of the ones before it, you move it until it's bigger than the one before it.
//   printf("in insertionsort.\n");
   while(startIndex < size-1){
      compareTo = startIndex + 1;
      index = startIndex;
      tempVal = arr[compareTo];

      do{
         #ifdef IS_Verbose
            printf("Items compared: [%d, %d] ", arr[index], arr[compareTo]);
         #endif

         if(arr[index] > tempVal){
            arr[compareTo] = arr[index];
            #ifdef IS_Verbose
               printf("==> swapped, [%d,%d]\n", arr[compareTo], arr[index]);
            #endif
            *nswaps_ptr = *nswaps_ptr+1;
         }
         else{
            tempVal = arr[index];
            #ifdef IS_Verbose
               printf("not swapped.\n");
            #endif
         }
         *ncompares_ptr = *ncompares_ptr+1;
         compareTo--;
         index--;

      }while((arr[index]>tempVal) && (compareTo > 0) );
      #ifdef IS_Verbose
         printf("Current Array: [ ");
         for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
         }
         printf("]\n");
      #endif
      arr[compareTo] = tempVal;
      startIndex++;
   }

   printf("Final array: ");
   for(int i = 0; i < size; i++){
      printf("%d ", arr[i]);
   }

     printf("\n");
   printf("---Thinking ^_^ -----");
   printf("\n");
   printf("\n");
   printf("This is your newly sorted list!: ");
   printf("\n");
   for(int i = 0; i < size; i++){
      printf("%d ", arr[i]);
   }

   printf("\n");
   return 0;
}

