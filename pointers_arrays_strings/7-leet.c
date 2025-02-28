#include "main.h"
/**
 * 
 */

char *leet(char *s)
{
	int i;/*parcoureur de tableau */
	int j;/*boucler tableau*/
	char min[] = {'a','e', 'o', 't', 'l'};
	char maj[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {4, 3, 0, 7, 1};

	while(i <= s)
	{
	min[i];
	maj[i];
	num[i];
	i++;
	if(*s == min[i] || *s == maj[i])
		{
			*s = num[i];
		}
	}
	return (s);
}
