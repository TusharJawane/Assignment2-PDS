#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a,b,c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int max;
    max=(a > b) ?  ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d\n",max);
}