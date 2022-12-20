#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i=0,len,c=0;
    printf("Enter string= ");
    scanf("%s",&s);
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-1])
        {
            printf("string is not palindrome\n");
            break;
        }
        i++;
        len--;
        c++;
    }
    if(c!=0)
    {
        printf("String is palindrome\n");
    }
    
}
    