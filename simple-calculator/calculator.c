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
	return (0);
}

/**
* main - Entry pint
*
* Return: Always return 0 (Success)
*/
int main(void)
{
	int choice = user_choice();

	int first_number, second_number;

	while (choice != 0)
	{
		switch (choice)
		{
			case 1:
				get_numbers(&first_number, &second_number);
				printf("Le résultat est : %d \n\n", (first_number + second_number));
				choice = user_choice();
				break;
			case 2:
				get_numbers(&first_number, &second_number);
				printf("Le résultat est : %d \n\n", (first_number - second_number));
				choice = user_choice();
				break;
			case 3:
				get_numbers(&first_number, &second_number);
				printf("Le résultat est : %d \n\n", (first_number * second_number));
				choice = user_choice();
				break;
			case 4:
				get_numbers(&first_number, &second_number);
				if (second_number == 0)
				{
					printf("Le diviseur ne doit pas être égal à zéro.\n");
					break;
				}
				printf("Le résultat est : %.2f \n\n",
					(float)first_number / second_number);
				choice = user_choice();
				break;
			case 0:
				break;
		}
	}
	printf("Bye!\n");
	return (0);
}
