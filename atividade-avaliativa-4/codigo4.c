#include <stdio.h>
// Declaracao da minha funcao
int minhaFuncao(int a, int b) {
    int valor = a + b ; valor = valor * 2 ;
return valor ;
}

int main() {

// Inicializacao de variáveis
int a = 10;
int b = 20;
int resultado = minhaFuncao( a, b );
printf("O valor obtido ao chamar a funcao foi %d", resultado );

return 0;
}