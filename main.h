
#include <stdio.h>
#include <math.h>
typedef struct complex {
    float real;
    float imag;
    float num;
    
} complex;
 
complex add(complex n1, complex n2);
  complex sub(complex n1, complex n2);
  complex mult(complex n1, int constant);
  double Abs(complex n1); 
 void swap(complex n1,complex n2); 


complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}

complex mult(complex n1, int constant){
   complex temp;
    temp.real = n1.real * constant;
    temp.imag = n1.imag * constant;
    return (temp);
}

double Abs(complex n1){
  complex temp;
  complex  x;
  temp.real = n1.real * n1.real;
    temp.imag = n1.imag * n1.imag;
    x.num = sqrt(temp.real+temp.imag);
    return (x.num);
}

void swap(complex n1, complex n2){
  complex temp;
    temp.real = n1.real;
    temp.imag = n1.imag;
     n1.real = n2.real;
     n1.imag = n2.imag;
     n2.real = temp.real;
     n2.imag = temp.imag;
}
