/*Given two square Matrices A[][] and B[][]. Your task is to complete the function multiply which stores the multiplied matrices in a new matrix C[][].

Input Format

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the squarematrix . Then in the next two lines are N*N space separated values of the matrix A[][] and B[][].

Constraints

1 <=T<= 100 1 <= N <= 20

Output Format

For each test case in a new line output will be the space separated values of the matrix C[][].*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, z;
    int first[10][10], second[10][10], multiply[10][10];
    int t;
    scanf("%d",&t);
    for(z=0;z<t;z++)
    {
         scanf("%d",&n);

         for (i = 0; i < n; i++)
         for (j = 0; j < n; j++)
         scanf("%d", &first[i][j]);

         for (i = 0; i < n; i++)
         for (j = 0; j < n; j++)
         scanf("%d", &second[i][j]);

         for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
         multiply[i][j]=0;
         for (k = 0; k < n; k++) {
         multiply[i][j] = multiply[i][j] + first[i][k]*second[k][j];
           }
        }
    }

        for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        printf("%d\t", multiply[i][j]);
          }
            printf("\n");
       }
           return 0;
}
