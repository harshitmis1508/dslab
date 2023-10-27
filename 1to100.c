// #include<stdio.h>
// void main()
// {
//     int i;
//     for(i=1;i<=100;i++){
//         printf("%d\n",i);
//     }
// }
// #include<stdio.h>
// void main()
// {
//     int n,i;
//     for(i=1;i<=50;i=i+2){
//         printf("%d ",i);
//     }
// }
// #include<stdio.h>
// void main()
// {
//     int n,i;
//     for(i=1;i<=50;i=i+1){
//         if(i%2==0)
//         printf("%d ",i);
//     }
// }
// #include<stdio.h>
// void main()
// {
//     int i;
//     for(i=0;i<=50;i=i+2){
//         printf("%d ",i);
//     }
// }
#include<stdio.h>
void main()
{
    int n,i,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        a=n*i;
        printf("%d\n",a);
    }
}