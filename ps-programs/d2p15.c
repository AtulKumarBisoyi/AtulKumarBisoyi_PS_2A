// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// 1211 is read off as "one 1, one 2, then two 1s" or 111221.
// 111221 is read off as "three 1s, two 2s, then one 1" or 312211.
#include<stdio.h>
int lookandsay(int);
void main()
{
    int n,i,count=0,z;
    printf("Enter n=");
    scanf("%s",&n);
    z=lookandsay(n);
    printf("%s",z);
}

int lookandsay(int x)
{
    int z,i;
    if(x==1)
    {
        return 1;
    }
    else
    {
        z=lookandsay(x-1);
        int count=0;
        for(i=0;i<)


    }
}
   