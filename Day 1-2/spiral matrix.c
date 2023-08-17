#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    int r,c,i,j;
    printf("Enter the no. of rows and columns : ");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int lrow=0,lcol=0,hrow=r-1,hcol=c-1;
    
    do{
        for(i=lcol;i<=hcol;i++)
        printf("%d->",mat[lrow][i]);
        lrow++;
        for(i=lrow;i<=hrow;i++)
            printf("%d->",mat[i][hcol]);
        hcol--;
        for(i=hcol;i>=lcol;i--)
            printf("%d->",mat[hrow][i]);
        hrow--;
        for(i=hrow;i>=lrow;i--)
            printf("%d->",mat[i][lcol]);
        lcol++;
    }while(lrow<=hrow || lcol<=hcol );
}
