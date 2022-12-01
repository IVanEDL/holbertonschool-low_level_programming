#include "main.h"

int main(void)
{
	char **tokens;
	char *buffer;
	size_t *bufsize = 0;
	int a;

	while (1)
	{
		printf("$ ");
		getline(&buffer, bufsize, NULL);
		tokens = malloc(8 * sizeof(char *));
		if (tokens == 00)
		{
			printf("a");
			return (00);
		}
		tokens = tokenize(strdup(buffer));
		for (a = 0; tokens[a] != 00; a++)
			printf("%s", tokens[a]);
	}
	return (0);
}
