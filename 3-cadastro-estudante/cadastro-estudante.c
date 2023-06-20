#include <stdio.h>
#include <stdbool.h>

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main() {
    char name[255], cpf[12], rg[16], matricula[16], nascimento[16], period[4];
    bool confirm = false;

    printf("\n------ CADASTRO DE ESTUDANTES ------\n\n");
    printf("Para o cadastro dos usuários serão necessários os seguintes dados:\n\n");
    printf("- NOME COMPLETO\n");
    printf("- CPF\n");
    printf("- RG\n");
    printf("- MATRÍCULA\n");
    printf("- DATA DE NASCIMENTO\n");
    printf("- PERÍODO DO CURSO\n\n");
    printf("Por favor tenha-os em mãos...\n\n");

    while (!confirm) {
        printf("Deseja iniciar o cadastro (S para Sim e N para não)?: ");
        char responseToContinueProcess;
        scanf(" %c", &responseToContinueProcess);
        clearBuffer();

        if (responseToContinueProcess == 'n' || responseToContinueProcess == 'N') {
            printf("Você escolheu não iniciar o cadastro. Reiniciando o questionário...\n");
            confirm = false;
            // Esvaziar os valores das variáveis
            name[0] = '\0';
            cpf[0] = '\0';
            rg[0] = '\0';
            matricula[0] = '\0';
            nascimento[0] = '\0';
            period[0] = '\0';

        } else if (responseToContinueProcess == 's' || responseToContinueProcess == 'S') {
            printf("Iniciando o cadastro...\n\n");

            // Preencher os dados do cadastro
            printf("Nome completo: ");
            scanf(" %254s", name);
            clearBuffer();

            printf("CPF: ");
            scanf(" %11s", cpf);
            clearBuffer();

            printf("RG: ");
            scanf(" %15s", rg);
            clearBuffer();

            printf("Matrícula: ");
            scanf(" %15s", matricula);
            clearBuffer();

            printf("Data de Nascimento: ");
            scanf(" %15s", nascimento);
            clearBuffer();

            printf("Período do curso: ");
            scanf(" %3s", period);
            clearBuffer();

            printf("\n------------ ALUNO CADASTRADO COM SUCESSO ------------\n\n");
            printf("Aluno: %s\n", name);
            printf("CPF do aluno: %s\n", cpf);
            printf("RG do aluno: %s\n", rg);
            printf("Matrícula do aluno: %s\n", matricula);
            printf("Data de nascimento: %s\n", nascimento);
            printf("Período a ser matriculado: %s\n", period);

            

            confirm = true;  // Finalizar o cadastro

        } else {
            printf("Entrada incorreta. Por favor, responda S para iniciar ou N para não iniciar o cadastro.\n");
            confirm = false;
        }
    }

    return 0;
}
