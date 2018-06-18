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
	int sorted[] = {};
	
		for (int i = 0; i < length(numbers); i++){
			int j = i;
			if (numbers[i] < numbers[i+1]){
				sorted[i] = numbers[i+1];
				printf("%d",i);
			}
			else{ sorted[i] = numbers[i];}
		}
	for (int i = 0; i < length(numbers); i++) {

	printf("%d\n", sorted[i] );
	}
	return 0;
}