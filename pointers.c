#include <stdio.h>

int main()
{

  float d = 1;
  float e = 2;
  float* g = &d;
  float* j = &e;


  printf("The address of d: %f\n The address of e: %f\n", e, d);

  printf("The value of d: %f\n The address of e: %f\n", &d, &e);

float* p = &e;
float* t = &d;
float p2 = *p;
float t2 = *t;
 *p = 25;
 *t = 20;

printf("e=%f,d=%f\n", e, d);

}
