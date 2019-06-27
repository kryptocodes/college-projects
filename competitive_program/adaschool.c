#include<stdio.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);//to get the test case input 
    while(t--)
    {
        scanf("%d %d",&n,&m);
        if((n%2==0)||(m%2==0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
