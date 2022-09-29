#include<stdio.h>
void main(){
    int bs,hra,da,allow,pf,ts;
    char grade;
    printf("enter grade=");
    scanf("%c",&grade);
    printf("enter the basic salary=");
    scanf("%d",&bs);
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    if(grade=='A')
       { allow=1700;}
    else if(grade=='B')
        allow=1500;
    else
        allow=1300;
    ts=bs+hra+da+allow-pf;
    printf("total salary=%d",ts);
}