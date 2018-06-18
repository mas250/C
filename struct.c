#include <stdio.h>

struct List ( int n, struct List* next ) {
	struct List* new;
	new = (struct List*) malloc( sizeof( struct List ) );
	if ( new == NULL ){
		fprintf( stderr, "mkList: out of memory\n" );
		exit( 1 );
	}
	(*new).n	n;
	(*new).next = next;
	return new;
}


int main ( ) {
	 int i, size = 10;
    struct node* temp = malloc(size*sizeof(struct node));
    head = temp;

    if(temp){
        for(i=0;i<size;i++){
            temp->data = i+1;
            temp->link = temp + 1;
            ++temp;
        }
        temp[-1].link = NULL;
    }
	//}
	return 0;
}