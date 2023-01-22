#include <stdlib.h>
#include <stdio.h>

void	func_print_char_n(int c, int n)
{
	while (n > 0)
	{
		printf("%c", c);
		n--;
	}
	return ;
}

void	func_increase(int cc, int c, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		i++;
		printf("call/n - %d/%d: ", cc, i);
		func_print_char_n(c, i);
		printf("\n");
	}
	return ;
}

void	func_increase_recursive(int cc, int c, int n)
{
	if (n > 0)
	{
		printf("call/n - %d/%d: ", cc, n);
		printf("\n");
		func_increase_recursive(cc + 1, c, n - 1);
		printf("call/n - %d/%d: ", cc, n);
		func_print_char_n(c, n);
		printf("\n");
	}
	return ;
}

int	main(int argc, char **argv)
{
	// clear && gcc -Wall -Wextra -Werror recursive_00.c && ./a.out X 3
	int	c;
	int	n;
	static int	cc;

	if (argc == 3)
	{
		cc = 1;
		c = argv[1][0];
		n = atoi(argv[2]);
		printf("func_increase(%s, %s):\n", argv[1], argv[2]);
		func_increase(cc, c, n);
		printf("\n");
		cc = 1;
		printf("func_increase_recursive(%s, %s):\n", argv[1], argv[2]);
		func_increase_recursive(cc, c, n);
	}
}
