#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char* argv[] ){

	int arg1 = atoi(argv[1]);
	if (arg1 > 100 ){
		fprintf(stderr, "Number too large\n");
		exit( 1 );
	}
	printf( "%d\n", arg1 );
	return 0;
}
