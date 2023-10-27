#include<stdio.h>
void main(){
    int l,b,A,P;
    printf(" enter the values of l");
    scanf("%d",&l);
    printf(" enter the values of b");
    scanf("%d",&b);
    A = l*b; 
    P = 2*(l+b);
    if(A>P){
        printf(" Area is greater");
    }
    if(A<P){
        printf("perimeter is greater");
    }
    if(A==P){
        printf("Area and Perimeter are equal");
    }
}