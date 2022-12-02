#include "main.h"

int main(int ac, char **av)
{
	char *a;

	if (ac > 0)
		a = token(av[1]);
	printf("%s\n", a);
	return (1);
}
