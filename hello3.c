#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	printf("program in hello3.c\n");
	printf("PID: %u\n", getpid());

	return (0);
}
