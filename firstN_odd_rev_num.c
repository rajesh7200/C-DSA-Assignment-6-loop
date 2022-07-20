#include<stdio.h>
int main()
{
    int x,i,result;
    printf("Enter first odd nuture number :");
    scanf("%d",&x);
    for(i=x;i>0;i--)
    {
        result=i*2-1;
        printf("%d ",result);

    }

    return 0;
}
