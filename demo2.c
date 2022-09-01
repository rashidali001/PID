#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *argv[] = {"./hello2", NULL};

	printf("Program in demo2.c\n");
	printf("PID: %u\n", getpid());
	execve(argv[0], argv, NULL);
	printf("Execve Failed!, program still in demo2.c\n");

	return (0);
}
