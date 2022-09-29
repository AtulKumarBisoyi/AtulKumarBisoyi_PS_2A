#include<stdio.h>
int lookandsay(int);
void main()
{
    int n,i,count=0;
    printf("Enter n=");
    scanf("%d",&n);
    lookandsay(n);
}

int lookandsay(int x)
{
    if(x==1)
    {
        printf("11");
    }
    else if(x==2)
    {
        printf("21");
    }
    else if(x==3)
    {
        printf("1211");
    }
    else
    {
        
        printf("%d",lookandsay(x-1));
    }
}