int	p_col(char map[6][6], int col) //Count pov rule by assending by column
{
	int	i;
	int	count;
	
	i = 2;
	count = 0;
	while (i <5)
	{
		if (map[i][col] > map[i-1][col])
			count++;
		i++;
	}
	return count;
}

int	d_col(char map[6][6], int col) //Count pov rule by deassending by column
{
	int	i;
	int	count;
	
	i = 3;
	count = 0;
	while (i > 0)
	{
		if (map[i][col] > map[i+1][col])
			count++;
		i++;
	}
	return count;
}