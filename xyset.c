#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char* argv[] ){
	int i;
	int xset;
	xset = 0;
	int yset;
	yset = 0;

	i 	 = 1; //skip aplication name
	while (i < argc) {	// used for error checking
		if ( strcmp (argv [i], "-x" ) == 0 ) {
			xset = 1;
			 } 
		if ( strcmp (argv [i], "-y") == 0) {
			yset = 1;
			
		}
		i = i + 1;
	}
	
	printf( "xset = %d\n", xset );
	printf( "yset = %d\n", yset );
	return 0;
}