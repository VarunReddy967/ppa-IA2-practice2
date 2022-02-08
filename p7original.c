/*Write a program to find the area of a triangle
struct _triangle
{
float base,altitude,area;
}; typedef _triangle Triangle
Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);*/

#include <stdio.h>
struct _triangle
{
float base,altitude,area;
}; typedef struct _triangle Triangle;
Triangle inputTriangle()
{
  Triangle a;
  printf("enter the base of the triangle:\n");
  scanf("%f",&a.base);
  printf("enter the altitude of the triangle:\n");
  scanf("%f",&a.altitude);
  return a;
}
void find_area(Triangle *t)
{
  Triangle a;
  a=*t;
  a.area=(a.base*a.altitude)/2;
  *t=a;
}
void output(Triangle t)
{
  printf("area of triangle with base %f and altitude %f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle tri;
  tri=inputTriangle();
  find_area(&tri);
  output(tri);
  return 0;
}