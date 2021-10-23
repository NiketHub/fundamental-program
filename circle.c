//Area of the Circle : pie*r*r

#include<stdio.h>
int main()
{
    int r;
    float pie=3.14,area;
    printf("Enter Radius: ");
    scanf("%d", &r); //take input from user scanf() : &r - addres of r variable : %d - format specifer for int
    area=pie*r*r;
    printf("Area: %f", area); 
    return 0;
}