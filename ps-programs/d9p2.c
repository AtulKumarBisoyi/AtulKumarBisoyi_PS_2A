#include<stdio.h>
#include<math.h>
void main()
{
    float a,b;
    double h,hi;
    
    printf("Enter a and b = ");
    scanf("%d%d",&a,&b);
    h=a*2/b;
    hi= ceil(h);
    printf("The minimum height = %lf",hi);
}