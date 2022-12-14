#include "main.h"

char *token(char *line)
{
	char *token, *duptoken;
	char *i = getenv("PATH"), *cp = strdup(i);
	struct stat st;

	token = strtok(cp, ":");
	while (token)
	{
		duptoken = strdup(token);
		strcat(duptoken, "/");
		strcat(duptoken, line);
		if (stat(duptoken, &st) == 0)
			return (duptoken);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
