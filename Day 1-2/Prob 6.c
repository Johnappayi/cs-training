#include <stdio.h>
#include <stdlib.h>
void coffee(){
    int opt;
    printf("\n----COFFEE----\n");
    printf("1. Espresso Coffee\n2. Cappuccino Coffee\n3. Latte Coffee ");
    printf("\nEnter your option: ");
    scanf("%d",&opt);
    switch(opt){
        case 1 :printf("\nWelcome to CCD Enjoy your Espresso Coffee");
                break;
        case 2 :printf("\nWelcome to CCD Enjoy your Cappuccino Coffee");
                break;
        case 3 :printf("\nWelcome to CCD Enjoy your Latte Coffee ");
                break;
        default:printf("Wrong option");
                break;
    }
}
void tea(){
    int opt;
    printf("\n----TEA----\n");
    printf("1. Plain Tea\n2. Assam Tea\n3. Ginger Tea\n4. Cardamom Tea\n5. Masala Tea\n6. Lemon Tea\n7. Green Tea\n8. Organic Darjeeling Tea");
    printf("\nEnter your option: ");
    scanf("%d",&opt);
    switch(opt){
        case 1 :printf("\nWelcome to CCD Enjoy your Plain Tea");
                break;
        case 2 :printf("\nWelcome to CCD Enjoy your Assam Tea");
                break;
        case 3 :printf("\nWelcome to CCD Enjoy your Ginger Tea");
                break;
        case 4 :printf("\nWelcome to CCD Enjoy your Cardamom Tea");
                break;
        case 5 :printf("\nWelcome to CCD Enjoy your Masala Tea");
                break;
        case 6 :printf("\nWelcome to CCD Enjoy your Lemon Tea");
                break;
        case 7 :printf("\nWelcome to CCD Enjoy your Green Tea");
                break;
        case 8 :printf("\nWelcome to CCD Enjoy your Organic Darjeeling Tea");
                break;
        default:printf("Wrong Option");
                break;
    }
}


void soups(){
    int opt;
    printf("\n----SOUPS----\n");
    printf("1. Hot and Sour Soup\n2. Veg Corn Soup\n3. Tomato Soup\n4. Spicy Tomato Soup ");
    scanf("%d",&opt);
    switch(opt){
        case 1 :printf("\nWelcome to CCD Enjoy your Hot and Sour Soup");
                break;
        case 2 :printf("\nWelcome to CCD Enjoy your Veg Corn Soup");
                break;
        case 3 :printf("\nWelcome to CCD Enjoy your Tomato Soup");
                break;
        case 4 :printf("\nWelcome to CCD Enjoy your Spicy Tomato Soup");
                break;
        default:printf("Wrong Option");
                break;
    }
}
void beverages(){
    int opt;
    printf("\n----BEVERAGES----\n");
    printf("1. Hot Chocolate Drink\n2. Badam Drink\n3. Badam-Pista Drink ");
    printf("\nEnter your option: ");
    scanf("%d",&opt);
    switch(opt){
        case 1 :printf("\nWelcome to CCD Enjoy your Hot Chocolate Drink");
                break;
        case 2 :printf("\nWelcome to CCD Enjoy your Badam Drink");
                break;
        case 3 :printf("\nWelcome to CCD Enjoy your Badam-Pista Drink");
                break;
        default:printf("Wrong Option");
                break;
    }
}


void main(){
    char choice;
    printf("\n----MAIN MENU----\n");
    printf("Coffee\nTea\nSoups\nBeverages");
    printf("\nEnter your choice: ");
    scanf("%c",&choice);
    switch(choice){
        case 'C':  coffee();
                   break;
        case 'T':  tea();
                   break;
        case 'S':  soups();
                   break;
        case 'B':  beverages();
                   break;
        default :  printf("\nWrong Choice");
                   break;
    }
}
