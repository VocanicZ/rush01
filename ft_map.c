void	emptymap(char map[6][6]) //Fill 4*4 array with '0'
{
	int	i;
	int	j;
	
	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			map[i][j] = '0';
			j++;
		}
		i++;
	}
}

void	showmap(char map[6][6]) //Show 2d array included input set
{
	int	row;
	int	col;
	
	row = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			putchar(&map[row][col]);
			if (col != 6)
				putchar(" ");
			col++;
		}
		putchar("\n");
		row++;
	}
}

void	printmap(char map[6][6]) //Show event 2d array 4*4
{
	int	row;
	int	col;
	
	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			putchar(&map[row][col]);
			if (col != 5)
				putchar(" ");
			col++;
		}
		putchar("\n");
		row++;
	}
}