void	rush4x4(char col1up, char col2up, char col3up, char col4up, char col1down, char col2down, char col3down, char col4down, char row1left, char row2left, char row3left, char row4left, char row1right, char row2right, char row3right, char row4right)
{
	char	map[6][6];
	int	row;
	int	col;
	int	i;
	int	j;
	
	map[0][0] = ' ';
	map[0][1] = col1up;
	map[0][2] = col2up;
	map[0][3] = col3up;
	map[0][4] = col4up;
	map[0][5] = ' ';
	map[5][0] = ' ';
	map[5][1] = col1down;
	map[5][2] = col2down;
	map[5][3] = col3down;
	map[5][4] = col4down;
	map[5][5] = ' ';
	map[1][0] = row1left;
	map[2][0] = row2left;
	map[3][0] = row3left;
	map[4][0] = row4left;
	map[1][5] = row1right;
	map[2][5] = row2right;
	map[3][5] = row3right;
	map[4][5] = row4right;
	//todo {main}
	emptymap(map); //test
	showmap(map); //test
	printmap(map); //test
}

int	main() //Test parameter
{
	rush4x4('4', '3', '2', '1', '1', '2', '2', '2', '4', '3', '2', '1', '1', '2', '2', '2');
	return 0;
}