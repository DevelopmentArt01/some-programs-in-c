#include<stdio.h>

/*****************************************************************
 *    Exercio sobre funcoes em c do curso de programacao em c    *
 *                                                               *
 * autor Felipe                                                  *
 * 08/06/2020                                                    *
 * Programa : Fatorial                                           *
 * ***************************************************************/


// funcao fatorial
int func_fatorial(unsigned);


// main
int main(void){
    
    int calcFat=0;
    int result=0;
    
    printf("Digite um numero para calculo do fatorial: ");scanf("%d" ,&calcFat);

    result = func_fatorial(calcFat);
    printf("Resuultado =>> %d", result);


return 0;
}

int func_fatorial( unsigned int n ){
    
     if(n == 1)
        return 1;
     else
         return n*func_fatorial(n - 1);
    
}