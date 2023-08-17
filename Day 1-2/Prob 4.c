#include <stdio.h>
#include <stdlib.h>
void main(){
    float quantity, distance;
    float fuelCon;
    printf("\nEnter the quantity of diesel to fill up the tank (liters): ");
    scanf("%f",&quantity);
    printf("\nEnter the distance covered till the tank goes dry (km): ");
    scanf("%f",&distance);

    if(quantity<0 || distance<0){
        printf("INVALID INPUT");
    }
    else
    {
        fuelCon= (quantity/distance)*100;
        printf("\n Fuel Consumption is %.2f liter per 100 km",fuelCon);

        fuelCon= ((distance*0.6214)/(quantity*0.2642));
        printf("\n Fuel Consumption is %.2f miles per gallon",fuelCon);
    }
}