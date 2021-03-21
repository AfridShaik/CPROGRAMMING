#include<stdio.h>
#include"Arthematic.h"
typedef struct complex_t{

float real;

float imaginary;

} complex_t;

int main(){
    complex_t strr;
    strr.real = 1;
    strr.imaginary = 1;
    Sum(strr.real , strr.imaginary);
    Difference(strr.real , strr.imaginary);
    Product(strr.real , strr.imaginary);
    Division(strr.real , strr.imaginary);
    return 0;
}