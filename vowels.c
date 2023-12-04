#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s)
{
	int count = 0;
	for(int i = 0;i < strlen(s); i ++)
	{
		switch toupper(s1[i])
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			  count++;
		}
	}
}

int main(void)
{
	char s1[] = "it's a wonderful life";
	
	int s1count = vowel_count(s1);
	printf("s1 Vowel count: %d\n", s1count);
	


	return 0;	
}
