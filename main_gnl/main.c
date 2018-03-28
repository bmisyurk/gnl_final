#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main(int c, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	c = 0;
	fd = open(argv[1], O_RDONLY);
	get_next_line(fd, &line);
	ft_putendl(line);
	ft_strdel(&line);

	get_next_line(fd, &line);
	ft_putendl(line);
	ft_strdel(&line);
	system("leaks a.out");
	close(fd);
// system("leaks a.out");
	return (0);
}