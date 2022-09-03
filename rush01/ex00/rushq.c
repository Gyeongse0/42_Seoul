#include <unistd.h>

void	printQueens(int map[][])
{
	int		i;

	i = 0;
	while (map[i])
	{
		write(1, &map[i], 1);
		write(1, " ", 1);
		if (i % 4 == 3)
			write(1, "\n", 1);
		i++;
	}
}

void check(map, char **av) // 
{
	int	k;

	k = 0;
	while(k <= 31)
	{
		if (k <= 7)
		{
		}
		if (k <= 15)
		{
		}
		if (k <= 23)
		{
		}
		if (k <= 31)
		{
		}
}

void	boxes(map, char **av)
{
	int i;
	int j;
	inf flag;

	flag = 4;
	i = 0;
	while(flag >= 1)
	{
		while (i <= 3)
		{
			j = 0;
			while(j <= 3 && map[i][j] == '\0')
			{
					if (check(av, map[i][j] == 1)
						break;
					else
						j++;
			}
			i++;
		}
		flagg--;
	}
	 if (한바퀴 돌^_)
    {
            printQueens();
            return;
    }
}

	


int		main(int ac, char **av)
{
	int	 map[4][4] = { 0 };
	int	i;

	//map = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	i = 0;
	if ( ac == 2)
	{
		while (av[1][i]) //입력값 와일
		{
			if (av[1][i] == 4) //
			{
				if (i <= 16)  //col 이면
				{
					if (i <= 8)
						map[0][i / 2] = 4;
					else if (i <= 16)
						map[3][(i - 8) / 2] = 4;
				}
				else if (i <= 32)
				{
                	if (i <= 24)
						map[(i - 16) / 2][0] = 4;
                	else if (i <= 32)
						map[(i - 24) / 2][3] = 4;
				}
			}
			i++;
		}
		printQueens(map);
	}
}

