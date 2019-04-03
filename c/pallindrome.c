//palindrome
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
    printf("palindrome");
  else
    printf("not a palindrome");
  return 0;
}
