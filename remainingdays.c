//Program to find remaining day of the month
//Enter Days : 65
//Months : 2 (Days/30)
//Remaining : 5 (days%30)
#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter the Days: ");
    scanf("%d",&a);
    b = a/30;
    printf("Total Months: %d", b);
    r = a%30;
    printf("\nRemaining Days: %d", r);
    return 0;

}