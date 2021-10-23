//Find Simple Interest
#include<stdio.h>
int main()
{
    int p,r,t;
    double si;
    printf("Enter P,R,T: ");
    scanf("%d%d%d", &p,&r,&t);

    si=p*r*t;
    printf("Simple Interest: %0.2lf", si);
    return 0;
}