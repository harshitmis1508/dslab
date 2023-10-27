#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c )
    {
        printf("it is an equilaterl triangle ");
    }
     else if( a==b || b==c && a!=c)
         {
            printf("it is isosceles triagle");
         }
     else
        {
            printf("it is scalene tyriangle");
        }
    }
