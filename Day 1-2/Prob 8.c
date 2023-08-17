#include<stdio.h>
void main(){
    int r,c;
    printf("\nEnter the no. of rows: ");
    scanf("%d",&r);
    printf("\nEnter the no. of columns: ");
    scanf("%d",&c);
    int MAT[10][10],index=0,temp=0;
    printf("\nEnter the matrix:\n");
    for(int i=0;i<r;i++){
        int count =0;
        for(int j=0;j<c;j++){
            scanf("%d",&MAT[i][j]);
            if(MAT[i][j]==1)
                count++;
        }
        if(count>temp)
            {
                index=i;
                temp=count;
            }
    }

    printf("\nThe index is %d",index);
}