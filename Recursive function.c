#include<stdio.h>
int rec(int);
int main()
{
  int a,fact;
  printf("This os designed by Khushi dhakad");
  printf("Enter any number :");
  scanf("%d",&a);
  
  fact=rec(a);
  printf("Factorial value=%d\n",fact);
  return 0;
}

int rec(int x)
{
  int f;
  if(x==1)
  return (1);
  
  else
  f=x*rec(x-1);
 
  return (f);
}
© 2021 GitHub, Inc.
