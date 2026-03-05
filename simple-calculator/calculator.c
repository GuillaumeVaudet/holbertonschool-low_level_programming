#include <stdio.h>

int user_choice(void)
{
    int choice;

    printf("Simple Calculator\n"
            "1) Add\n"
            "2) Subtract\n"
            "3) Multiply\n"
            "4) Divide\n"
            "0) Quit\n"
            "Choice: ");

    scanf("%d", &choice);
    
    return (choice);
}

int main(void)
{
    int choice = user_choice();
    /* Menu => int */
    /* that the int value is within the valid range */

    int first_number;
    int second_number;

    while (choice != 0)
    {
        switch (choice)
        {
            case 1:
                printf("Premier nombre: \n");
                scanf("%d", &first_number);
                printf("Second nombre: \n");
                scanf("%d", &second_number);
                printf("Le résultat est : %d \n\n", (first_number + second_number));
                choice = user_choice();
                break;
            case 2:
                printf("Premier nombre: \n");
                scanf("%d", &first_number);
                printf("Second nombre: \n");
                scanf("%d", &second_number);
                printf("Le résultat est : %d \n\n", (first_number - second_number));                
                choice = user_choice();
                break;
            case 3:
                printf("Premier nombre: \n");
                scanf("%d", &first_number);
                printf("Second nombre: \n");
                scanf("%d", &second_number);
                printf("Le résultat est : %d \n\n", (first_number * second_number));                
                choice = user_choice();
                break;
            case 4:
                printf("Premier nombre: \n");
                scanf("%d", &first_number);
                printf("Second nombre: \n");
                scanf("%d", &second_number);

                if (second_number == 0)
                {
                    printf("Le diviseur ne doit pas être égal à zéro.\n");
                    break;
                }
                printf("Le résultat est : %.2f \n\n", (float)first_number / second_number);                
                choice = user_choice();
                break;
            case 0:
                break;
        }
    }
    
    printf("Bye!\n");
    return (0);
}