//Find Average of three numbers

#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter A , B & C: ");
    scanf("%d%d%d", &a,&b,&c);
    avg = (a+b+c)/3;
    printf("\nAverage: %0.1f", avg);
    return 0;
}