//Swap two number with 3rd variable
// take a extra space and put first value and then assign in 2nd and from extra get the 2rnd value...
//a=5,b=10, temp
// temp = first;
// first= sec
// sec = temp

#include<stdio.h>
int main()
{
    int a,b,z;
    printf("Enter Firsrt Number: \n");
    scanf("%d", &a);
    printf("Enter Second Number: \n");
    scanf("%d", &b);
    printf("-----------------------\n");
    z=a;
    a=b;
    b=z;
    printf("Swapped Value- \n");
    printf("A: %d | B: %d", a,b);
    return 0;
}