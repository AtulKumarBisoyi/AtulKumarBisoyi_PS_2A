#include<stdio.h>
void main()
{
    char s[100];
    int i=0;
    printf("Enter string= ");
    scanf("%s",&s);
    while(s[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
}