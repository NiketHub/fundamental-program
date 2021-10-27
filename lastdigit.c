//print last didgit of a given number
 #include<stdio.h>
 int main()
 {
     int num,last;
     printf("Enter the Number: ");
     scanf("%d", &num);
     last= num%10;
     printf("%d", last);
     return 0;

 }