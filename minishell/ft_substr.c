#include "get_next_line.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_substr(char *s, unsigned int start, unsigned int len)
{
	char			*s1;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = start;
	s1 = (char*)malloc(sizeof(char) * len + 1);
	if (s1)
	{
		if (i > (unsigned int)ft_strlen(s))
		{
			s1[j] = '\0';
			return (s1);
		}
		while (i < start + len)
		{
			s1[j] = s[i];
			i++;
			j++;
		}
		s1[j] = '\0';
		return (s1);
	}
	else
		return (0);
}