#include <stdio.h>

int main( int argc, char **argv )
{
  int charcount( FILE *const fin )
  FILE *fp;
fp = fopen ("outfile3.text", "r");
    int c, count;

    count = 0;
    for( ;; )
    {
        c = fgetc( fp );
        if( c == EOF || c == '\n' ){
            break;
        }
        else{
        ++count;
    }
    }

    printf( count);

}