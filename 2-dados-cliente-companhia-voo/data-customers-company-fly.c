#include <stdio.h>
#include <conio.h>

char name[200], sex[30], cpf[11], numberPhone[20];
unsigned short int amountLuggage;
float baggageWeight;

void clearBuffer() {
    int c;
    while((c = getchar() != '\n' && c != EOF)) 
    {
    }
}

int main()
{
    printf("Informe o nome do cliente: ");
    scanf("%199s", name);
    clearBuffer();
    printf("Informe o gênero do cliente: ");
    scanf("%29s", sex);
    clearBuffer();
    printf("Informe o cpf do cliente: ");
    scanf("%10s", cpf);
    clearBuffer();
    printf("Informe o telefone do cliente: ");
    scanf("%19s", numberPhone);
    clearBuffer();
    printf("Informe a quantidade de bagagem do cliente: ");
    scanf("%hu", &amountLuggage);
    clearBuffer();
    printf("Informe o peso da bagagem: ");
    scanf("%f", &baggageWeight);
    clearBuffer();
    printf("\n--- Dados do Cliente ---\n");
    printf("Nome: %s\n", name);
    printf("Gênero: %s\n", sex);
    printf("CPF: %s\n", cpf);
    printf("Telefone: %s\n", numberPhone);
    printf("Quantidade de bagagem: %hu\n", amountLuggage);
    printf("Peso da bagagem : %.2f\n", baggageWeight);
    /* code */
    return 0;
}







