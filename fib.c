#include<stdio.h>
int fib(int n, int i){
    {
        if(n==1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else
            return fib(n-2)+fib(n-1);
    }
}
void main(){
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    printf("the fibonacci series is %d",fib(n));
}