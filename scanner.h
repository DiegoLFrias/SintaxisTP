#ifndef SCANNER
#define SCANNER

#include <ctype.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum token {FDT=0,  SEP=1,  CAD=2};

char* get_tokens();
int tipo_tokens(char caracter);

#endif 