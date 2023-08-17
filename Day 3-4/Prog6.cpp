#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
int check(char n, char arr[52]){
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
    int size,temp,pos=0;
    string str;
    char arr[52];
    cout<<"\nEnter the string: ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        temp=str[i];
        if(check(temp,arr))
        {
            arr[pos]=temp;
            pos++;
        }
    }
    for(int j=pos;j>=0;j--){
        cout<<arr[j];
    }
    return 0;
}