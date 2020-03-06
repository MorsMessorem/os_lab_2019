#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "revert_string.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s string_to_revert\n", argv[0]);
		return -1;
	}
    char *str1=malloc(sizeof(char) * ((strlen(argv[1]) + 1))/2);
    char *str2=malloc(sizeof(char) * ((strlen(argv[1]) + 1))/2);
	char *reverted_str = malloc(sizeof(char) * (strlen(argv[1]) + 1));
	
    strcpy(reverted_str, argv[1]);

    snprintf(str1, (strlen(argv[1]))/2+1, "%s%s", str1,reverted_str);
    snprintf(str2, (strlen(argv[1]))+1, "%s%s", str2,reverted_str);
    printf("Reverted: %s\n", str1);
	
	RevertString(str1);
	RevertString(str2);
    Swap(str1, str2);

    snprintf(reverted_str, (strlen(argv[1]))+1, "%s%s", str1,str2);
    printf("Reverted: %s\n", str1);
	printf("Reverted: %s\n", str2);
	printf("Reverted: %s\n", reverted_str);

	free(reverted_str);
    free(str1);
    free(str2);
	return 0;
}

