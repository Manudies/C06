CABECERA





#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc <= 1)
		return (0);
	i = argc -1;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
