//this is where I will link all of the codes together
//HW 2 Main File

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bubblesort.c"
#include "selectionsort.c" 
#include "insertionsort.c"
#define size 16
int main(){

//each array will contain the numbers 0 through 15 in different orders 
   int ascendvals[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
   int descendvals[16] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//this sequence was made using www.random.org/sequences using the numbers 0 thorugh 14
   int randomvals[16] = {2, 8, 1, 0, 3, 11, 12, 4, 6, 13, 7, 14, 10, 5, 9, 15};

//these are the variables that will hold the number of swaps, compares)
//int swapsBubble = 0, compareBubble = 0, swapsSelect = 0, compareSelect = 0, swapsInsert = 0, swapsCompare = 0;

   int swaps = 0; 
   int compares = 0;
   int *nswaps_ptr = &swaps;
   int *ncompares_ptr = &compares;
//these arrays will store the number of swaps and compares for each algorithm on each array in the order of: 
//{ascending bubble, ascending select, ascending insert, descending bubble, descending select, descending insert, random bubble, random select, random insert}

   int swapRecord [9] = {0}; 
   int compareRecord[9] = {0};

   printf("Hello! This is the sorting machine. We are going to run three different algorithms on three different arrays.\n");
   printf("These arrays containt the numbers 0 to 15 in ascending, descending and in random order.\n");
   printf("These arrays will be placed through three separate sorting algorithms: Bubble Sort, Selection Sort, and Insertion Sort. \n");

   //Running the algorithms on the ascending array 
   bubbleSort(ascendvals, size, ncompares_ptr, nswaps_ptr);
      printf("There were %d swaps performed in this bubble sort. \n", swaps);
     printf("THere were %d compares perfomred in this bubble sort. \n", compares);
 /*     swapRecord[0] = *nswaps_ptr;
     compareRecord[0] = *ncompares_ptr;
 */
   selectionSort(ascendvals, size, ncompares_ptr, nswaps_ptr);
      printf("There were %d swaps performed in this selection sort. \n", swaps);
      printf("THere were %d compares performed in this selection sort. \n", compares);
/*      swapRecord[1] = *nswaps_ptr;
      compareRecord[1] = *ncompares_ptr;
 */
    insertionSort(ascendvals, size, ncompares_ptr, nswaps_ptr);
     printf("There were %d swaps performed in this insertion sort. \n", swaps);
      printf("THere were %d compares performed in this insertion sort. \n", compares);
/*       swapRecord[2] = *nswaps_ptr;
  */     compareRecord[2] = *ncompares_ptr;


   bubbleSort(descendvals, size, ncompares_ptr, nswaps_ptr);
    printf("There were %d swaps performed in this bubble sort. \n", swaps);
      printf("THere were %d compares perfomred in this bubble sort. \n", compares);
/*      swapRecord[3] = *nswaps_ptr;
      compareRecord[3] = *ncompares_ptr;
*/
     selectionSort(descendvals, size, ncompares_ptr, nswaps_ptr);
        printf("There were %d swaps performed in this selection sort. \n", swaps);
        printf("THere were %d compares performed in this selection sort. \n", compares);
/*        swapRecord[4] = *nswaps_ptr;
        compareRecord[4] = *ncompares_ptr;
*/  
  insertionSort(descendvals, size, ncompares_ptr, nswaps_ptr);
      printf("There were %d swaps performed in this insertion sort. \n", swaps);
      printf("THere were %d compares performed in this insertion sort. \n", compares);
/*      swapRecord[5] = *nswaps_ptr;
      compareRecord[5] = *ncompares_ptr;
*/

   bubbleSort(randomvals, size, ncompares_ptr, nswaps_ptr);
     printf("There were %d swaps performed in this bubble sort. \n", swaps);
    printf("THere were %d compares perfomred in this bubble sort. \n", compares);
/*     swapRecord[6] = *nswaps_ptr;
      compareRecord[6] = *ncompares_ptr;
 */
   selectionSort(randomvals, size, ncompares_ptr, nswaps_ptr);
      printf("There were %d swaps performed in this selection sort. \n", swaps);
      printf("THere were %d compares performed in this selection sort. \n", compares);
/*      swapRecord[7] = *nswaps_ptr;
      compareRecord[7] = *ncompares_ptr;
*/
    insertionSort(randomvals, size, ncompares_ptr, nswaps_ptr);
      printf("There were %d swaps performed in this insertion sort. \n", swaps);
     printf("THere were %d compares performed in this insertion sort. \n", compares);
/*      swapRecord[8] =*nswaps_ptr;
      compareRecord[8] = *ncompares_ptr;
*/

/*printf("This is the summary of the sorting algorithms!\n");
printf("An ascending list: \n");

   printf("   Bubble: swaps--%d, compares-- %d\n", *swaps[0], *compares[0] );
   printf("   Selection: swaps--%d, compares-- %d\n", *swaps[1],* compares[1] );
  printf("   insertion: swaps--%d, compares-- %d\n", *swaps[2], *compares[2] );

printf("An descending list: \n");

   printf("   Bubble: swaps--%d, compares-- %d\n", swaps[3], compares[3] );
   printf("   Selection: swaps--%d, compares-- %d\n", swaps[4], compares[4] );
  printf("   insertion: swaps--%d, compares-- %d\n", swaps[5], compares[5] );
printf("A random list: \n");

   printf("   Bubble: swaps--%d, compares-- %d\n", swaps[6], compares[6] );
   printf("   Selection: swaps--%d, compares-- %d\n", swaps[7], compares[7] );
  printf("   insertion: swaps--%d, compares-- %d\n", swaps[8], compares[8] );

*/

   return 0;
}
   
   

