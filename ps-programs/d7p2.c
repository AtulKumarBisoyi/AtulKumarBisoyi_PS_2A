#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i=0,len;
    printf("Enter string= ");
    scanf("%s",&s);
    len=strlen(s);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}