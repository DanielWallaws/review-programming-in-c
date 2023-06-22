#include <stdio.h>



 int main() {

int matriz[2][3] = { {10, 20, 30}, {40, 50, 60} };

int soma = 0;
for(int i=0; i < 2; i++) {
    for (int j=0; j < 3; j++) {
    if(j == 1) { 
    soma+= matriz[i][j];
    }

}

printf("O valor da soma = %d\n", soma);
printf("O elemento na linha 1 e coluna 2 = %d", matriz [1][2]) ;

}
return 0;
 }