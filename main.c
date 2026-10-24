
#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float valor;

    printf("====================================\n");
    printf("        SISTEMA BANCARIO\n");
    printf("====================================\n");
    printf("Bem-vindo ao nosso caixa eletronico!\n");
    printf("Consulte seu saldo, deposite ou saque.\n");

    do {
        printf("\n========== MENU PRINCIPAL ==========\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar saque\n");
        printf("4 - Encerrar o programa\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite um numero.\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
                /* Limpa a entrada incorreta */
            }

            continue;
        }

        switch (opcao) {
            case 1:
                printf("\nSaldo atual: R$ %.2f\n", saldo);
                break;

            case 2:
                printf("Digite o valor do deposito: R$ ");

                if (scanf("%f", &valor) != 1) {
                    printf("Valor invalido! Operacao cancelada.\n");

                    int c;
                    while ((c = getchar()) != '\n' && c != EOF) {
                        /* Limpa a entrada incorreta */
                    }

                    break;
                }

                if (valor > 0) {
                    saldo = saldo + valor;
                    printf("Deposito realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("O deposito deve ser maior que zero.\n");
                }
                break;

            case 3:
                printf("Digite o valor do saque: R$ ");

                if (scanf("%f", &valor) != 1) {
                    printf("Valor invalido! Operacao cancelada.\n");

                    int c;
                    while ((c = getchar()) != '\n' && c != EOF) {
                        /* Limpa a entrada incorreta */
                    }

                    break;
                }

                if (valor <= 0) {
                    printf("O saque deve ser maior que zero.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente!\n");
                    printf("Saque nao autorizado.\n");
                } else {
                    saldo = saldo - valor;
                    printf("Saque realizado com sucesso!\n");
                    printf("Saldo restante: R$ %.2f\n", saldo);
                }
                break;

            case 4:
                printf("\nEncerrando o sistema bancario...\n");
                printf("Saldo final: R$ %.2f\n", saldo);
                printf("Obrigado por utilizar nosso sistema!\n");
                printf("Tenha um excelente dia!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                printf("Escolha uma opcao de 1 a 4.\n");
                break;
        }

    } while (opcao != 4);

    printf("Sistema encerrado com sucesso.\n");

    return 0;
}
