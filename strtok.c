#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	char *buffer;
	size_t bufferSize = 32;
	size_t characters;
	char *token;

	buffer = (char *)malloc(sizeof(char) * bufferSize);
	if (buffer == NULL)
	{
		printf("Could not allocate memory");
		exit(1);
	}
	printf("Enter the string: ");
	characters = getline(&buffer, &bufferSize, stdin);

	token = strtok(buffer, " ");
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}

	return (0);
}

