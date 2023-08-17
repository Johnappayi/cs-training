#include <stdio.h>
#include <stdlib.h>

void main(){
    int pizza=0, puff=0, drink=0;

    printf("\nEnter the quantity of Pizza: ");
    scanf("%d",&pizza);
    printf("\nEnter the quantity of Puff: ");
    scanf("%d",&puff);
    printf("\nEnter the quantity of Drink: ");
    scanf("%d",&drink);

    printf("\n----SALES INVOICE----\n");
    printf("\nITEM    NO. PRICE\n");
    if(pizza>0){
        printf("\nPIZZA   %d  %d",pizza,pizza*100);
    }
    if(puff>0){
        printf("\nPUFF    %d  %d",puff,puff*20);
    }
    if(drink>0){
        printf("\nDRINK   %d  %d",drink,drink*10);
    }
    printf("\n----------------------");
    printf("\nNo. of Items    %d ",pizza+puff+drink);
    printf("\nTotal Cost      %d ",(pizza*100)+(puff*20)+(drink*10));
    printf("\n----------------------");
    printf("\nThank you for shopping with us\nVisit Agian!");
}
