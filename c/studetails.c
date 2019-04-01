//student mark sheet
#include<stdio.h>
#include<stdlib.h>
struct stu
{
  int rollno;
  char name[20];
  int marks[5];
}s;
int main()
{
  int n;
  printf("enter no of students");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("\nenter student name:");
    gets(s.name[i]);
    printf("\nenter rollno:");
    scanf("%d",&s.rollno);
    for(int j=1;j<=5;j++)
    {
      printf("enter marks for subject-%d:");
      scanf("%d",s.marks[j]);
    }
  }
  return 0;
}
