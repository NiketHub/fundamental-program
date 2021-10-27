//Swap two numbers without using third variable
//first, second = second , first
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A: \n");
    scanf("%d", &a);
    printf("Enter B: \n");
    scanf("%d", &b);
    //a,b=b,a;
    printf("A : %d | B : %d",b,a);
    return 0;
}