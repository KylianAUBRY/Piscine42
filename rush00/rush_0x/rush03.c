void	ft_putchar(char c);

//parameter cl\cr : character left\right, cmid : character between
void	afficher_x(int x, char cl, char cmid, char cr)
{
	ft_putchar(cl);
	if (x > 1)
	{
		while (x > 2)
		{
			ft_putchar(cmid);
			x--;
		}
		ft_putchar(cr);
	}
}

//parameter cb : character in border, cmid : character in between
void	afficher_y(int y, int x, char cb, char cmid)
{
	int	tps;

	tps = x;
	while (y > 2)
	{
		ft_putchar(cb);
		while (x > 2)
		{
			ft_putchar(cmid);
			x --;
		}
		x = tps;
		if (x > 1)
		{
			ft_putchar(cb);
		}
		y --;
		ft_putchar('\n');
	}
}

//print outpout
void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		afficher_x(x, 'A', 'B', 'C');
		ft_putchar('\n');
		afficher_y(y, x, 'B', ' ');
		if (y >= 2)
		{
			afficher_x(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
	}
}
