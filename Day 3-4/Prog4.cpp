#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
int top=-1;
char stack[10];
void push(char ele, char stack[] ){
    top++;
    stack[top]=ele;
}
void pop(){
    //stack[top]='\0';
    top--;
}
int checkTop(char ele,char stack[]){
    if(stack[top]=='{' && ele=='}')
        return 1;
    else if(stack[top]=='[' && ele==']')
        return 1;
    else if(stack[top]=='(' && ele==')')
        return 1;
    else
        return 0;
}
int main(){
    string inp;
    cout<<"\n Enter the input: ";
    cin>>inp;
    int i=0;
    do{
        if(inp[i]=='{'||inp[i]=='['||inp[i]=='('){
            push(inp[i],stack);
        }
        else if(inp[i]=='}' || inp[i]==']' || inp[i]==')'){
            if( checkTop(inp[i],stack) )
            {
                pop();
            }
        }
        else{
            cout<<"invalid char";
        }
        i++;
    }while(inp[i]!='\0');
    if(top<0)
        cout<<"Balanced";
    else
        cout<<"unbalanced";
        
    return 0;
}
