#include <stdio.h>
#include <string.h>
int main()
{
int i,j,length;
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    length = strlen(str);
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
	char temp = str[i];
	str[i] = str[j];
	str[j] = temp;
    }
    printf("Reversed String: %s\n", str);
    return 0;
}
