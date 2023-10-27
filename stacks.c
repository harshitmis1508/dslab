#include<stdio.h>
int stack[100],n,top=-1,x;
void display();
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
void decbin(int n){
    int x;
    while(x>0)
        {
            x=n%2;
            push(x);
            display();
        }

}
void display(){
    int n,i;
    printf("enter the element to covert from binary to decimal: ");
    scanf("%d",&n);
        for(i=0;n>0;i++)
            {
        
                stack[i]=n%2;
                n=n/2;
            }
        printf("\nbinary to given number is :");

        for(i=i-1;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
}


