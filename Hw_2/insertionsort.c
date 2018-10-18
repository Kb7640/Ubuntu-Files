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

/*int insertionSort(int arr[], int size, int * ncompares_ptr, int *nswaps_ptr){
   int index = 0; 
   int tempVal = 0;
   int compareTo = 0; 
   //if the number is bigger than the next one, you move on. If it's not, you save the next one and compare it to all the rest before. 
   //if a number is smaller than all of the ones before it, you move it until it's bigger than the one before it.
   printf("in insertionsort.\n");
   while(index < size){
      int compareTo = index +1;
      int tempVal = arr[compareTo];
      do{
         if(index > arr[compareTo]){
            printf("arr[%d] = %d is bigger than arr[%d] = %d\n.", index, arr[index], index+1, arr[index+1]);
            tempVal = arr[compareTo];
            arr[compareTo] = arr[index];
            compareTo--;
         } 
        
    
      }while((arr[compareTo] > tempVal)||compareTo !=0);//keep the loop going while the number is bigger than the previous ones, or unless we're at the end
      index++;
      arr[compareTo] = tempVal;
   }
   
 
  printf("Out of do-while\n");
   printf("We are at index # %d, arr[%d] = %d.\n", index, index, arr[index]);
   printf("Final array: ");
   for(int i = 0; i < size; i++){
      printf(" %d", arr[i]);
   }

   printf("\n");
   return 0;
}*/
