#include<stdio.h>
void main()
{
    int n,i,hf;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        if(n%i==0)
        hf=i;
    }
    printf(" highest factor is %d ",hf);
}