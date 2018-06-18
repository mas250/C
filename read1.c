#include <stdio.h>

int main ( int argc, char *argv[] )
{
    printf("Enter the file name: \n");
    //scanf
    if ( argc != 3 ) /* argc should be 2 for correct execution */
    {
        /* We print argv[0] assuming it is the program name */
        printf( "usage: %s filename", argv[0] );
    }
    else
    {
        // We assume argv[1] is a filename to open
        FILE *file = fopen( argv[1], "r" );
        FILE *outfile = fopen(argv[2], "w");

        /* fopen returns 0, the NULL pointer, on failure */
        if ( file == 0 )
        {
            printf( "Could not open file\n" );
        }
        else
        {
            int x;
            int i = 0;
            int width = 60;
            /* Read one character at a time from file, stopping at EOF, which
               indicates the end of the file. Note that the idiom of "assign
               to a variable, check the value" used below works because
               the assignment statement evaluates to the value assigned. */
            while  ( ( x = fgetc( file ) ) != EOF )
            {
                if (i != width){
                    i++;
                fprintf(outfile, "%c", x );
            }   
                if(i == width){
                     i =0;
                     fprintf(outfile, "\n" );}
                
                
            }
            fclose( file );
        }
    }
    return 0;
}