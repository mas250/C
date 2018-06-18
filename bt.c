#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const* argv[]) {

	char buffer[100];
	int i = 0;
	int width = 0;
	FILE * infile;
	FILE *  outfile;
	int nchars = 0;

 char x;
	

	width = atoi(argv[1]);

	infile = fopen(argv[2], "r");

	outfile = fopen(argv[3], "w"); //move to when needed


	while( ( x = fgetc(infile) )!= EOF){
		//if (i != width) {
			printf("%c", x);

					}
	//}

fclose(infile);

}