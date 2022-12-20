#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i=0,word=1;
    printf("Enter string= ");
    gets(s);
    while (s[i]!='\0')
    {
        if(s[i]==' ')
        {
            word++;
        }
        i++;
    }
    
    printf("Total no. of words= %d",word);
}