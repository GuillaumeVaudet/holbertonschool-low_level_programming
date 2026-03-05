#include <stdio.h>

/**
* user_choice - Print a menu for calculator
*
* Return: Return an integer that represent the user choice
*/
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

/**
* get_numbers - Take user input to save into variables
*
* @first: First address where to save user choice
* @second: First address where to save user choice
*
* Return: Always return 0 (Success)
*/
void get_numbers(int *first, int *second)
{
	printf("Premier nombre: \n");
	scanf("%d", first);
	printf("Second nombre: \n");
	scanf("%d", second);
}

/**
* handle_choice - Take user input to save into variables
*
* @choice: Take user choice to navigate into calculator menu
* @first_address: First address where to save user choice
* @second_address: First address where to save user choice
*
* Return: void
*/
void handle_choice(int choice, int *first_address, int *second_address)
{
		switch (choice)
		{
			case 1:
				get_numbers(first_address, second_address);
				printf("Le résultat est : %d \n\n", (*first_address + *second_address));
				break;
			case 2:
				get_numbers(first_address, second_address);
				printf("Le résultat est : %d \n\n", (*first_address - *second_address));
				break;
			case 3:
				get_numbers(first_address, second_address);
				printf("Le résultat est : %d \n\n", (*first_address * *second_address));
				break;
			case 4:
				get_numbers(first_address, second_address);
				if (*second_address == 0)
				{
					printf("Le diviseur ne doit pas être égal à zéro.\n");
					break;
				}
				printf("Le résultat est : %.2f \n\n",
					(float)*first_address / *second_address);
				break;
			case 0:
				break;
			default:
				printf("Choix invalide.\n");
				break;
		}
}
/**
* main - Entry pint
*
* Return: Always return 0 (Success)
*/
int main(void)
{
	int choice;
	int first_number, second_number;

	choice = user_choice();
	while (choice != 0)
	{
		handle_choice(choice, &first_number, &second_number);
		choice = user_choice();

	}
	printf("Bye!\n");
	return (0);
}
