#include<iostream>
using namespace std;
#include<stdio.h>
void main()
{
    int row, col,mat[10][10];
    cout<<"\nEnter the no. of row";
    cin>>row;
    cout<<"\nEnter the no. of col";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j];
        }
    }
}