#include<stdio.h>
void main()
{
    int sp;
    printf(" enter the value of sp :");
    scanf("%d",&sp);
    int cp;
    printf(" enter the value of cp :");
    scanf("%d",&cp);
    if(sp>cp){
        printf(" profit");
    }
    if(sp<cp){
        printf("loss");
    }
    if(sp==cp){
        printf("no profit no loss");
    }

}