#include <stdio.h>

int length(int xs[]) {
	int i=0;
	while ( xs[i] !=0) {
		i = i+1;
	}
	return i;
}

int sum(int xs[]){
	int av = 0;
	int i=0;
	while ( xs [i] !=0){
		i = i+1;
		av = av + xs[i];
	}
	return av;
}

int main ( int argc, char* argv[] ) {
	int numbers[] = {1,4,6,8,2,3,9,0 /* sentinel */};
	printf("%d\n", length(numbers) );
	printf("%d\n", sum(numbers) );
	return 0;
}