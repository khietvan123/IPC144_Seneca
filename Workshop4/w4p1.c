/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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
    int iteration, loop;
    char loopType;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");

    do {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &iteration);

        if (((loopType != 'D' && loopType != 'd') && (loopType != 'W' && loopType != 'w' ) && ( loopType != 'f' && loopType != 'F' ) && (loopType != 'Q' && loopType != 'q')) || ((loopType == 'D' || loopType == 'd' || loopType == 'W' || loopType == 'w' || loopType == 'f' || loopType == 'F') && iteration == 0))
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
        else if ((loopType == 'Q' || loopType == 'q') && iteration != 0)
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n\n");
        }
        else if(iteration != 0 && ( iteration <3 || iteration >20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
        }
        else
        {
            if (loopType == 'D' || loopType == 'd')
            {
                printf("DO-WHILE: ");
                loop = 0;
                do {
                    printf("D");
                    loop = loop + 1;
                } while (loop < iteration );
                printf("\n\n");
            }
            else if (loopType == 'W' || loopType == 'w')
            {
                printf("WHILE   : ");
                loop = 0;
                while(loop <iteration){
                    printf("W");
                    loop = loop + 1;
                }
                printf("\n\n");
            }
            else if (loopType == 'F' || loopType == 'f')
            {
                printf("FOR     : ");
                for (loop = 0; loop < iteration; loop = loop + 1) {
                    printf("F");
                }
                printf("\n\n");
            }
        }
        


    } while ((iteration != 0 || (loopType != 'Q' && loopType != 'q')));

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");

    return 0;
}
