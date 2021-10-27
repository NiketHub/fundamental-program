//print a given number without last
#include<stdio.h>
int main()
{
    int num,widout_last;
    printf("Enter Number: ");
    scanf("%d",&num);
    widout_last=num/10;
    printf("%d", widout_last);
    return 0;
}