//student mark sheet
#include<stdio.h>
struct stu
{
  int rollno;
  char name[20];
  int marks[5];
}s[10];
int grad(int b)
{
  if(b>=90)
    printf("O");
  else if(b>=80)
    printf("A+");
  else if(b>=70)
    printf("A");
  else if(b>=60)
    printf("B+");
  else if(b>=50)
    printf("B");
  else
    printf("F");
}
int main()
{
  int n,i,j;
  printf("enter number of students:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nenter student name:");
    scanf("%s",s[i].name);
    printf("\nenter rollno:");
    scanf("%d",&s[i].rollno);
    for(j=1;j<=5;j++)
    {
      printf("enter marks for subject-%d:",j);
      scanf("%d",&s[i].marks[j]);
    }
  }

  printf("\n \t\tMARK SHEET\n");
  for(i=0;i<n;i++)
  {
    printf("\n\nNAME:%s\t\t\tROLLNO:%d",s[i].name,s[i].rollno);
    printf("\n----------------------------------------------------\n");
    printf("\nMarks\t\t\t\tGrades");
    for(j=1;j<=5;j++)
    {

      printf("\nsub-%d:%d\t\t\t",j,s[i].marks[j]);
      grad(s[i].marks[j]);
    }

  }
  return 0;
}
