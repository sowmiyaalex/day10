#include<stdio.h>
void main()
{
    int c=7;
    int * p;
    p = &c;
    printf("%d,%d",p,&c);
}