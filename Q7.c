/*
Day 4-Question 7
Q7: Write a program to swap two numbers without using a third variable.

Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10
Input 2:
7 14
Output 2:
After swap: 14 7
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the numbers to be swapped:");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping:\n");
    printf("First number= %d",a);
    printf("Second number= %d",b);
    return 0;
}
