#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	char *argv[] = {"./hello3",NULL};
	printf("Program in hello2.c\n");
	printf("PID: %u\n", getpid());
	
	printf("Program Entering hello3.c");

	execve(argv[0], argv, NULL);

	printf("Program failed to enter hello.3");

	return (0);
}
