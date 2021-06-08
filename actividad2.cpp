#include <stdio.h>

int n1;
int n2;
int resultado;

int main(){
    printf("Ingrese dos números de la forma X, Y:\n");
    scanf("%d, %d", &n1, &n2);
    for(int n = 0; n < n2; n++){
        resultado += n1;
    }
    printf("%d * %d = %d\n", n1, n2, resultado);
    return 0;
}