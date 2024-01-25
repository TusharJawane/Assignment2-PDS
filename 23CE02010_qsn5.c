#include<stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    if(a&1==1){printf("\n%d is an odd number", a);}
    else{printf("\n%d is an even number", a);}

}