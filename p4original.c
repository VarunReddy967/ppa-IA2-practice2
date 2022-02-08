/* Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void out_put(int sum);*/

#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array:\n");
  scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
  printf("enter the numbers:\n");
for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n, int a[n])
{
  int sum=0,j,i,count;
  for(i=0;i<n;i++)
    { 
      count=0;
      for(j=1;j<=n;j++)
        { 
          if(a[i]%j==0){
          count=count+1;
            }
        }
      if(count>2)
      {
        sum=sum+a[i];
      }}
  return sum;
}
void output(int sum){
  printf("Sum=%d",sum);
}
int main(){
  int n;
  n=input_array_size();
  int a[n],sum;
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}