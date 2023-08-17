#include <stdio.h>
#include <stdlib.h>

void main(){

    int patient[20],n,i,earning=0;
    printf("\nEnter the no. of patients: ");
    scanf("%d",&n);
    if(n>20){
        printf("\nDOCTOR doesnt consult more than 20 patients a day");
        return;
    }
    else{
        printf("\nENTER the age of the patients\n");
        for(i=0;i<n;i++){
            scanf("%d",&patient[i]);
            if(patient[i]<0 || patient[i]>120){
                printf("\nINVALID AGE for patient %d",i+1);
            }
            else if(patient[i]>0 && patient[i]<=17)
                earning+=200;
            else if(patient[i]>17 && patient[i]<=40)
                earning+=400;
            else if(patient[i]>40)
                earning+=300;
        }
    }
    printf("\nDOCTOR's earning for the day is %d",earning);
}
