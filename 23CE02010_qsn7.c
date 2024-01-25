#include<stdio.h>
#include<math.h>
void main()
{
    int mealcost, tip_percent, tax_percent;
    printf("Enter mealcost, tip_percent, tax_percent\n ");
    scanf("%d", &mealcost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);
    int tax=round((tax_percent*mealcost)/100);
    int tip=round((tip_percent*mealcost)/100);
    int tot= mealcost+tax+tip;
    printf("%d", tot);

}