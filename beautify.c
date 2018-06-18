#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
int main(int argc, char const* argv[])
{
   char str1[1024];
   int x;
   int i =0;
   int width;
   width = atoi(argv[2]);
   FILE * fp;
   

   fp = stdin;
  


    while(!feof(fp)) {
   //while  ( ( x = fgetc( fp ) ) != EOF )//better practice - misses first character
               
                if (i <= width ){
                      
                      fscanf(fp, "%s", str1);
                      if ((strlen(str1) + i++) <=width){
                      printf(str1);
                      
                      i += strlen(str1) ;
                      if ((strlen(str1) + i) >= width){
                        printf( "\n");
                        
                        i=0;
                      }
                      else{printf(" ");}


                    }

                                     }
                     if(i >= width){
                     i =0;
                     printf(" ");
                     printf("\n");
                                     }

            }
            

   fclose(fp);
   
   return(0);
}