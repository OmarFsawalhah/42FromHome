#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			count ++;
		}
		i ++;
	}
	return(count);

}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return(i);
}

static char	**free_words(char **result, size_t count)
{
	while (count > 0)
	{
		count --;
		free(result[count]);

	}
	free(result);
	return (NULL);
}

static char	**fill_words(char **result, char const *s, char c,
		size_t count)
{
	size_t	i;
	size_t	word;
	size_t	len;

	i = 0;
	word = 0;
	while (word < count)
	{
		while (s[i] == c)
			i++;
		len = word_len(s + i, c);
		result[word] = ft_substr(s, i, len);
		if (result[word] == NULL)
			return (free_words(result, word));
		i += len;
		word++;
	}
	result[word] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (fill_words(result, s, c, word_count));
}
