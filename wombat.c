#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char* argv[]) {
	FILE* fp;
	char ch;
	int nchars = 0;
	int  nwords = 0;
	int nlines = 0;
	if ( (fp = fopen( "wombat.txt", "r" ) ) == NULL ) {
		fprintf( stderr, "cannont open wombat.txt\n" );
		exit(1);
	}

	ch = fgetc(fp);
	while ( ch != EOF ){
		printf( "%c", ch );
		ch = fgetc(fp);
		 nchars++;
		if (ch == ' ' | ch == '\n') {
			nwords++;
		} 
		if (ch == '\n'){ nlines++;}
	}

	printf( "characters = %d, words =  %d lines = %d\n", nchars, nwords, nlines);
	//printf( "%d %d %d\n", nlines, nwords, nchars)
}