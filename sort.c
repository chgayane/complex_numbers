#include <stdio.h>
#include "main.h"

void bubbleSort(complex arr[], int n)
{
 for (int i = 0; i < n - 1; i++) {
  for (int j = 0; j < n - i - 1; j++) {
   if (Abs (arr[j]) > Abs (arr[j+1])) {
    swap(arr[j], arr[j+1]);
   }
  }
 }
}