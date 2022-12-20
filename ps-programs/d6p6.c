//annagram
#include<stdio.h>
#include<math.h>
void main()
{   int a[26]={0},i,j=0,sum=0;
    char s1[100],s2[100];
    printf("Enter string1= ");
    scanf("%s",&s1);
    printf("Enter string2 ");
    scanf("%s",&s2);
    for(i=0;s1[i]!='\0';i++)
    {
        a[s1[i]-'a']++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        a[s2[i]-'a']--;
    }
    for(i=0;i<26;i++)
    {
        sum=sum+abs(a[i]);
    }
    printf("No. of elements= %d",sum);
}