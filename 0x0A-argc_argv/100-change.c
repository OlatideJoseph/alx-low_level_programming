#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - program main
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coin_index;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins;
	int num_used;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	
	if (cents < 0)
	{
		printf("%d\n", 0);
	}else
	{
		num_coins = 0;
		coin_index = 0;
		while (cents > 0)
		{
			if (cents >= coin_values[coin_index])
			{
				num_used = cents / coin_values[coin_index];
				num_coins += num_used;
				cents -= num_used * coin_values[coin_index];
			}
			coin_index++;
		}
		printf("%d\n", num_coins);
	}

	return (0);


}
