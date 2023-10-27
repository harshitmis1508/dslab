#include<stdio.h>
int fact(int n)
{
    if(n==0){
        return 1;
    } 
    else
     return n*fact(n-1);
    
}
void main()
{
    int n;
  printf(" enter the value of n for factorial : ");
  scanf("%d",&n);
  fact( n);
  printf("the factorial of n is %d",fact(n));
}
