#include <stdlib.h>
#include <stdio.h>
#include "src/sort.h"

#define SMALL   2
#define MEDIUM  10
#define LARGE   20

/* Unsorted arrays */
static int sUnsorted[SMALL]  = { 5, 1 };
static int mUnsorted[MEDIUM] = { 20, 18, 16, 14, 12, 9, 7, 5, 3, 1 };
static int lUnsorted[LARGE]  = { 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5, 1 };
/* Sorted arrays */
static int sSorted[SMALL]    = { 1, 5 };
static int mSorted[MEDIUM]   = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 20 };
static int lSorted[LARGE]    = { 1, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95 };

// Main Functions
void print_array(int* a, int length){
	int i = 0;
	printf("[");
	do {
		if(i > 0) printf(", ");
		printf("%d", a[i]);
	} while(++i < length);
	printf("]\n");
}

int main(void)
{
  int *arr, len, status;

  printf("\nMerge Sort\n");
  len = sizeof(int) * SMALL;
  arr = (int *)malloc(len); 
  memcpy(arr, sUnsorted, len);
  print_array(arr, SMALL);
  status = sort(arr, SMALL, "Onlogn", MERGE);
  printf("status: %s\n", (status == 0) && (memcmp(arr,sSorted, len) == 0) ? "success" : "fail");
  print_array(arr, SMALL);
  free(arr);

  printf("\nInsertion Sort\n");
  len = sizeof(int) * MEDIUM;
  arr = (int *)malloc(len); 
  memcpy(arr, mUnsorted, len);
  print_array(arr, MEDIUM);
  status = sort(arr, MEDIUM, "On2", INSERTION);
  printf("status: %s\n", (status == 0) && (memcmp(arr, mSorted, len) == 0) ? "success" : "fail");
  print_array(arr, MEDIUM);
  free(arr);

  printf("\nRadix Sort\n");
  len = sizeof(int) * LARGE;
  arr = (int *)malloc(len); 
  memcpy(arr, lUnsorted, len);
  print_array(arr, LARGE);
  status = sort(arr, LARGE, "On", RADIX);
  printf("status: %s\n", (status == 0) && (memcmp(arr, lSorted, len) == 0) ? "success" : "fail");
  print_array(arr, LARGE);
  free(arr);

  return EXIT_SUCCESS;
}