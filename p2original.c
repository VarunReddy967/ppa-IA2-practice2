/*Write a program to find if a triangle is scalene. A triangle is a scalene traingle if all the three sides of the triangle are not equal to each other.

int input_side() 
int check_scalene(int a, int b, int c)
void output(int a, int b, int c, int isscalene)*/

#include <stdio.h>
int input_side()
{
  int s;
  printf("Enter the side of the triangle:\n");
  scanf("%d",&s);
  return s;
}
int check_scalene(int a,int b,int c)
{
int scalene=0;
/* if(a!=b && a!=c && b!=c)
{
  scalene++;
}  */
  scalene:(a!=b && a!=c && b!=c)?(scalene++):(scalene);
  return scalene;
}
void output(int a,int b,int c,int scalene)
{
  if (scalene>0)
  {
    printf("the triangle with sides %d %d and %d is scalene ",a,b,c);
  }
  else{
        printf("the triangle with sides %d %d and %d is not scalene ",a,b,c);
  }
}
int main()
{
  int x,y,z,sc;
  x=input_side();
  y=input_side();
  z=input_side();
  sc=check_scalene(x,y,z);
  output(x,y,z,sc);
  return 0;
}