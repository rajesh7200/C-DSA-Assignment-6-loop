#include<stdio.h>
int main()
{
    int x,i,result;
    printf("Enter first nuture number  :");
    scanf("%d",&x);
    printf("%d table is  :\n",x);
    for(i=1;i<=10;i++)
    {
        result=x*i;
        printf("%d  x ",x);
        printf("%d = ",i);
        printf("%d \n",result);

    }

    return 0;
}
