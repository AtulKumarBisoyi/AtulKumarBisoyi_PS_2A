#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i ,m;
    printf("Enter the identifier= ");
    gets(str);
    if(!((str[0]>='a'&& str[0]<='z')||(str[0]>='A'&& str[0]<='Z')||str[0]=='_'))
    {
        printf("Invalid Identifier");
        return;
    }
    for (i=0;i<strlen(str);i++) 
    {
        if (!((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= '0' && str[i] <= '9')|| str[i] == '_'))
        {
            printf("Invalid Identifier");
            return;
        }
    }
    printf("Valid Identifier");
}