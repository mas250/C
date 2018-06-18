#include <stdio.h>

int main()
{
	FILE *fp;
	char str[60];

	fp = fopen("file.text", "r");
	if (fp == NULL){
		perror("Error");
	return(-1);
}

	if (fgets (str, 60, fp) != NULL)
	{
		puts(str);
	}
	fclose(fp);
	return(0);
}
