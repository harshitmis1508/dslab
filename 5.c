#include<stdio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    n%2 == 0 ? printf("the number is even"):printf("the number is odd");
}