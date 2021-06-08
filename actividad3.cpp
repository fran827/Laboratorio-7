#include <stdio.h>

int main(){
    int numero;
    int resultado;
    
    printf("Ingrese un número por favor:\n");
    scanf("%d", &numero);
    
    for(int i = 1; i <= numero; i++){
       resultado = numero%i;
       if(resultado == 0){
           printf("Los divisores son: %d\n", i);
       }
    }

    return 0;
}