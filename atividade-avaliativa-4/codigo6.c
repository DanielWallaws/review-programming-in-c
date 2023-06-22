#include <stdio.h>

int main() {

int a ;

printf("Entre com o valor de a: ");
scanf("%d", &a ) ;

if(a > 100) {
    printf("Executa operacao 1");
} else if(a > 75) {
    printf("Executa operacao 2"); 
} else if(a > 50) {
    printf("Executa operacao 3");
} else if(a > 25) {
    printf("Executa operacao 4");

} else {
    printf("Executa operacao 5");

}

return 0;

}