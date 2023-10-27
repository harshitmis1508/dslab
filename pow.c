#include<stdio.h>
int powe(int b, int p){
    if(p==0)
    return 1;
    else
    return(b*powe(b,p-1));
}
void main()
{
    int b,p;
    printf("enter the value of b and p");
    scanf("%d%d",&b,&p);
    powe(b,p);
    printf("the answer of %d to the power%d is: %d",b,p,powe(b,p));
}