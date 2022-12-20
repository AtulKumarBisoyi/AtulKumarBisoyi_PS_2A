#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter all 3 sides=");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b) && (b==c) && (c==a))
    {
        printf(" equilateral triangle");
    }
    else if( (a==b)||(a==c)||(b==c))
    {
        printf("isosceles traingle");
    }
    else{
        printf("scalene triangle");
    }
}