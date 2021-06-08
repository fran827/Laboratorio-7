#include <stdio.h>

int main(){

    int numero;

    printf("Por favor ingrese un número:\n");
    scanf("%d", &numero);
    
    for(int i = 2; i <= numero; i++){
        int cont = 0;
        for(int j = 2; j <= i/2; j++){
            if(i%j==0){
                cont++;
                break;
            }

            }
            if(cont<1){
                printf("%d\n", i);
            }
        }

    return 0;
}