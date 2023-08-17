#include<stdio.h>
#include<stdlib.h>
void main(){
    int t , max =0, sum=0;
    printf("Enter the duration: ");
    scanf("%d",&t);
    int E[t],L[t];

    printf("\nEnter the no. of people entering and exiting each hour: \n");
    for(int i=0;i<t;i++){
        scanf("%d%d",&E[i],&L[i]);
    }

    for(int i=0;i<t;i++){
        sum=sum+(E[i]-L[i]);
        if(sum>max)
            max=sum;
    }

    printf("\nMaximum no. of people present at an instance is %d",max);
}