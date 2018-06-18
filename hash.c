

unsigned int hash ( char * s){
	unsigned int result;
	while (*s != '\0'){
		result = result + *s;
		s = s+1;
	}
	return result;
}
int main(int argc, char const* argv[]) {
	prinf(hash(argv[2]));
}