/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Khiet Van Phan
Student ID#: 147072235
Email      : kvphan@myseneca.ca
Section    : ZEE

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S';

    double smallSize;
    double mediumSize;
    double largeSize;
    
    int quantity;
    int subTotal, Total, Taxes;
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallSize);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumSize);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeSize);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n",smallSize);
    printf("MEDIUM : $%.2lf\n", mediumSize);
    printf("LARGE  : $%.2lf\n\n", largeSize);
    
    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &quantity);

    subTotal = (quantity * (smallSize*100));
    Taxes = (int)((subTotal * TAX)+0.5);
    Total = subTotal + Taxes;

    printf("\nPatty's shopping cart...\n");
    printf("Contains : %d shirts\n", quantity);
    printf("Sub-total: $%8.4lf\n", (double)subTotal/100);   //143.6800
    printf("Taxes    : $%8.4lf\n", (double)Taxes/100);                  //18.6800
    printf("Total    : $%8.4lf\n", (double) Total/100);                  //162.3600

    return 0;
}
