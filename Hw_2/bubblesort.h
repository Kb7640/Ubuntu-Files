#include <stdio.h>
#include <stdlib.h>




#ifndef BUBBLESORT_H
#define BUBBLESORT_H
   int bubbleSort(int arr[], int size,int * ncompares_ptr, int * nswaps_ptr);
   //my understanding of this function prototype is that when this file is included 
   //in bubblesort.c, it will have this prototype pre-defined so it does not take space in the header section. 
   #define BS_Verbose //this is what initiates the symbol and allows it to be used in whatever file this header is
   //included in, then in the OTHER file, you can use #ifndef and define to avoid redundant code in that .c file
   //and still make sure that the symbol is useable.  

#endif

      
