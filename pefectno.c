#include<stdio.h>
int pefect(int x)
{
    int sum=0;
    for(int i=1;i<x;i++){
        if(x%i==0)
        sum = sum+i;
    }
if (sum==x)printf("true");
else printf("false");
}
