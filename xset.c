#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char* argv[] ){
	int i;
	int xset;
	xset = 0;
	i 	 = 1; //skip aplication name
	while (i < argc) {	// used for error checking
		if ( strcmp (argv [i], "-x" ) == 0 ) {
			xset = 1;
			i = 1 + i;
		}
	}
	printf( "xset = %d\n", xset );
	return 0;
}