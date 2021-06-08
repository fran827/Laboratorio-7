#include <stdio.h>

int n = 0;
int suma = 0;

int main(){
    
    while(n>=0){
       printf("Ingrese un numero:\n");
       scanf("%d", &n); 
       suma = n + suma;
    }
    printf("La suma total es %d\n", suma);
    return 0;
}