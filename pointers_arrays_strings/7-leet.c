#include "main.h"
/**
 * 
 */

char *leet(char *s)
{
	int i = 0;/*parcoureur de tableau */
	int j = 0;/*boucler tableau*/
	char min[] = {'a','e', 'o', 't', 'l'};
	char maj[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1};

	while(s[i] != '\0')
	{
	i++;
	if(*s == min[i] || *s == maj[i])
		{
			*s = num[j];
			j++;
		}
	}
	return (s);
}
