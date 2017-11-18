#include "libft.h"

int		words_num(const char *s, char c)
{
	int		i;
	int 	count;

	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (ft_isalpha(s[i]))
		{
			while (ft_isalpha(s[i]) && s[i] != c) 
				i++;
			count++;
		}	
	}	
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(words_num * sizeof(char *)); /* sizeof() использовать нельзя, нужна замена его чемто */
	while (i < words_num)
	{
		tab[i] = malloc((ft_strlen(ВОТ НЕ ЗНАЮ Я ЧЕ СЮДА ПИХАТЬ) + 1) * 1);
		i++;
	}
	/* А здесть мы заполняем tab */
	return (tab);
}
