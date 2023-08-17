#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>

int main(){
    int cap=70,req,i;
    char ch;
    cout<<"----PEPSI VENDING MACHINE-----";
    do{
        cout<<"\nCurrent stock: "<<cap;
        cout<<"\nEnter the no. of bottle: ";
        cin>>req;
        if(req>200){
            cout<<"\nMax capacity is 200";
        }
        else if(req>cap){
            for(i=cap;i>0;i--){
                cout<<"\nTake it :)";
                cap--;
            }
            cout<<"\nOUT OF STOCK";
            cout<<"\n\nHave a good drink";
        }else{
            for(i=req;i>0;i--){
                cout<<"\nTake it :)";
                cap--;
            }
            cout<<"\n\nHave a good drink";
        }
    cout<<"\n\nDo you want to continue(Y/N)? : ";
    cin>>ch;
    }while(ch=='Y'||ch=='y');
    
    return 0;
}