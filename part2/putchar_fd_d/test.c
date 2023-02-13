#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>
#include	<fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	int	fd;
	char	c;
	char	buf[1024];

	c = 'x';
	remove("tmp.txt");
	fd = open("tmp.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	printf("fd: %d\n", fd);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}
