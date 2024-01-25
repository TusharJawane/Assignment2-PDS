#include<stdio.h>
void main()
{
    int tot;
    printf("Enter total days\n");
    scanf("%d", &tot);
    int yr=(tot/365);
    tot=tot-(yr*365);
    int mon=(tot/30);
    tot=tot-(mon*30);
    int wk=(tot/7);
    tot=tot-(wk*7);
    printf("Years: %d\n", yr);
    printf("Months: %d\n", mon);
    printf("Weeks: %d\n", wk);
    printf("Days: %d\n", tot);
}