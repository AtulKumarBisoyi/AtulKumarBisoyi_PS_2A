#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers= ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("a is bigger");
        }
        else
            printf("c is bigger");
    }
    else
    {
        if(b>c)
        {
            printf(" b is bigger");
        }
        else
            printf("c is bigger");
    }
}