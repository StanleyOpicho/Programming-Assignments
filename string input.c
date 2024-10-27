//string input 
/*
Author: Stanley Opicho
Admission No.: CT101/G/23709/24
*/
#include <stdio.h>
int main(){
    char title[30],author[30],ISBN[30];
    int year;
    float price;
    
    printf("Enter the Book Title: ");
    scanf("%s",title);
    
    printf("Enter your Name: ");
    scanf("%s",author);
    
    printf("Enter the ISBN: ");
    scanf("%s",ISBN);
    
    printf("Enter the year published: ");
    scanf("%d",&year);
    
    printf("Enter the Price: ");
    scanf("%f",&price);
    
    printf("Book Title: %s\n",title);
    printf("Author Name: %s\n",author);
    printf("Year Published: %d\n",year);
    printf("ISBN: %s\n",ISBN);
    printf("Book Price: %.2f",price);
    
    
    return 0;
}