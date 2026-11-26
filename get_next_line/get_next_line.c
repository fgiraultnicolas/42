#include "get_next_line.h"

/*size_t	read_len(int fd)
{
	size_t	l;
	char	buf_tmp[READ_SIZE];
	size_t	i;
	int	bool;

	l = 0;
	bool = 0;
	while (bool == 0)
	{
		i = 0;
		read(fd, buf_tmp, READ_SIZE);
		while (buf_tmp[i] != '\n' || buf_tmp[i] != '\0')
		{
			i++;
			l++;
		}
		if (buf_tmp[i] == '\n')
			bool = 1;
	}
	return (l);
}*/

// file len with loop on READ_SIZE until '\0'

size_t	file_len(int fd)
{
	char	buf_tmp[READ_SIZE];
	size_t	bytes_read;

	bytes_read = 0;
	while (bytes_read != 0)
		bytes_read += read(fd, buf_tmp, READ_SIZE);
}

// create a string containing the full file with malloc(sizeof(char) * file_len)
// '\n' count <=> line count
// static var inside of main func that stores the current line index

char	*get_next_line(int fd)
{
	char	*l;
	char	*buf_tmp;

	while ()
}
