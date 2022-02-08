/*Write a program to find the triangle with smallest area in n given triangles.
struct _triangle
{
float base,altitude,area;
};
typedef _triangle Triangle
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, triangle t[n]);
void find_area(Triangle *t);
void find_areas_n(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);*/

#include <stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter number of triangles?\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter the base=\n");
  scanf("%f",&t.base);
  printf("enter the altitude=\n");
  scanf("%f",&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  Triangle a;
  a=*t;
  a.area=(a.base*a.altitude)/2;
  *t=a;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle min;
  min=t[0];
  for(int i=0;i<n;i++)
    {
      if(t[i].area<min.area)
      {
        min=t[i];
      }
    }
  return min;
}
void output(Triangle min)
{
  printf("A triangle with base %f , altitude %f and area %f has smallest area",min.base,min.altitude,min.area);
}
int main()
{
  int n;
  n=input_n();
  Triangle t[n],m;
  input_n_triangles(n,t);
  find_areas_n(n,t);
  m=find_smallest_triangle(n,t);
  output(m);
  return 0;
}