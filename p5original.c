/*Write a program to find gcd (hcf) of two numbers.
int input();
int gcd(int a, int b);
void output(int a, int b, int gcd)*/

#include <stdio.h>
int input()
{
  int n;
  printf("enter the number=\n");
  scanf("%d",&n);
  return n;
}
int gcd(int a,int b)
{
  int i,gcd;
  for(i=1;i<a&&i<b;i++)
    {
      if(a%i==0 && b%i==0){
        gcd=i;
      }
    }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("GCD of(%d,%d) is %d",a,b,gcd);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=gcd(x,y);
  output(x,y,z);
}