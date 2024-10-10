// while loop to output numbers 1-15 and their cubes.
/* 
Author: Opicho Stanley Brimson
Admission No.: CT101/G/23709/24
*/
#include <stdio.h>

int main() {
    int i = 1, sum = 0, sumOfCubes = 0;
    
    while(i<=15){
        printf("%d\t%d\n",i, i*i*i);
        sum +=i;
        sumOfCubes +=i*i*i;
        i++;
    } 
    printf("The sum is: %d\n",sum);
    printf("The sum of cubes is: %d\n",sumOfCubes);

    return 0;
}