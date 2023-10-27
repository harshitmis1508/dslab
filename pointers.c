#include<stdio.h>
void main(){
    int n1,n2,*p,*q,sum =0;
    printf("Enter the two numbers \n");
    scanf("%d%d",&n1,&n2);

    p = &n1;
    q = &n2;
    
    sum = n1 + n2;

    printf("sum of enterd numbers is : %d\n", sum);

}