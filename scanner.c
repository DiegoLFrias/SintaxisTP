
#include "scanner.h"

char* get_tokens(){
    //int limite=50;
    char caracter;
    caracter = getchar();
    while(isspace(caracter)){// por si primero se leen espacios,
         caracter = getchar();
     }
   char* cadena = (char*)calloc(50, 8);//cadena de tamaño 128 y cada byte tiene un valor de 8
   //memset(cadena, 0, 50);
    //free(cadena);
    int i=0;
    cadena[i]=caracter;
    i++;
    if(caracter==',' || caracter == EOF){//si despues de los espacios vino una coma o un EOF
        return cadena;
    }
     else{ //si no era espacio, ni coma y ni EOF, era una cadena
         caracter = getchar();
         while(caracter!=',' && caracter != EOF && !isspace(caracter))
            {
               cadena[i] = caracter;
              i++;
             /*if(i==limite){
                 limite+=50;
                  cadena = (char*)realloc(cadena, limite*sizeof(char));
             }*/
             caracter = getchar();
            }
     }
    ungetc(caracter, stdin);//el caracter no era parte de la cadena y lo manda al stdin
    return cadena;
 }
 int tipo_tokens(char caracter){
     if(caracter==','){
         return SEP;
     }
     if(caracter==EOF){
         return FDT;
     }
         return CAD;
 
 }
