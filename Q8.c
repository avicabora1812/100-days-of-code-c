/* 
Day 4- Question 8
Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15
Input 2:
10
Output 2:
Sum=55
*/
# include <stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The sum of first %d natural numbers is:\n",num);
    for(int i=0;i<=num;i++)
    {
        sum= sum+i;
    }
    printf("Sum=%d", sum);
    return 0;
    }
