/*Write a program to find the area of a triangle using following function signatures.
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);*/

#include <stdio.h>
void input(float *base,float *height)
{
  printf("enter the height of triangle=\n");
  scanf("%f",height);
  printf("enter the base of triangle=\n");
  scanf("%f",base);
}
void find_area(float base , float height, float *area)
{
  *area=(base*height)/2;
}
void output(float base, float height, float area)
{
  printf("area of triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}