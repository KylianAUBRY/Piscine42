#include "rush02.h"

void    ft_thousand(t_numbers *numbers, char cen, char di, char unit)
{
    ft_hundred(numbers, cen, di, unit);
    if (cen != '0' || di != '0' || unit != '0')
    {
        ft_putchar(' ');
        ft_putstr(numbers[29].name);
    }
}

void    ft_million(t_numbers *numbers, char cen, char di, char unit)
{
    ft_hundred(numbers, cen, di, unit);
    if (cen != '0' || di != '0' || unit != '0')
    {
        ft_putchar(' ');
        ft_putstr(numbers[30].name);
    }
}

void    ft_billion(t_numbers *numbers, char unit)
{
    if (unit != '0')
    {
        ft_unite(numbers, unit);
        ft_putchar(' ');
        ft_putstr(numbers[31].name);
    }
}