#include<stdio.h>
void main()
{
    int a=7;
    int *p,*q;
   p=p;
   p=&a;
   *q=1;
   *p=4;
   printf("%d ",a);
}

