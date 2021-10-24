//find square root of a number
//sqrt() : In-Built Function of square root
#include<stdio.h>
#include<math.h>

int main()
{

    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Square Root: %0.2f", sqrt(number));
    return 0;
}