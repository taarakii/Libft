#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	fd;
	char	buf[1024];

	remove("tmp.txt");
	fd = open("tmp.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	ft_putchar_fd(fd, 'X');
	ft_putchar_fd(fd, 'X');
	ft_putchar_fd(fd, 'X');
	close(fd);
	return (0);
}
