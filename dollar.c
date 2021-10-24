//Convert Doller to ruppes
// 1 $ = Rs. 75 { Rupees/75.00}

#include<stdio.h>
void main()
{
    int rupees;
    float dollar,currency;
    printf("Enter Rupees: ");
    scanf("%d", &rupees);

    printf("-------------------");
    currency=rupees/75.00;
    printf("\nYou Amount %d in INR is : %0.2f Dollar", rupees,currency);

}