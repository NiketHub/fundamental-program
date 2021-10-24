//Convert celicus to fahrenheit & F --> c
//  f= (c*1.8)-32;
// f= (c*1.8)+32;
#include<stdio.h>
int main()
{
    float cel=0,fher;
    printf("Enter Temp: ");
    scanf("%f", &cel);
    fher= (cel*1.8)+32;
    printf("%0.1f Cel Temp. in Fher : %0.2f Degree", cel,fher);
    return 0;
}