#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	// Vérifiez si s est NULL avant de l'utiliser
	if (!s)
		return (NULL);

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;
	if (!s1 || !s2)
		return (0);
	new_s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_s)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new_s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
		new_s[j++] = s2[i++];
	new_s[j] = '\0';
	return (new_s);
}
