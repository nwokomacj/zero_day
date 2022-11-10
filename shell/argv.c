#include <stdio.h>
#include <unistd.h>
/**
 * main - function
 * @ac: argc argument counter
 * @av: argv[] argument vector or string of char
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i] != NULL)
	/*for(i = 0; i < av[i]; i++)*/
	{
		printf("This is our string %s\n", av[i]);
		i++;
	}
	return (0);
}
