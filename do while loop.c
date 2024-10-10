// do while loop to output numbers 1-15 and their squares.
/* 
Author: Opicho Stanley Brimson
Admission No.: CT101/G/23709/24
*/
#include <stdio.h>

int main() {
 int i = 1, sum = 0, sumOfSquares = 0;
 
 do{ 
    sum +=i;
    sumOfSquares +=i*i;
    printf("%d\t%d\n",i,i*i);
    i++;
 }
 while(i<=15);
 printf("The sum is: %d\n",sum);
 printf("The sum of squares is: %d\n",sumOfSquares);

    return 0;
}

