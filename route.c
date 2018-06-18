#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct List {
  int n;
  struct List* next;
	};
	struct List* mkList( int n, struct List* next ) {
  struct List* new;
  new = (struct List*) malloc( sizeof( struct List ) );
  if ( new == NULL ) {
    fprintf( stderr, "mkList: out of memory\n" );
		exit( 1 ); }
	(*new).n =n; (*new).next = next; return new;
	}
	int main( int argc, char* argv[] ) {
 	 int n;
 	 struct List* alist =
     	mkList( 15,
	mkList( 63,
		mkList( 12,
   	  	        mkList( 41, NULL ))));
  	  	while ( alist != NULL ) {
  	  		if (alist = 41){
   	  	 printf( "%d\n", (*alist).n );
   	  	
   	  	 alist = (*alist).next;
}
		}
	return 0; 
	}
