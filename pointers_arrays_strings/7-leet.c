#include "main.h"
/**
 * 
 */

char *leet(char *s)
{
	int i = 0;/*parcoureur de tableau */
	char min[] = {'a','e', 'o', 't', 'l'};
	char maj[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1};

	while(s[i] != '\0')
	{
	i++;
	if(s[i] == min[i] || s[i] == maj[i])
		{
			s[i] = num[i];
		}
	}
	return (s);
}
