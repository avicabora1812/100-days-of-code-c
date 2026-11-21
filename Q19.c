/*
Day 10- Question 19
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral
Input 2:
3 3 4
Output 2:
Isosceles
Input 3:
2 3 4
Output 3:
Scalene
*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the lengths of the three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) 
    {
        printf("it is an Equilateral traingle\n");
    } 
    else if (a == b || b == c || a == c) 
    {
        printf("it is an Isosceles triangle\n");
    } 
    else 
    {
        printf("it is a Scalene triangle\n");
    }
    return 0;
}
