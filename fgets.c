//In Older Version of C they ahave getch() but in latest we have fgets
//It we take input as string type
//>>Enter Your Name:
//>>Niket Ranjan
//>> Hi Niket Ranjan
//>> Welcome Home..!!
#include<stdio.h>
int main()
{
    char name[100]; //array size upto 100 they store
    printf("Enter Your Name: \n");
    fgets(name,100,stdin); //it will take char from name variable : 100 is size till 100 write here : 
    // stdin : it will take input as standred input
    printf("Hi %s, \n", name); //print name on display
    printf("Welcome Home..!!");
    return 0;
}