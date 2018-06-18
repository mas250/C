#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



#define MAXLEN 80       /* Maximum line length, including null terminator */

int main(int argc, char *argv[])
{
    FILE *in;
    FILE *out;

    char line[MAXLEN];          /* Current line buffer */
    char ref[MAXLEN] = "";      /* Sequence reference buffer */
    int nseq = 0;               /* Sequence counter */

    
    in = fopen(argv[1], "r");
    

    out = fopen(argv[2], "w");
    

    while (fgets(line, sizeof(line), in)) {
        int len = strlen(line);

        /* Strip whitespace from end */
        while (len > 0 && isspace(line[len - 1])) len--;
        line[len] = '\0';

        if (line[0] == '>') {
            /* First char is '>': copy from second char in line */
            strcpy(ref, line + 1);
        } else {
            /* Other lines are sequences */
            fprintf(out, "%s: %d\n", ref, len);
            nseq++;
        }
    }

    fprintf(out, "Total number of sequences. %d\n", nseq);

    fclose(in);
    fclose(out);

    return 0;
}