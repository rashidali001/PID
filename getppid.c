#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void get_ppid()
{
	pid_t ppid;

	ppid = getppid();
	printf("PPID: %u\n", ppid);
}
int main(int argc, char **argv)
{
	get_ppid();

	return (0);
}
