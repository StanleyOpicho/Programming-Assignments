//string
#include <stdio.h>

int main() {
    char BookTitle[30]="Introduction to c programming.";
    char Author[30]="John Smith";
    int yearpublished=2024;
    char ISBN[30]="46465679098";
    float price=49.99;
    
    printf("Title: %s\n",BookTitle);
    printf("Author: %s\n",Author);
    printf("Publication year: %d\n",yearpublished);
    printf("ISBN: %s\n",ISBN);
    printf("Price: %.2f\n",price);

    return 0;
}