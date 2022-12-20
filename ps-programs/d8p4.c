#include<stdio.h>
void main()
{
    int n,c=0,l,a,s1=0,s2=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    l=n;
    while(l>0)
    {
        c++;
        l=l/10;
    }
    int m=(c-1)/2;
    while(m<c-1)
    {
        a=n%10;
        s1=s1+a;
        n=n/10;
        m++;  
    }
    while (n>0)
    {
        n=n/10;
        a=n%10;
        s2=s2+a;
    }
    if(s1==s2)
    {
        printf("BALANACED");
    }
    else
    {
        printf("UNBALANCED");
    }
    
}