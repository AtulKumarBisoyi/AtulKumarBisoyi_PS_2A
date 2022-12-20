#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i=0;
    printf("Enter the string = ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)//A to Z
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>=97 && str[i]<=122)//a to z
        {
            str[i]=str[i]-32;
        }
        else
        {
            continue;
        }
    }
    printf("String after conversion= ");
    puts(str);
}