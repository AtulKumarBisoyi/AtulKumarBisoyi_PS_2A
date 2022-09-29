#include<stdio.h>
void main(){
    int x,y;
    printf("enter the coordinates of x y = ");
    scanf("%d%d",&x,&y);
    if((x>=0)&&(y>=0))
    {
        printf("first quadrant");
    }
    else if((x<=0)&&(y>=0))
    {
        printf("second quadrant");
    }
    else if((x<=0)&&(y<=0))
    {
        printf("third quadrant");
    }
    else if((x>=0)&&(y<=0))
    {
        printf("forth quadrant");
    }
    else 
    printf("wrong input");
}