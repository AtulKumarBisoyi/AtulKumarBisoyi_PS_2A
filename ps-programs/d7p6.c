#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int i,c=0;;
    printf("Enter first string = ");
    gets(str1);
    printf("Enter second string = ");
    gets(str2);
    if(strlen(str1)==strlen(str2))
    {
        for(i=0;str1[i]!='\0';i++)
        {
            if(str1[i]==str2[i])
            {
                c++;
            }
            else
            {
                c=0;
                printf("Strings are not equal");
                break;
            }
        }
        if(c!=0)
        {
            printf("Strings are equal");
        }
    }
    else
    {
        printf("Strings are not equal");
    }
}