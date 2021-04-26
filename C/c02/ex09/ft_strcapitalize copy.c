
char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (i == 0 || !(('A' <= str[i - 1] && str[i - 1] <= 'Z') ||\
			('a' <= str[i - 1] && str[i - 1] <= 'z') ||\
			('0' <= str[i - 1] && str[i - 1] <= '9')))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char *strr;
	char arr[] = "salut, commet tu vas ? 42mots quarante-Deux;AAAA+A+aa";
	strr = arr;
	ft_strcapitalize(strr);
	printf("%s", arr);
}



//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
