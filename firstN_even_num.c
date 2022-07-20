#include<stdio.h>
int main()
{
    int x,i,result;
    printf("Enter first odd nuture number :");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        result=i*2;
        printf("%d ",result);

    }

    return 0;
}
