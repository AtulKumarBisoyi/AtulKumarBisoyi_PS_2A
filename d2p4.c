#include<stdio.h>
void main(){
    int i,j,k=0;
    char a='A';
    for(i=0;i<4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a+i+j);

        }
        
        printf("\n");
    }
}