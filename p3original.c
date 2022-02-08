/*Write a program find whether a number is a composite number. A Composite number has a factor other than 1 and itself
int input_number();
int is_composite(int n);
void output(int n, int composite);*/

#include <stdio.h>
int input_number()
{
  int n;
  printf("Enter the number :\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,composite=0;
  for(i=1;i<n;i++)
    {
      if(n%i==0)
      {
        composite++;
      }
    }
  return composite;
}
void output(int n, int composite)
{
  if(composite>1)
  {
    printf("%d is composite",n);
  }
  else printf("%d is not composite",n);
}
int main()
{
  int x,y;
  x=input_number();
  y=is_composite(x);
  output(x,y);
  return 0;
}