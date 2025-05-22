#include<stdio.h>
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
}
int main()
{
    
   int a=5,b=10;
   printf("%d %d",a,b);
   swap(a,b);
   printf("\n%d %d",a,b);
}

// output dose not swap
// 5 10
// 5 10
// to swap the print statement should be up