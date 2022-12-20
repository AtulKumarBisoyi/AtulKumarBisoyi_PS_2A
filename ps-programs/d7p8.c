#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],arr[100][100]={"ab","a","abc","bc"};
    int n,i,j,k,count=0;
    printf("how many options= ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr);
    }
    printf("Enter the string= ");
    gets(str);

    for(i=0;i<n;i++)
    {
        j=0;
        while (arr[j]!='\0')
        {
            for(k=0;k<strlen(str);k++)
            {
                if(arr[i][j]==str[k])
                {
                    j++,k++;
                    count++;
                }
                else
                {
                    count=0;
                    break;
                }
            }
            if(count!=0)
            {
                printf("%s",arr[i][j]);
            }
        }
        
    }

    

}