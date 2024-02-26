#include <stdio.h>
int main()
{
    // initialize the variables
    int i;                                           // value to start or end
    int an1, an2, an3, an4, an5;                     // answers
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;      // correct point
    int p01 = 0, p02 = 0, p03 = 0, p04 = 0, p05 = 0; // incorrect point
    int p = 0, p0 = 0;                               // total points of correct and incorrect
    int pp = 0, ppp = 0;                             // total how many correct and incorrect

    printf(" WELCOME TO THE GAME\n\n");

    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");

    scanf("%d", &i);

    if (i == 7)
    {
        printf("The game has started\n\n");
        printf("1) Which one is the first search engine in internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");

        printf("enter your answer: ");
        scanf("%d", &an1);

        if (an1 == 2)
        {
            printf("Correct Answer\n");
            p1 = 5;
            printf("You have scored %d point\n", p1);
            pp++;
        }
        else
        {
            printf("Incorrect Answer\n");
            p01 = 0;
            printf("You have scored %d point\n", p01);
            ppp++;
        }

        printf("\n2) Who is the father of C language?\n\n");
        printf("1) Steve Jobs\n");
        printf("2) James Gosling\n");
        printf("3) Dennis Ritchie\n");
        printf("4) Rasmus Lerdorf\n");

        printf("enter your answer: ");
        scanf("%d", &an2);

        if (an2 == 3)
        {
            printf("Correct Answer\n");
            p2 = 5;
            printf("You have scored %d point\n", p2);
            pp++;
        }
        else
        {
            printf("Incorrect Answer\n");
            p02 = 0;
            printf("You have scored %d point\n", p02);
            ppp++;
        }

        printf("\n3) Which of the following is not a valid C variable name?\n\n");
        printf("1) int number;\n");
        printf("2) float rate;\n");
        printf("3) int variable_count;\n");
        printf("4) int $main;\n");

        printf("enter your answer: ");
        scanf("%d", &an3);

        if (an3 == 4)
        {
            printf("Correct Answer\n");
            p3 = 5;
            printf("You have scored %d point\n", p3);
            pp++;
        }
        else
        {
            printf("Incorrect Answer\n");
            p03 = 0;
            printf("You have scored %d point\n", p03);
            ppp++;
        }

        printf("\n4) All keywords in C are in ____________\n\n");
        printf("1) LowerCase letters\n");
        printf("2) UpperCase letters\n");
        printf("3) CamelCase letters\n");
        printf("4) None of the mentioned\n");

        printf("enter your answer: ");
        scanf("%d", &an4);

        if (an4 == 1)
        {
            printf("Correct Answer\n");
            p4 = 5;
            printf("You have scored %d point\n", p4);
            pp++;
        }
        else
        {
            printf("Incorrect Answer\n");
            p04 = 0;
            printf("You have scored %d point\n", p04);
            ppp++;
        }

        printf("\n5) Which is valid C expression?\n\n");
        printf("1) int my_num = 100,000;\n");
        printf("2) int my_num = 100000;\n");
        printf("3) int my num = 1000;\n");
        printf("4) int $my_num = 10000;\n");

        printf("enter your answer: ");
        scanf("%d", &an5);

        if (an5 == 2)
        {
            printf("Correct Answer\n");
            p5 = 5;
            printf("You have scored %d point\n", p5);
            pp++;
        }
        else
        {
            printf("Incorrect Answer\n");
            p05 = 0;
            printf("You have scored %d point\n", p05);
            ppp++;
        }

        printf("The quiz is over now\n\n");
        p = p1 + p2 + p3 + p4 + p5;
        p0 = p01 + p02 + p03 + p04 + p05;
        if (p == 25 && p0 == 0)
        {
            p0 = 0;
        }
    }
    else if (i == 0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("invalid\n\n");
    }
    printf("\ntotal wins are:-\n\n");
    printf("Correct points = %d \n, answer= %d\n\n", p, pp);
    printf("Incorrect points = %d \n, answer= %d\n\n", p0, ppp);
    return 0;
}