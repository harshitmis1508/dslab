#include<stdio.h>
int stack[100],n,top=-1,x;
void display();
void display1();
void push()
{
    if(top>=-1)
    
        printf("overflow");
        else
            printf("enter the elements to be inserted");
            scanf("%d",&n);
         top=top+1;
         stack[top]=x;
}

void main()
{
    if(top<=-1)
    
        printf("underflow\n");
        else
            top=top-1;
            stack[top]=x;
            display();

}
void decoct(int n){
    int x;
    while(x>0)
        {
            x=n%8;
            push(x);
            display();
        }

}
void display(){
    int n,i;
    printf("enter the element to covert from decimal to octal: ");
    scanf("%d",&n);
        for(i=0;n>0;i++)
            {
        
                stack[i]=n%8;
                n=n/8;
            }
        printf("\n decimal to octal :");

        for(i=i-1;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
}
void dechex(int n){
    int x;
    while(x>0)
        {
            x=n%16;
            push(x);
            display();
        }

}
void display1()
{
    int n,i;
    printf("enter the element to covert from decimal to hexadecimal: ");
    scanf("%d",&n);
        for(i=0;n>0;i++)
            {
        
                stack[i]=n%16;
                n=n/16;
            }
        printf("\n decimal to hexadecimal :");

        for(i=i-1;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
}

