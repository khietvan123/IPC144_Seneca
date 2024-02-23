/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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
    const char patSize = 'S', salSize = 'M', tomSize = 'L';

    double smallSize;
    double mediumSize;
    double largeSize;

    int Patty_quantity,Tommy_quantity, Sally_quantity;

    int Patty_subTotal, Patty_Total, Patty_Taxes,
        Tommy_subTotal, Tommy_Total, Tommy_Taxes,
        Sally_subTotal, Sally_Total, Sally_Taxes,
        Total, TAXES, SubTotal;

    int tooniesExcluded, looniesExcluded, quartersExcluded, dimesExcluded, nickelsExcluded, penniesExcluded,
        tooniesExcludedRemaining, looniesExcludedRemaining, quartersExcludedRemaining, dimesExcludedRemaining, nickelsExcludedRemaining, penniesExcludedRemaining,
        tooniesIncluded, looniesIncluded, quartersIncluded, dimesIncluded, nickelsIncluded, penniesIncluded,
        tooniesIncludedRemaining, looniesIncludedRemaining, quartersIncludedRemaining, dimesIncludedRemaining, nickelsIncludedRemaining, penniesIncludedRemaining;

    double averageExcluded, averageIncluded;


    
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
    printf("SMALL  : $%.2lf\n", smallSize);
    printf("MEDIUM : $%.2lf\n", mediumSize);
    printf("LARGE  : $%.2lf\n\n", largeSize);

    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &Patty_quantity);

    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &Tommy_quantity);

    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &Sally_quantity);


    Patty_subTotal = (Patty_quantity * (smallSize * 100));
    Patty_Taxes = (int)((Patty_subTotal * TAX) + 0.5);
    Patty_Total = Patty_subTotal + Patty_Taxes;

    Tommy_subTotal = (Tommy_quantity * (largeSize * 100));
    Tommy_Taxes = (int)((Tommy_subTotal * TAX) + 0.5);
    Tommy_Total = Tommy_subTotal + Tommy_Taxes;

    Sally_subTotal = (Sally_quantity * (mediumSize * 100));
    Sally_Taxes = (int)((Sally_subTotal * TAX) + 0.5);
    Sally_Total = Sally_subTotal + Sally_Taxes;

    Total = (int)Patty_Total + Tommy_Total + Sally_Total;
    SubTotal = (int)Patty_subTotal + Tommy_subTotal + Sally_subTotal;
    TAXES = Patty_Taxes + Tommy_Taxes + Sally_Taxes;

    tooniesExcluded = SubTotal / 200.0;
    tooniesExcludedRemaining = SubTotal % 200  ;

    looniesExcluded = tooniesExcludedRemaining / 100;
    looniesExcludedRemaining = tooniesExcludedRemaining % 100;

    quartersExcluded = looniesExcludedRemaining /25;
    quartersExcludedRemaining = looniesExcludedRemaining % 25;

    dimesExcluded = quartersExcludedRemaining /10;
    dimesExcludedRemaining = quartersExcludedRemaining % 10;

    nickelsExcluded = dimesExcludedRemaining/ 5;
    nickelsExcludedRemaining = dimesExcludedRemaining % 5;

    penniesExcluded = (nickelsExcludedRemaining/1);
    penniesExcludedRemaining = nickelsExcludedRemaining % 1;

    averageExcluded = (((double)SubTotal / 100) / ((Patty_quantity + Tommy_quantity + Sally_quantity)*1.0));

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallSize, Patty_quantity,(double)Patty_subTotal/100, (double)Patty_Taxes/100, (double)Patty_Total/100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, mediumSize, Sally_quantity, (double)Sally_subTotal / 100, (double)Sally_Taxes / 100, (double)Sally_Total / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeSize, Tommy_quantity, (double)Tommy_subTotal / 100, (double)Tommy_Taxes / 100, (double)Tommy_Total / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", (double)SubTotal/100, (double)TAXES/100, (double)Total/100);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)SubTotal/100);
    printf("Toonies  %3d %9.4lf\n", tooniesExcluded, (double)tooniesExcludedRemaining/100);
    printf("Loonies  %3d %9.4lf\n",looniesExcluded,(double)looniesExcludedRemaining/100);
    printf("Quarters %3d %9.4lf\n", quartersExcluded, (double)quartersExcludedRemaining/100);
    printf("Dimes    %3d %9.4lf\n", dimesExcluded, (double)dimesExcludedRemaining/100);
    printf("Nickels  %3d %9.4lf\n", nickelsExcluded, (double)nickelsExcludedRemaining/100);
    printf("Pennies  %3d %9.4lf\n\n",penniesExcluded, (double)penniesExcludedRemaining/100);

    printf("Average cost/shirt: $%.4lf\n\n",averageExcluded);

    tooniesIncluded = Total / 200.0;
    tooniesIncludedRemaining = Total % 200;

    looniesIncluded = tooniesIncludedRemaining / 100;
    looniesIncludedRemaining = tooniesIncludedRemaining % 100;

    quartersIncluded = looniesIncludedRemaining / 25;
    quartersIncludedRemaining = looniesIncludedRemaining % 25;

    dimesIncluded = quartersIncludedRemaining / 10;
    dimesIncludedRemaining = quartersIncludedRemaining % 10;

    nickelsIncluded = dimesIncludedRemaining / 5;
    nickelsIncludedRemaining = dimesIncludedRemaining % 5;

    penniesIncluded = (nickelsIncludedRemaining / 1);
    penniesIncludedRemaining = nickelsIncludedRemaining % 1;

    averageIncluded = (((double)Total / 100) / ((Patty_quantity + Tommy_quantity + Sally_quantity) * 1.0));

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (double)Total / 100);
    printf("Toonies  %3d %9.4lf\n", tooniesIncluded, (double)tooniesIncludedRemaining / 100);
    printf("Loonies  %3d %9.4lf\n", looniesIncluded, (double)looniesIncludedRemaining / 100);
    printf("Quarters %3d %9.4lf\n", quartersIncluded, (double)quartersIncludedRemaining / 100);
    printf("Dimes    %3d %9.4lf\n", dimesIncluded, (double)dimesIncludedRemaining / 100);
    printf("Nickels  %3d %9.4lf\n", nickelsIncluded, (double)nickelsIncludedRemaining / 100);
    printf("Pennies  %3d %9.4lf\n\n", penniesIncluded, (double)penniesIncludedRemaining / 100);
    
    printf("Average cost/shirt: $%.4lf\n", averageIncluded);

    return 0;
}