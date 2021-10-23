//Volume of cuboid
#include<stdio.h>
int volume; //global variable declaration
int main()
{
    int l,w,h; //Local varibale Declaration
    printf("Enter Length, Width, Height: ");
    scanf("%d%d%d", &l,&w,&h);
    volume=l*w*h;
    printf("Volume: %d", volume);
    return 0;

}