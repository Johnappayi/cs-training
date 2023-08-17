#include <stdio.h>
#include <stdlib.h>

void main(){
    int weight, estTIME;
    printf("\nEnter the weight: ");
    scanf("%d",&weight);

    if(weight>0 && weight<=2000)
    {
        estTIME=25;
        printf("\nTime Estimated: %d Minutes",estTIME);
    }
    else if(weight>2000 && weight<=4000){
        estTIME=35;
        printf("\nTime Estimated: %d Minutes",estTIME);
    }
    else if(weight>4000 && weight<=7000){
        estTIME=45;
        printf("\nTime Estimated: %d Minutes",estTIME);
    }
    else if(weight>7000)
        printf("OVERLOADED");
    else
        printf("INVALID INPUT");
}