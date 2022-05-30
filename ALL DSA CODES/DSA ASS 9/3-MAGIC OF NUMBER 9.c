/*Let us consider the magic of the number 9.

An integer number is divisible by 9 if the sum of its digits is divisible by 9.

Develop a program to determine whether or not the number is divisible by 9.

Input Format

Input should be a number.

Constraints

Number should be greater than 9.

Output Format

Display whether number is Magic number for 9.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    int i,a,sum=0;
    scanf("%d",&n);
    m=n;

    if(n>=9)
    {
        for(i=1;n!=0;i++)
        {
            a=n%10;
            n=n/10;
            sum=sum+a;
        }
        if(sum%9==0)
        {
            printf("%d is magic number for 9",m);
        }
        else

    {
          printf("%d is not a magic number for 9",m);
    }
    }
    else
    {
        printf("Number should be greater than 9");
    }

    return 0;
}
