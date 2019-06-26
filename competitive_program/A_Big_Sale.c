#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
double p,q,r,ke,kee,loss,key3=0;
while(n--)
{
scanf("%lf %lf %lf",&p,&q,&r);
ke=p+p*r/100;
kee=ke-ke*r/100;
loss=p-kee;
key3=key3+loss*q;
}
printf("% 9f\n",key3);
}
return 0;
}
