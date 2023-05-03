#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string digit
 * @str : array str
 * Return : Always 0 (Success)
 */

int check_num(char *str)
{
	/*declaring the var*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*string count*/

	{
		if (!isdigit(str[count]))/*check if str are a digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints the name of the program
 * @argv : arguments
 * @argc : argument count
 * Return : Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*declaring var*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc)/*checks the entire array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);/*convert string to int*/
			sum += str_to_int;
		}
		/*condition if the number contains a symbol*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);/*prints sum*/
	return (0);
}
