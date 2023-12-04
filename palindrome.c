#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]);

int main(void)
{
	char string1[100];
	printf("Enter your WORD :");
	scanf("%s", string1);

	if (is_palindrome(string1))

		printf("%s\n- is a palindrome", string1);
	else 
		printf("%s\n- is not a palindrome", string1);

	return 0;
}

bool is_palindrome(char string[])
{
	int middle = strlen(string) / 2;
	int len = strlen(string);

	for(int i = 0 ; i < middle; i++)
	{
		if (string[i] != string[len - i - 1])
		{
			return false;
		}
		
	}
	return true; 
}

