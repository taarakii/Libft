#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<fcntl.h>

void	ft_putstr_fd(char *s, int fd);

int	main(int argc, char *argv[])
{
	int	fd;

	remove("tmp.txt");
	fd = open("tmp.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (argc >= 2)
		ft_putstr_fd(argv[1], fd);
	close(fd);
	return (0);
}
