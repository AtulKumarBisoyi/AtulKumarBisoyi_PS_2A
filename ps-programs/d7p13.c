#include<stdio.h>
#include<string.h>
void main()
{
    char dict[100][100],str[100];
    int i,n,j;
    // w=["abc","abb","add"] str=abc
    printf("No. of cities= ");
    scanf("%d",&n);
    printf("Enter the name of the cities=\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",dict[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(dict[i],dict[j])>0)
            {
                strcpy(str,dict[i]);
                strcpy(dict[i],dict[j]);
                strcpy(dict[j],str);
            }
        }
    }
    printf("Sorted order=\n");
    for(i=0;i<n;i++)
    {
        printf("%s ",dict[i]);
    }
}