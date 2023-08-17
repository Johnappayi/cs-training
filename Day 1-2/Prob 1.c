#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void main(){
    int intWAll[SIZE], n , netINT=0 ;
    int extWAll[SIZE], m , netEXT=0;
    int i , totalCOST;
    printf("\nEnter the no. of Interior walls: ");
    scanf("%d",&n);
    if(n!=0){
        printf("\nSurface Area of each Interior Wall in units of square feet\n");
        for( i=0;i<n;i++){
            scanf("%d",&intWAll[i]);
            netINT+=intWAll[i];
        }
    }
    
    printf("\nEnter the no. of Exterior walls: ");
    scanf("%d",&m);
    if(m!=0){
        printf("\nSurface Area of each Exterior Wall in units of square feet\n");
        for( i=0;i<m;i++){
            scanf("%d",&extWAll[i]);
            netEXT+=extWAll[i];
        }
    }

    totalCOST = 18*netEXT + 12*netINT;
    printf("\nTotal Cost will be:  %d",totalCOST);
}