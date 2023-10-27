#include<stdio.h>
int fibo(int);
int main()
{
    int i, n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    t=fibo(i);
    printf("%d",t);
    }
}

int fibo(int i)
{
if(i==1)
return 0;
if(i==2)
return 1;
else
return(fibo(i-1)+fibo(i-2));
}