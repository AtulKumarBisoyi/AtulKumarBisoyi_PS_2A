#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,j,m,n;
    printf("Enter the string=\n");
    gets(str);
    m=strlen(str);
    for(i=0;i<m;i++)
    {
        if(str[i]==' ')
        {
            for(j=i;j<m;j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    n=strlen(str);
    // printf("%s\n",str);
    printf("%d is the original length and %d is the new length\n",m,n);
}