#include <stdlib.h>
#include <stdio.h>
#include "src/sort.h"

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
  int *array, len, status;
  
  printf("\n\nTestRadixArrayNull \n");
  len = sizeof(null_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, null_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  // printf("\n\nTestRadixArrayMaxMin \n");
  // len = sizeof(max_min_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // memcpy(array, max_min_array, sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);
  // free(array);

  // printf("\n\nTestRadixArrayMinMax \n");
  // len = sizeof(min_max_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // memcpy(array, min_max_array, sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);
  // free(array);

  // printf("\n\nTestRadixArrayMaxMax \n");
  // len = sizeof(max_max_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // memcpy(array, max_max_array, sizeof(int) * len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);  
  // free(array);

  // printf("\n\nTestRadixArrayMinMin \n");
  // len = sizeof(min_min_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // memcpy(array, min_min_array, sizeof(int) * len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);  
  // free(array);

  printf("\n\nTestRadixArrayDuplicate \n");
  len = sizeof(duplicate_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  memcpy(array, duplicate_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);  
  free(array);

  printf("\n\nTestRadixArrayOdd \n");
  len = sizeof(odd_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  memcpy(array, odd_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);  
  free(array);
  
  printf("\n\nTestRadixArrayEven \n");
  len = sizeof(even_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  memcpy(array, even_array, sizeof(int) * len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);  
  free(array);

  // printf("\n\nTestRadixArrayNegative \n");
  // len = sizeof(negative_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // memcpy(array, negative_array, sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);  
  // free(array);

  printf("\n\nTestRadixArrayPositive \n");
  len = sizeof(positive_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, positive_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  // printf("\n\nTestRadixArrayMixed \n");
  // len = sizeof(mixed_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // memcpy(array, mixed_array, sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);
  // free(array);

  printf("\n\nTestRadixArrayOne \n");
  len = sizeof(one_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, one_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  printf("\n\nTestRadixArrayUnsorted \n"); 
  len = sizeof(unsorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, unsorted_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  printf("\n\nTestRadixArraySorted \n");
  len = sizeof(sorted_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, sorted_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  printf("\n\nTestRadixArrayAllOnes \n");
  len = sizeof(ones_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, ones_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  printf("\n\nTestRadixArrayAllZeros \n");
  len = sizeof(zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, zeros_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  printf("\n\nTestRadixArrayTwoZeros \n");
  len = sizeof(two_zeros_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_zeros_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);

  printf("\n\nTestRadixArrayTwoMax \n");
  len = sizeof(two_max_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, two_max_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);
  
  // printf("\n\nTestRadixArrayTwoMin \n");
  // len = sizeof(two_min_array) / sizeof(int);
  // array = (int *)malloc(sizeof(int) * len);
  // memcpy(array, two_min_array, sizeof(int) * len);
  // printf("Unsorted: \n");
	// print_array(array, len);
  // status = sort(array, len, (char *)"On", RADIX);
  // printf("Status: %d\n", status);
  // printf("Sorted: \n");
	// print_array(array, len);
  // free(array);
  
  printf("\n\nTestRadixArrayLarge \n");
  len = sizeof(large_array) / sizeof(int);
  array = (int *)malloc(sizeof(int) * len);
  memcpy(array, large_array, sizeof(int) * len);
  printf("Unsorted: \n");
	print_array(array, len);
  status = sort(array, len, (char *)"On", RADIX);
  printf("Status: %d\n", status);
  printf("Sorted: \n");
	print_array(array, len);
  free(array);
  
  return EXIT_SUCCESS;
}