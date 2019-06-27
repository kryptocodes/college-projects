#include<stdio.h>

int main()
{
    int i=0;
    int n = 7;
    int a[] = {4,5,6,7,8,2,3};
    int score = 0;
    int flag = 1;
    
    while(i<=n){
        
        
        if(a[i+1]<3*a[i+3] && flag==1 && n>3){
            score += 3*a[i+3];
            i = i+3;
            flag = 0;
        }
        else if(a[i+1]<2*a[i+2]){
            score += 2*a[i+2];
            i = i+2;
        }
        else{
            score += a[i+1];
            i++;
        }
    }
    printf("%d",score);

    return 0;
}
