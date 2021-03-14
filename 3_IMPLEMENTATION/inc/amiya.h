#ifndef _AMIYA_H__
#define _AMIYA_H__


typedef struct complex 
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex div(complex n1, complex n2);



#endif
