#include <stdio.h>

/*
  PROVA DE PROGRAMACAO EM C++ 
 
*/

int main() {
    int opcao;
    int i, senha, operacao, numero, soma;
    int x;
    float n1, n2;

    do {
        printf("\n");
        printf("========================================\n");
        printf("       PROVA DE PROGRAMACAO EM C++        \n");
        printf("========================================\n");
        printf("  1 - Questao 1 (calculadora simples)\n");
        printf("  2 - Questao 2 (for de 1 a 10)\n");
        printf("  3 - Questao 3 (while de 1 a 5)\n");
        printf("  4 - Questao 4 (senha com do while)\n");
        printf("  5 - Questao 5 (qual sera a saida?)\n");
        printf("  6 - Questao 6 (qual sera a saida?)\n");
        printf("  7 - Questao 7 (calculadora com switch)\n");
        printf("  8 - Questao 8 (tabuada)\n");
        printf("  9 - Questao 9 (soma com while)\n");
        printf(" 10 - Questao 10 (numeros pares)\n");
        printf("  0 - Encerrar programa\n");
        printf("----------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            // ====================================================
            // QUESTAO 1 - Calculadora simples
            // ====================================================
   
            printf("\n===== QUESTAO 1 =====\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            printf("\nSoma: %g\n", n1 + n2);
            printf("Subtracao: %g\n", n1 - n2);
            printf("Multiplicacao: %g\n", n1 * n2);

            if (n2 != 0) {
                printf("Divisao: %g\n", n1 / n2);
            } else {
                printf("Divisao: nao e possivel dividir por zero\n");
            }

        } else if (opcao == 2) {

            // ====================================================
            // QUESTAO 2 - Utilizando for
            // ====================================================
            printf("\n===== QUESTAO 2 =====\n");
            for (i = 1; i <= 10; i++) {
                printf("%d\n", i);
            }

        } else if (opcao == 3) {

            // ====================================================
            // QUESTAO 3 - Utilizando while
            // ====================================================
            printf("\n===== QUESTAO 3 =====\n");
            i = 1;
            while (i <= 5) {
                printf("%d\n", i);
                i++;
            }

        } else if (opcao == 4) {

            // ====================================================
            // QUESTAO 4 - Utilizando do while (senha)
            // ====================================================
            // O do while pede a senha pelo menos uma vez
            // e repete enquanto ela for diferente de 123.
            printf("\n===== QUESTAO 4 =====\n");
            do {
                printf("Digite a senha: ");
                scanf("%d", &senha);
            } while (senha != 123);

            printf("Senha correta!\n");
            printf("Acesso liberado!\n");

        } else if (opcao == 5) {

            // ====================================================
            // QUESTAO 5 - Qual sera a saida?
            // ====================================================
            // Resposta: os numeros 1, 2, 3, 4 e 5, um em cada linha.
            printf("\n===== QUESTAO 5 =====\n");
            printf("Saida do codigo:\n");
            for (i = 1; i <= 5; i++) {
                printf("%d\n", i);
            }
            printf("\nResposta: 1, 2, 3, 4 e 5 (um em cada linha).\n");

        } else if (opcao == 6) {

            // ====================================================
            // QUESTAO 6 - Qual sera a saida?
            // ====================================================
            // Resposta: "Maior que 3".
            // Como x vale 5, a condicao x > 3 e verdadeira,
            // entao executa o if e o else e ignorado.
            printf("\n===== QUESTAO 6 =====\n");
            printf("Saida do codigo: ");
            x = 5;
            if (x > 3) {
                printf("Maior que 3");
            } else {
                printf("Menor ou igual a 3");
            }
            printf("\n\nResposta: Maior que 3\n");
            printf("x vale 5, entao x > 3 e verdadeiro e o else e ignorado.\n");

        } else if (opcao == 7) {

            // ====================================================
            // QUESTAO 7 - Calculadora com switch case
            // ====================================================
            printf("\n===== QUESTAO 7 =====\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);

            printf("Escolha uma operacao:\n");
            printf("1 - Soma\n");
            printf("2 - Subtracao\n");
            printf("3 - Multiplicacao\n");
            printf("4 - Divisao\n");
            printf("\nDigite sua opcao: ");
            scanf("%d", &operacao);

            switch (operacao) {
                case 1:
                    printf("\nResultado: %g\n", n1 + n2);
                    break;
                case 2:
                    printf("\nResultado: %g\n", n1 - n2);
                    break;
                case 3:
                    printf("\nResultado: %g\n", n1 * n2);
                    break;
                case 4:
                    if (n2 != 0) {
                        printf("\nResultado: %g\n", n1 / n2);
                    } else {
                        printf("\nNao e possivel dividir por zero\n");
                    }
                    break;
                default:
                    printf("\nOpcao invalida\n");
            }

        } else if (opcao == 8) {

            // ====================================================
            // QUESTAO 8 - Tabuada (obrigatorio: for)
            // ====================================================
            printf("\n===== QUESTAO 8 =====\n");
            printf("Digite um numero: ");
            scanf("%d", &numero);
            printf("\n");

            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }

        } else if (opcao == 9) {

            // ====================================================
            // QUESTAO 9 - Soma de numeros com while
            // ====================================================
            // 1 + 2 + 3 + 4 + 5 = 15
            printf("\n===== QUESTAO 9 =====\n");
            soma = 0;
            i = 1;
            while (i <= 5) {
                soma = soma + i;
                i++;
            }
            printf("Resultado da soma: %d\n", soma);

        } else if (opcao == 10) {

            // ====================================================
            // QUESTAO 10 - Numeros pares de 1 a 20
            // ====================================================
            // i % 2 == 0 -> resto da divisao por 2 igual a zero = par
            printf("\n===== QUESTAO 10 =====\n");
            for (i = 1; i <= 20; i++) {
                if (i % 2 == 0) {
                    printf("%d\n", i);
                }
            }

        } else if (opcao == 0) {

            printf("\n");
            printf("========================================\n");
            printf("       PROGRAMA ENCERRADO!              \n");
            printf("========================================\n");

        } else {

            printf("\nOpcao invalida! Tente novamente.\n");

        }

    } while (opcao != 0);

    return 0;
}
