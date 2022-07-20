#include<stdio.h>
int main()
{
    int x,i,result;
    printf("Enter first odd nuture number :");
    scanf("%d",&x);
    for(i=x-1;i>=0;i--)
    {
        result=i*2;
        printf("%d ",result);

    }

    return 0;
}
