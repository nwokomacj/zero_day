#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("This is my PID %u\n", my_pid);
	my_pid = getppid();
	printf("This is my PPID %u\n", my_pid);
	return (0);
}
