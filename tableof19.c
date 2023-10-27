#include<stdio.h>
void main()
{
    int n,i,a;
    printf("enter the value of n :");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
         a = n*i;
        printf("%d\n",a);
    }
}