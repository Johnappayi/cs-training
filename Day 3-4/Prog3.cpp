#include<iostream>
using namespace std;
#include<stdio.h>
int check(int n, int arr[10]){
    int flag=1,i=0;
    do{
        if(n==arr[i]){
            flag=0;
        }
        i++;
    }while(arr[i]!='\0');
    return flag;
}
int main()
{
    int size,arr[10],temp,pos=0;
    cout<<"\nEnter the size of array: ";
    cin>>size;
    cout<<"\nEnter the array: \n";
    for(int i=0;i<size;i++){
        cin>>temp;
        if(check(temp,arr))
        {
            arr[pos]=temp;
            pos++;
        }
    }
    for(int j=0;j<pos;j++){
        cout<<arr[j]<<" ";
    }
    
    return 0;
}