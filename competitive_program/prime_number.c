#include <stdio.h>
#include <math.h>

int main(void) {
	int t;
	scanf("%d\n",&t);
	while(t--){
	    int m,n,i,j,count;
	    scanf("%d %d\n",&m,&n);
	    if(m==1||m==2){
	        printf("2\n3\n");
	        m=5;
	    }
	    if(m==3){
	        printf("3\n");
	        m=5;
	    }
	    
	    if(m%2==0)
	    m++;
	    
	    for(i=m;i<=n;i=i+2){
	        count=0;
	        if(i%6==1||i%6==5){
	           for(j=2;j<=sqrt(i);j++){
	              if(i%j==0)
	              count++;
	              
	              if(count==1)
	              break;
	           }
	           if(count==0)
	           printf("%d\n",i);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
