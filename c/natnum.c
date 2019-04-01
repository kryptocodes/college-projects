//sum of natural numbers
#include<stdio.h>
int Sum(int n)
{
  int s=0,i;
  for(i=1;i<=n;i++)
  {
   s=s+i;
  }
  printf("sum of natural numbers is:%d",s);
}
int main()
{
  int n,s;
  printf("enter a positive integer:");
  scanf("%d",&n);
  Sum(n);
  return 0;
}
