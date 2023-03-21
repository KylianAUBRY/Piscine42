#include "bbq.h"

void    print_map(t_cube *cube)
{
    int i;
    int j;

    j = 0;
    i = 0;
	printf("Remplissage : %c\n", cube->square);
    printf("Obstacle : %c\n", cube->barrier);
	printf("Vide : %c\n", cube->empty);
	printf("Lignes : %d\n", cube->nb_line);
    while (i < cube->nb_line)
    {
        while (cube->map[i][j] != '\0')
        {
            ft_putchar(cube->map[i][j]);
            j ++;
        }
        ft_putchar('\n');
        j = 0;
        i ++;
    }
}