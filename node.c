struct List {
  char*  string;
  struct List* next;
};
struct List* mkList( char* s, struct List* n ) {
  struct List* t;
  t = (struct List*) malloc( sizeof( struct List ) );
  if ( t == NULL ) {
    fprintf( stderr, "mkList: out of memory\n" );
exit( 1 ); }
t->string = s; t->next =n; return t;
}
int main( int argc, char* argv[] ) {
  struct List* element3 = mkList( "venus"  , NULL     );
  struct List* element2 = mkList( "saturn" , element3 );
    struct List* element1 = mkList( "mars"
return 0; }