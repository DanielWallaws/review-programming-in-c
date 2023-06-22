#include <stdio.h>

int main() {
    int a = 100;
    while (a > 50) {
        printf("Entre com o valor de a: ");
        scanf("%d", &a);

        printf("Foi informado o valor %d \n", a);
    }
    return 0;
}