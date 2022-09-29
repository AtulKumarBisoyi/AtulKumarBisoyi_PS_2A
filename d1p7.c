#include<stdio.h>
void main(){
    int a;
    printf("enter the temperatue=");
    scanf("%d",&a);
    if(a<0)
    {
        printf("freezing weather");
    }
    else if((a>=0)&&(a<10))
    {
        printf("very cold weather");
    }
    else if((a>=10)&&(a<20))
    {
        printf("cold weather");
    }
    else if((a>=20)&&(a<30))
    {
        printf("normal is temperature");
    }
    else if((a>=30)&&(a<40))
    {
        printf("its hot");
    }
    else
        printf("its veryy hot");

}