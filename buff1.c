#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 60
//
int main(int argc, char* argv[])
{
   char buffer[ MAXLINE ];;
   int x;
   int i =0;
   int width = 60;
   FILE * fp;
   int nchars = 0;

   fp = fopen ("outfile.text", "r");
   FILE *fpOut = fopen("fp.text", "w");
   //fputs("We are in 2012", fp);
   
   //rewind(fp);

   
   while  (  fgets( buffer, sizeof( buffer ), stdin  )){
           
                      nchars = nchars + strlen( buffer );
                     
                      if (nchars <= width) {
                      printf(buffer, fpOut);
                      nchars = nchars + strlen( buffer );
                      if (nchars >= width){
                        printf(buffer);
                      }

                       }

                      if(nchars >= width) {
                        printf("\n");
                        printf(buffer);
                        printf("\n");
                        nchars = 0;

                      }
                                     

            }



 /*  printf("Read String1 |%s|\n", buffer );
   printf("Read String2 |%s|\n", str2 );
   printf("Read String3 |%s|\n", str3 );
  // printf("Read Integer |%d|\n", year );
*/
   fclose(fp);
   
   return(0);
}