
#include <stdio.h>
#include "sort.c"
#include "main.h"


int main(void) {
 int input,n,i;
    scanf("%d%d",&input,&n);
    double a,b;
    complex arr[n];
      for (i = 0; i < n; ++i)
      {
        scanf("%lf%lf",&a,&b);
        arr[i].real=a;
        arr[i].imag=b;
       }
    bubbleSort(arr[n], n); 

 return 0;
}
 
