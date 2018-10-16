#include <stdio.h>
#include <stdlib.h>
#include "selectionsort.h"



int selectionSort(int arr[], int size,int * ncompares_ptr, int * nswaps_ptr){
   int minval = arr[0], minIndex = 0;
  // int sorted = 1;
   int toBeSorted = 0;//this variable stores the value up to which the array has been sorted
   int tempVar = 0;
   *ncompares_ptr = 0;
   *nswaps_ptr = 0;
   printf("This is the size we are working with: %d", size);
   do{
      #ifdef SS_Verbose
         printf("The current array: [");
         for(int i = 0; i < size; i++){
            printf("%d, ", arr[i]);
         }
         printf("]\n");

//         printf("This is minval: %d\n", minval);
  //       printf("This is minindex: %d\n", minIndex);
      #endif
//      sorted = 1;
//         #ifdef SS_Verbose
  //              printf("Items compared: [%d, %d]", arr[toBeSorted], minval);
    //     #endif
 
      for(int i = toBeSorted+1; i < size; i ++){
         //compare the current element with the smallest value encountered
         if(arr[i] < minval){
             
             minval = arr[i];
             minIndex = i;
          //   sorted = 0;
         }
         *ncompares_ptr = *ncompares_ptr +1;
 //        printf("\n"); 
         #ifdef SS_Verbose
                printf("Items compared: [%d, %d].\n", arr[toBeSorted], minval);
         #endif

      }
       
       //this performs a swap
       if(toBeSorted != minIndex){
          tempVar = arr[toBeSorted];
          arr[toBeSorted] = arr[minIndex];
          arr[minIndex] = tempVar;
          *nswaps_ptr = *nswaps_ptr +1;
          #ifdef SS_Verbose
             printf("=> swapped [%d, %d]\n", arr[minIndex], arr[toBeSorted]);
          #endif
       }
       else{
         #ifdef SS_Verbose
             printf(" => not swapped [%d, %d].\n", arr[minIndex], arr[toBeSorted]);
         #endif
       }

       toBeSorted++;
       minval = arr[toBeSorted]; 
       minIndex = toBeSorted;
   }while(toBeSorted < size); //if a swap has been performed, this will run again
   
   printf("\n");
   printf("---Thinking ^_^ ---");
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

