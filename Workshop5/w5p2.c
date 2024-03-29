/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
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
#define LOG_DAYS 3
#define MIN_YEAR 2012
#define MAX_YEAR 2022

#include <stdio.h>

int main(void)
{
    const int JAN = 1, DEC = 12;

    double morningRatings, eveningRatings,sumMorning = 0, sumEvening = 0, overallRating,
           averageMorning, averageEvening, averageOverall;

    int year, month;
    int flag = 0;
    int i;

    printf("General Well-being Log\n");
    printf("======================\n");

    do {

        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d%d", &year, &month);

        if ((year > MAX_YEAR || year < MIN_YEAR) && (month <= DEC && month >= JAN))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
        }
        else if ((month > DEC || month < JAN) && (year <= MAX_YEAR && year >= MIN_YEAR))
        {
            printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
        }
        else if ((month > DEC || month < JAN) && (year > MAX_YEAR || year < MIN_YEAR))
        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            printf("   ERROR: Jan.(%d) - Dec.(%d)\n", JAN, DEC);
        }
        else
        {
            printf("\n*** Log date set! ***\n\n");

            for (i = 1; i <= LOG_DAYS; i++)
            {
                switch (month) {
                case 1:
                    printf("%d-JAN-%.2d\n", year, i);
                    break;
                case 2:
                    printf("%d-FEB-%.2d\n", year, i);
                    break;
                case 3:
                    printf("%d-MAR-%.2d\n", year, i);
                    break;
                case 4:
                    printf("%d-APR-%.2d\n", year, i);
                    break;
                case 5:
                    printf("%d-MAY-%.2d\n", year, i);
                    break;
                case 6:
                    printf("%d-JUN-%.2d\n", year, i);
                    break;
                case 7:
                    printf("%d-JUL-%.2d\n", year, i);
                    break;
                case 8:
                    printf("%d-AUG-%.2d\n", year, i);
                    break;
                case 9:
                    printf("%d-SEP-%.2d\n", year, i);
                    break;
                case 10:
                    printf("%d-OCT-%.2d\n", year, i);
                    break;
                case 11:
                    printf("%d-NOV-%.2d\n", year, i);
                    break;
                case 12:
                    printf("%d-DEC-%.2d\n", year, i);
                    break;

                }

                do
                {
                    printf("   Morning rating (0.0-5.0): ");
                    scanf("%lf",&morningRatings);

                    if (morningRatings < 0.0 || morningRatings >5.0)
                    {
                        printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    }
                    else
                    {
                        sumMorning = sumMorning + morningRatings;
                    }

                } while (morningRatings < 0.0 || morningRatings > 5.0);

                do
                {
                    printf("   Evening rating (0.0-5.0): ");
                    scanf("%lf", &eveningRatings);

                    if (eveningRatings < 0.0 || eveningRatings >5.0)
                    {
                        printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                    }
                    else
                    {
                        sumEvening = sumEvening + eveningRatings;
                        printf("\n");
                    }

                } while (eveningRatings < 0.0 || eveningRatings > 5.0);
                
                
            }

            flag = 1;
        }

    } while (flag == 0);

    overallRating = sumMorning + sumEvening;
    averageMorning = sumMorning / LOG_DAYS;
    averageEvening = sumEvening / LOG_DAYS;
    averageOverall = overallRating / (LOG_DAYS * 2);

    printf("Summary\n");
    printf("=======\n");
    printf("Morning total rating: %6.3lf\n", sumMorning);
    printf("Evening total rating: %6.3lf\n", sumEvening);
    printf("----------------------------\n");
    printf("Overall total rating: %6.3lf\n\n", overallRating);

    printf("Average morning rating: %4.1lf\n", averageMorning);
    printf("Average evening rating: %4.1lf\n", averageEvening);
    printf("----------------------------\n");
    printf("Average overall rating: %4.1lf\n", averageOverall);



    return 0;
}