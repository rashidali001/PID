#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char *argv[] = {"/usr/ ls -l", NULL};

	execv(argv[0], argv);
	printf("Error!");
	 return (0);
}
