#include "main.h"

char **tokenize(char *line)
{
	char *token, **tokens;
	int len = 8, i = 0;

	token = malloc(sizeof(char) * len);
	if (token == 00)
		return (00);
	
	token = strtok(line, " ");
	while (token)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, " ");
		tokens = realloc(tokens, sizeof(char *) * (i + 1));
		if (!tokens)
		{
			printf("Realloc fail");
			return (00);
		}
	}
	return (tokens);
}
