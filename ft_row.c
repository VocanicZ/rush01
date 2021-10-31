int	p_row(char map[6]) //Count pov rule by assending by row
{
	int	i;
	int	count;
	
	i = 2;
	count = 0;
	while (i < 5)
	{
		if (map[i] > map[i-1])
			count++;
		i++;
	}
	return count;
}

int	d_row(char map[6]) //Count pov rule by deassending by row
{
	int	i;
	int	count;
	
	i = 3;
	count = 0;
	while (i > 0)
	{
		if (map[i] > map[i+1])
			count++;
		i++;
	}
	return count;
}