#include <stdio.h>

void mostrarMenu() {
    printf("\n===== MENU DA CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
}

int lerNumero() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    return n;
}

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) {
        printf("Erro: não é possível dividir por zero!\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int opcao;

    do {
        mostrarMenu();
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Encerrando… Volte sempre!\n");
            break;
        }

        int x = lerNumero();
        int y = lerNumero();

        switch (opcao) {
            case 1:
                printf("Resultado: %d\n", somar(x, y));
                break;
            case 2:
                printf("Resultado: %d\n", subtrair(x, y));
                break;
            case 3:
                printf("Resultado: %d\n", multiplicar(x, y));
                break;
            case 4:
                printf("Resultado: %.2f\n", dividir(x, y));
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (1);

    return 0;
}
