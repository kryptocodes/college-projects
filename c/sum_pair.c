/* pair the number which sums 5 */
#include<stdio.h>
int main()
{
int a[]={2,3,4,5,10};
for(int i=1;i<5;i++)
{
    for(int j=0;j<4;j++)
    {
        if(a[i]+a[j]==5)
        {
         printf("%d %d\n",a[i],a[j]);   
        }
    }
}
return 0;
}
