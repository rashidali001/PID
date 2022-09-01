#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	printf("I am in hello.c\n");
	printf("PID: %u\n", getpid());

	return (0);

}
