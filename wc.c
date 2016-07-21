#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void wc ( FILE *infile, char *inname);

int chars;
int words;
int lines;
int cnt;

int
main (int argc, char *argv[]) {

	
    
}

void
wc( FILE *infile, char *inname) {

while((cnt =getc(infile)) != EOF){

        chars++;
                if(cnt == '\n'){

                lines++;
                }

                if(isspace(infile) == true)
                {
                        words++;
                }
}

printf(%d,%d,%d,%s;lines, words, chars);
    
}


