#include<stdio.h>
void main(){
    char a;
    printf("enter a char");
    scanf("%c",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
    {
        printf("this is a vowel");
    }
    else
        printf("this is constant");
}