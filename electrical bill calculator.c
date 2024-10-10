//program to calculate electrical bill 
/*
Author: Opicho Stanley Brimson
Admission No.: CT101/G/23709/24
*/

#include <stdio.h>
int main (){
int CustomerID, unitsConsumed;
char customerName[40];
float chargesperunit, totalbill,surcharge;

printf("Enter your ID: ");
scanf("%d",&CustomerID);

printf("Enter your name: ");
scanf("%s",&customerName);

printf("Enter units consumed: ");
scanf("%d",&unitsConsumed);

if(unitsConsumed <= 199) {chargesperunit = 1.20;}
else if(unitsConsumed < 400) {chargesperunit = 1.50;}
else if(unitsConsumed < 600) {chargesperunit = 1.80;}
else{chargesperunit = 2.00;}

totalbill = unitsConsumed * chargesperunit;

if(totalbill > 400) {surcharge = totalbill * 0.15;}

if(totalbill < 100) {totalbill = 100;}
else{totalbill += surcharge;}

printf("CustomerID: %d\n",CustomerID);
printf("customerName: %s\n",customerName);
printf("unitsConsumed: %d\n",unitsConsumed);
printf("chargesperunit: %.2f\n",chargesperunit);
printf("totalbill: %.2f",totalbill);
      return 0;
}
