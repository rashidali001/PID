#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	char *buffer;
	size_t bufferSize = 32;
	size_t characters;
	
	buffer = (char *)malloc(sizeof(char) * bufferSize);

	if (buffer == NULL)
	{
		printf("unable to allocate memory");
		exit(1);
	}
	printf("$ ");
	characters = getline(&buffer, &bufferSize, stdin);
	printf("%s\n", buffer);
	printf("bufferSize: %lu\n", bufferSize);


	return (0);
}


