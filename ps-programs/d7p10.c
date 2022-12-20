#include<stdio.h>
void main()
{
    char str[100],ch;
    int i,j,count=0,arr[26]={0};
    printf("Enter the string= ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        arr[str[i]-'a']++;   
    }
    printf("Character and there count are=\n");
    for(i=0;str[i]!='\0';i++)
    {
        if(arr[str[i]-'a']!=0)
        {
            printf("%c=%d\n",str[i],arr[str[i]-'a']);
            arr[str[i]-'a']=0;

        }
    }
}