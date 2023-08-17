#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    char word1[10],word2[10],word3[10],out[30];
    printf("Enter the words: ");
    scanf("%s%s%s",word1,word2,word3);
    
    int n =  strlen(word1);
    for(int i=0;i<n;i++){
        if(word1[i]=='a'||word1[i]=='e'||word1[i]=='i'||word1[i]=='o'||word1[i]=='u'||word1[i]=='A'||word1[i]=='E'||word1[i]=='I'||word1[i]=='O'||word1[i]=='U')
        {
            word1[i]='%';
        }
    }
        

    int m =  strlen(word2);
    for(int i=0;i<m;i++){
        if(word2[i]=='a'||word2[i]=='e'||word2[i]=='i'||word2[i]=='o'||word2[i]=='u'||word2[i]=='A'||word2[i]=='E'||word2[i]=='I'||word2[i]=='O'||word2[i]=='U')
           {}
        else word2[i]='#';
    }
        

    int p =  strlen(word2);
    for(int i=0;i<p;i++)
       word3[i]=toupper(word3[i]);
       
    strcat(word1,word2);
    strcat(word1,word3);

    printf("\nOutput:  %s",word1);
}
