#include<stdio.h>
void main()
{
    int a[20],b[20],c[20];
    int i,j,k,p,q,m,n,t;
    printf(" row  and column in 1\n");
    scanf("%d %d",&m,&n);
    printf(" row  and column in 2\n");
    scanf("%d %d",&p,&q);
    if(n==p)
    {
    printf("Values of 1 matrix:\n");
    for(i=0;i<m;i++)
    {
       for( int j=0;j<p;j++)
       {
        scanf("%d ",&a[i][j]);
       }
    }
     printf("Values of 2 matrix:\n");
    for(i=0;i<p;i++)
    {
       for(j=0;j<q;j++)
       {
        scanf("%d ",&a[i][j]);
       }
    }
    //multiplication
    for(i=0;i<m;i++)
    {
       for(j=0;j<q;j++)
       {
        for(k=0;k<p;k++)
         {
       c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
         }
         t=c[i][j];
       }
    }
    }

    
}