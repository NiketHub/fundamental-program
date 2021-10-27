//swap number without using third variable
//Logic 1. a = a+b | 2nd ==> a = a*b : b = a/b : a = a/b
// 2. b = a-b
// 3. a = a-b
// {5 , 10 | 15 | 15-10 = 5 b | 15 - 5 = 10 a}
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A: \n");
    scanf("%d", &a);
    printf("Enter B: \n");
    scanf("%d", &b);
    a=a+b;
    b= a-b;
    a= a-b;
    printf("-----------------\n");
    printf("SWAPPED VALUE--");
    printf("A : %d | B: %d", a,b);
    return 0;
}