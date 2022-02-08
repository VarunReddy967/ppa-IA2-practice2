/*Write a program to reverse a string.
void input_string(char *a);
int str_reverse(char *a);
void output(char *a,char *reversea);*/

/*Write a program to reverse a string.
void input_string(char *a);
int str_reverse(char *a);
void output(char *a,char *reversea);*/

#include <stdio.h>
#include<string.h>
void inputString(char *a)
{
  printf("Enter a string:\n");
  scanf("%s",a);
}
char strReverse(char *a)
{
  int len;
  char temp;
  len=strlen(a);
  for(int i=0;i<len/2;i++)
    {
      temp=a[i];
      a[i]=a[len-1-i];
      a[len-1-i]=temp;
    }
  return *a;
}
void output(char *a,char *reverse)
{
  strReverse(a);
  printf("before reverse=%s \n",a);
  *reverse= strReverse(a);
  printf("after reverse=%s \n",reverse);
}
int main()
{
  char x;
  inputString(&x);
  strReverse(&x);
  output(&x,&x);
  return 0;
}