#include<stdio.h>
void main()
{
    printf("enter a number\n");
    int a;
    scanf("%d", &a);
   int d= ((a>100) ? ((a<200) ? ((a%2==1) ? 1 : 0) : 0) : 0);
   if(d==1){printf("true");}
   else{printf("false");}
}