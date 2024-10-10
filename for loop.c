// for loop to output numbers 1-15 and their squares.
/* 
Author: Opicho Stanley Brimson
Admission No.: CT101/G/23709/24
*/
#include <stdio.h>

int main() {
    int i, sum = 0;
    int sumOfSquares = 0;
    
    for(i = 1; i<=15; i++){
        printf("%d\t%d\n",i,i*i);
     sum += i;
     sumOfSquares +=i*i;
    }
    printf("The sum is: %d\n",sum);
    printf("The sum of squares is:%d\n",sumOfSquares);
    

    return 0;
}