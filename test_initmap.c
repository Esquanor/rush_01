
#include <stdlib.h>
#include <stdio.h>

int	**ft_initmap(char *p, int len);
void	ft_showmap(int **map, int l);

int main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	
	int **map = ft_initmap("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2", atoi(av[1]));
	int len = atoi(av[1]);
	if (!map)
		return (0);
	
	int l = 0;
	int c;
	while (l < (len + 2))
	{
		c = 0;
		while (c < (len + 2))
		{
			printf("%d ", map[l][c]);
			c++;
		}
		printf("\n");
		l++;
	}

	printf("\n");

	ft_showmap(map, len);

	return (0);
}
