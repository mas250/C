#include <stdio.h>

int length(int xs[]) {
	int i=0;
	while ( xs[i] !=0) {
		i = i+1;
	}
	return i;
}


int main ( int argc, char* argv[] ) {
	int numbers[] = {1,4,6,8,2,3,9,0 /* sentinel */};

	for (int i = 0; i < length(numbers); i++) {

	printf("%d\n", numbers[i] );

	
	}
	return 0;
}