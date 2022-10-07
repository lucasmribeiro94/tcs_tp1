#include <stdlib.h>
#include <string.h>
#include <limits.h>

// Constants (unsorted arrays)
static const int null_array[] = {};
static const int max_min_array[] = { INT_MAX, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, INT_MIN };
static const int min_max_array[] = { INT_MIN, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, INT_MAX };
static const int max_max_array[] = { INT_MAX+1, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, INT_MAX-1 };
static const int min_min_array[] = { INT_MIN-1, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, INT_MIN+1 };
static const int duplicate_array[] = { 50, 40, 40, 35, 25, 25, 20, 15, 10, 5 };
static const int odd_array[] = { 105, 95, 85, 75, 65, 55, 45, 35, 25, 15, 5 };
static const int even_array[] = { 100, 90, 80, 70, 60, 50, 40, 30, 20, 10, 0 };
static const int negative_array[] = { -5, -10, -15, -20, -25, -30, -35, -40, -45, -50, -55, -60 };
static const int positive_array[] = { 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5 };
static const int mixed_array[] = { -5, 60, -10, 55, -15, 50, -20 };
static const int one_array[] = { 5 };
static const int unsorted_array[] = { 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5 };
static const int sorted_array[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 60, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
static const int ones_array[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static const int zeros_array[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const int two_zeros_array[] = { 0, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
static const int two_max_array[] = { INT_MAX, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, INT_MAX };
static const int two_min_array[] = { INT_MIN, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, INT_MIN };
static const int large_array[] = { 125, 120, 115, 110, 105, 100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 15, 10, 5 };

// Constants (sorted arrays)
static const int max_min_sorted[] = { INT_MIN, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX };
static const int min_max_sorted[] = { INT_MIN, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX };
static const int max_max_sorted[] = { INT_MAX+1, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MAX-1 };
static const int min_min_sorted[] = { INT_MIN+1, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, INT_MIN-1 };
static const int duplicate_sorted[] = { 5, 10, 15, 20, 25, 25, 35, 40, 40, 50 };
static const int odd_sorted[] = { 5, 15, 25, 35, 45, 55, 65, 75, 85, 95, 105 };
static const int even_sorted[] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
static const int negative_sorted[] = { -60, -55, -50, -45, -40, -35, -30, -25, -20, -15, -10, -5 };
static const int positive_sorted[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60 };
static const int mixed_sorted[] = { -20, -15, -10, -5, 50, 55, 60 };
static const int one_sorted[] = { 5 };
static const int unsorted_sorted[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
static const int sorted_sorted[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 60, 60, 65, 70, 75, 80, 85, 90, 95, 100 };
static const int ones_sorted[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static const int zeros_sorted[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const int two_zeros_sorted[] = { 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const int two_max_sorted[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, INT_MAX, INT_MAX };
static const int two_min_sorted[] = { INT_MIN, INT_MIN, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
static const int large_sorted[] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115, 120, 125 };

// Functions
void counting_sort(int*, int);
void radix_sort(int*, int);
void bubble_sort(int*, int);
void insertion_sort(int*, int);
void selection_sort(int*, int);
void heap_sort(int*, int);
void merge_sort(int*, int, int);
void quick_sort(int*, int, int);
int sort(int*, int, char*, int);

enum types{COUNTING, RADIX, BUBBLE, INSERTION, SELECTION, HEAP, MERGE, QUICK};