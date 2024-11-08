#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    //Declaração de Variáveis
    int op;
    int contador = 0;
    int qtdbom = 0;
    int qtdregular = 0;
    int qtdruim = 0;
    
    while(contador < 10){
    printf("Esse programa avalia o que você achou do filme!");
    printf("O que você achou do filme:\n1-Bom\n2-regular\n3-ruim\n");
    scanf("%d", &op);
    //Declarar variável op do tipo inteiro 
    //Declarar variáveis do tipo inteiro de quantidade
    //Declarar variável do tipo inteiro contador
    
    if(op == 1){
    qtdbom = qtdbom +1;
    }
    if(op == 2){ 
    qtdregular= qtdregular + 1;
    }
    if(op == 3){ 
    qtdruim = qtdruim + 1;
   }
 
  contador = contador + 1;
 
  }
  printf("A quantidade de pessoas que acharam o filme bom foram %d",qtdbom);
  printf("\nA quantidade de pessoas que acharam o filme regular foram %d", qtdregular);
  printf("\nA quantidade de pessoas que acharam o filme ruim foram %d", qtdruim);
  
    return 0;
}