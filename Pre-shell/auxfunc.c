#include "main.h"

char **tokenize(char *line)
{
	char **tokens;
	int len = 8, i = 0;

	tokens = malloc(sizeof(char) * len);
	if (token == 00)
		return (00);
	
	tokens[i] = strtok(line, " ");
	while (token)
	{
		i++;
		tokens[i] = strtok(NULL, " ");
		tokens = realloc(tokens, sizeof(char *) * (i + 1));
		if (!tokens)
		{
			printf("Realloc fail");
			return (00);
		}
	}
	return (tokens);
}
