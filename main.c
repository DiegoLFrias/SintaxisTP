#include <ctype.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

 int main ()
 {
  int tipo=-1;
  char* cadena = (char*)calloc(50, 8);
  while (tipo!=0){
    cadena = get_tokens();
    tipo_tokens(cadena[0]);
    printf("%s \n", cadena);
    if(cadena[0]==EOF)
      break;
    free(cadena);

 }
 return 0;
 }