#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "I am travelling today for my clearance";
	char *delim = " ";
	char *token = NULL;
	
	token = strtok(str, delim);

	while(token != NULL)
	{
		printf("%s\n", token); 
		token = strtok(NULL, delim);
	}
	return (0);
}
