#include <stdio.h>
#include <stdlib.h>

/**
 * main - gets input from the user
 * Retur: Always 0
 */
int main(void)
{
	size_t n;
	char *buf = NULL;

	printf("$ ");
	getline(&buf, &n, stdin);
	printf("%s", buf);
	free(buf);
		return (0);
}

