/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Khiet Van Phan
Student ID#: 147072235
Email      : kvphan@myseneca.ca
Section    : ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int apples, oranges, pears, tomatoes, cabbages,
        pickApples, pickOranges, pickPears, pickTomatoes, pickCabbages,
        remainApples, remainOranges, remainPears, remainTomatoes, remainCabbages,
        shopping = 1;
    do {

        printf("Grocery Shopping\n");
        printf("================\n");

        do {
            printf("How many APPLES do you need? : ");
            scanf("%d", &apples);
        

            if (apples < 0){
                printf("ERROR: Value must be 0 or more.\n");
            }
            else {
                printf("\n");
                remainApples = apples;
            }
        
        } while (apples < 0);
    
        do {
            printf("How many ORANGES do you need? : ");
            scanf("%d", &oranges);

            if (oranges < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            }
            else {
                printf("\n");
                remainOranges = oranges;
            }
        } while (oranges < 0);
    
        do {
            printf("How many PEARS do you need? : ");
            scanf("%d", &pears);

            if (pears < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            }else {
                printf("\n");
                remainPears = pears;
            }
        } while (pears < 0);

        do {
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoes);

            if (tomatoes < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            }else {
                printf("\n");
                remainTomatoes = tomatoes;
            }
        } while (tomatoes < 0);

        do {
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbages);

            if (cabbages < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            }else {
                printf("\n");
                remainCabbages = cabbages;
            }
        } while (cabbages < 0);
    
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        do {
            
            if (remainApples > 0)
            {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &pickApples);

                if (pickApples > remainApples && remainApples > 0)
                {
                    printf("You picked too many... only %d more APPLE(S) are needed.\n", remainApples);
                }
                else if (pickApples <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickApples > 0 && pickApples < remainApples)
                {
                    remainApples = remainApples - pickApples;
                    printf("Looks like we still need some APPLES...\n");
                }
                else
                {
                    remainApples = remainApples - pickApples;
                    printf("Great, that's the apples done!\n\n");
                }

            }

        } while (remainApples > 0);

        do {

            if (remainOranges > 0)
            {
                printf("Pick some ORANGES... how many did you pick? : ");
                scanf("%d", &pickOranges);


                if (pickOranges > remainOranges && remainOranges > 0)
                {
                    printf("You picked too many... only %d more ORANGE(S) are needed.\n", remainOranges);
                }
                else if (pickOranges <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickOranges > 0 && pickOranges < remainOranges)
                {
                    remainOranges = remainOranges - pickOranges;
                    printf("Looks like we still need some ORANGES...\n");
                }
                else
                {
                    remainOranges = remainOranges - pickOranges;
                    printf("Great, that's the oranges done!\n\n");
                }

            }

        } while (remainOranges > 0);

        do {

            if (remainPears > 0)
            {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &pickPears);


                if (pickPears > remainPears && remainPears > 0)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", remainPears);
                }
                else if (pickPears <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickPears > 0 && pickPears < remainPears)
                {
                    remainPears = remainPears - pickPears;
                    printf("Looks like we still need some PEARS...\n");
                }
                else
                {
                    remainPears = remainPears - pickPears;
                    printf("Great, that's the pears done!\n\n");
                }

            }

        } while (remainPears > 0);

        do {

            if (remainCabbages > 0)
            {
                printf("Pick some CABBAGES... how many did you pick? : ");
                scanf("%d", &pickCabbages);


                if (pickCabbages > remainCabbages && remainCabbages > 0)
                {
                    printf("You picked too many... only %d more CABBAGE(S) are needed.\n", remainCabbages);
                }
                else if (pickCabbages <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickCabbages > 0 && pickCabbages < remainCabbages)
                {
                    remainCabbages = remainCabbages - pickCabbages;
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else
                {
                    remainCabbages = remainCabbages - pickCabbages;
                    printf("Great, that's the cabbages done!\n\n");
                }

            }

        } while (remainCabbages > 0);

        do {

            if (remainTomatoes > 0)
            {
                printf("Pick some TOMATOES... how many did you pick? : ");
                scanf("%d", &pickTomatoes);


                if (pickTomatoes > remainTomatoes && remainTomatoes > 0)
                {
                    printf("You picked too many... only %d more TOMATO(ES) are needed.\n", remainTomatoes);
                }
                else if (pickTomatoes <= 0)
                {
                    printf("ERROR: You must pick at least 1!\n");
                }
                else if (pickTomatoes > 0 && pickTomatoes < remainTomatoes)
                {
                    remainTomatoes = remainTomatoes - pickTomatoes;
                    printf("Looks like we still need some TOMATOES...\n");
                }
                else
                {
                    remainTomatoes = remainTomatoes - pickTomatoes;
                    printf("Great, that's the tomatoes done!\n\n");
                }

            }

        } while (remainTomatoes > 0);

        printf("All the items are picked!\n\n");
        
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shopping);

        printf("\n");

    } while (shopping != 0);

    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}
