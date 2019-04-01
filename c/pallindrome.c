//pallindrome
#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b[20],c;
  printf("enter string:");
  gets(a);
  strcpy(b,a);
  strrev(b);
  if(strcmp(a,b)==0)
    printf("pallindrome");
  else
    printf("not a pallindrome");
  return 0;
}
