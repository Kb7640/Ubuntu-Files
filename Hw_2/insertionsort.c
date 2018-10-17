#include <stdio.h>
#include <stdlib.h>
#include "insertionsort.h"

int insertionSort(int arr[], int size, int * ncompares_ptr, int *nswaps_ptr){
   int toBeSorted= 0; 
   *ncompares_ptr = 0;
   *nswaps_ptr = 0;
   int tempVal =0;
   int tempValIndex = 0;
   
   //do{
      for(int i = 0; i < size; i++){
            #ifdef IS_Verbose
               printf("The current array: [");
               for(int i = 0; i < size; i++){
                  printf("%d, ", arr[i]);
               }
               printf("]\n");
            #endif       

            
            int j = i+1;
            tempVal = arr[j];

            while(tempVal < arr[j-1] &&j >= 0)//while this smaller value is less than previous values
            {
                // printf(" j = %d  i = %d\n", j, i); 
                 *nswaps_ptr = *nswaps_ptr + 1;
                #ifdef IS_Verbose
                   printf("Items shifted: [%d, %d]\n", arr[j], arr[j-1]);
                #endif 
                arr[j] = arr[j-1];
                
                j--;
             } 
            arr[j] = tempVal; 
            #ifdef IS_Verbose
               printf("Items compared: [%d, %d]. \n", arr[i], arr[i+1]);
            #endif

            *ncompares_ptr = *ncompares_ptr +1;
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
