#include<stdio.h>
void main()
{
    int a,b,num;
    
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    num = a % b;
    printf("the remainder when %d is divided by %d is : %d",a,b,num);
    
}