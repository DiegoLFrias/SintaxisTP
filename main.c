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
    tipo = tipo_tokens(cadena[0]);
 
    if(tipo==0){
      printf("Fin de Texto: %s \n", cadena);
    } else if(tipo==1){
      printf("Separador: %s \n", cadena);
    } else{
      printf("Cadena: %s \n", cadena);
    }
    free(cadena);
 }
 return 0;
 }