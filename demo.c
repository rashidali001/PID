#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int ac, char **av)
{
	char *argv[]= {"./hello", NULL};
	printf("I am in demo.c\n");
	printf("PID: %u\n", getpid());
	execv(argv[0],argv);

	printf("Error!, still in demo.c");
	return (0);
}
