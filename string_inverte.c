#include<stdio.h>
#include<string.h>

/*****************************************************************
 *    Exercio sobre funcoes em c do curso de programacao em c    *
 *                                                               *
 * autor Felipe                                                  *
 * 08/06/20                                                      *
 * Programa : String invertida                                   *
 * ***************************************************************/

#define TAM 30


// funcao inverte (prototipo)
void inverte_string(char []);

//main
int main(void){

   char str[TAM];
  
    
   printf("Digite uma mensagem: "); scanf("%30[^\n]s" , str);
   
   // chamando a funcao para a inversao da string
   inverte_string(str);

return 0;
}// fim da funcao main


// funcao inverte 
void inverte_string(char str[]){
   
   char aux;
   int index;

   printf("String original:  %s \n", str);
   

   int length = strlen(str);
   printf("comprimento da string: %d\n", length);

   for(index = 0 ; index < length/2 ; index++){
   
     aux = str[index];
     
     str[index] =  str[length - 1 - index];

     str[length - 1 - index] = aux;
   
   }

    printf("String invertida: %s \n", str);


}// fim da funcao 


