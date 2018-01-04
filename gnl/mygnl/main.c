#include "get_next_line.h"
#include "libft/libft.h"

int	main(void)
{
	char	*line;
	int	fd;

	fd = open("42", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putstr(line);
		ft_strdel(&line);
	}
	return (0);
}
