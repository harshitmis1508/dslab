#include<stdio.h>
void main()
    {
        int a,b,c;
        {
            printf(" Enter the sides of a triangle");
            scanf("%d%d%d",&a,&b,&c);
            {
                if(a==b && b==c)
                printf("ABC is equilateral triangle");
            
                else if(a!=b && b!=c && a!=c)
                printf("ABC is scalene triangle");
            
                else
                printf("ABC is isoceles triangle");
            }
         }
    }