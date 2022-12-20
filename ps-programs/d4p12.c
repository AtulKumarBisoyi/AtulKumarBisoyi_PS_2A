#include<stdio.h>
int catmouse(int,int,int);
void main()
{
    int x,y,z;
    
    printf("Enter pos of cat A= ");
    scanf("%d",&x);
    printf("Enter pos of cat B= ");
    scanf("%d",&y);
    printf("Enter pos of Mouse C= ");
    scanf("%d",&z);
    catmouse(x,y,z);
}

int catmouse(int a,int b,int c)
{
    if((c-a)==(b-c))
        {
            printf("Mouse c");
        }
    else if(b>a)
    {
        if(c>b)
        {
            printf("Cat B");
        }
    }
    else
        printf("Cat A");

}