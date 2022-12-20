#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int i,m,n;
    printf("Enter first string = ");
    gets(str1);
    printf("Enter second string = ");
    gets(str2);
    m=strlen(str1);
    n=strlen(str2);
    for(i=0;i<=n;i++)
    {
        str1[m]=str2[i];
        m++;
    }
    printf("String after concatenation= ");
    puts(str1);
}