//ESERCIZIO:
//DARE IN INGRESSO STRINGHE NUMERICHE
//E FARE LA SOMMA DI TUTTE

#include <stdio.h>
int i, somma = 0;
int main(int argc, char *argv[]) {
  for(i=0;i<argc;i++) {
    printf("Pos %d\t stringa: %s\n",i,argv[i]);
    somma += atoi(argv[i]);
  }
  // stampa della somma
  printf("Somma : %d", somma);

  return 0;
}

