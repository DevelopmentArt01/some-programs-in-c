#include<stdio.h>

/*****************************************************************
 *    Exercio sobre funcoes em c do curso de programacao em c    *
 *                                                               *
 * autor Felipe                                                  *
 * 09/06/20                                                      *
 * Programa : fibonacci                                          *
 * ***************************************************************/


//funcao fibonacci recursiva
int func_fibonacci(int );

// funcao fibonacci interativa
int func_fibonacci_iterativa(int);

//main
int main(){

	int result = 0;
    int i;	
	   
	   
	/* usando funcao recursiva*/
	printf("funcao recursiva: ");
    for(i  = 1 ; i <= 10 ; i++){
	
    	result = func_fibonacci(i);
        printf(" %d" , result);
	
	}   

    printf("\n");
	/* funcao interativa*/
	printf("funcao iterativa: ");
	for(i = 1 ; i <= 10 ;i++){
	result = func_fibonacci_iterativa(i);
		printf(" %d", result);
	}	
	 
 return 0;
}

int func_fibonacci(int n){
          if(n < 2)
			  return n;
		else
			return func_fibonacci(n -1) + func_fibonacci(n -2);
}

int func_fibonacci_iterativa(int n ){

int j = 1;
int i = 0;
int aux;	

register int index = 1;
	 for( index = 1 ; index <=n ; index++){
	 aux = i + j;
	 i = j;
	 j = aux;
	 }
return i;
}


