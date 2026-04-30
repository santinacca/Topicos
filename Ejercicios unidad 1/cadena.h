#ifndef CADENA_H_INCLUDED
#define CADENA_H_INCLUDED
#define ESLETRA(c) ((c>='a' && c<='z')||(c>='A' && c<='Z'))? 1:0
#define AMAYUS(c) (c>='a' && c<='z')? (c-'a'+'A'):c
#define AMINUS(c) (c>='A' && c<='Z')? (c-'A'+'a'):c
int esPalindromo(char* cad);
char* desofuscar(char* cad,char* cod);

char* copiarCadena(char* destino,const char* oringen);
char* concatenarCadena(char* cad, const char* agregado);
int compararCadena(const char* cad1, const char* cad2);
char* strchrCadena(const char* cad, int c);
int cantLetrasCadena(char* cad);
#endif // CADENA_H_INCLUDED
