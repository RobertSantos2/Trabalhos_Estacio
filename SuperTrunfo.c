#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Carta
typedef struct {
    char nome[50];
    float peso;       // Peso
    float altura;     // Altura
    int velocidade;   // Velocidade
} Dinossauro;

// Função para comparar cartas com base em um único atributo (Desafio 1)
void compararAtributoSimples(Dinossauro d1, Dinossauro d2) {
    int escolha;
    
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. Peso\n");
    printf("2. Altura\n");
    printf("3. Velocidade\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        if (d1.peso > d2.peso)
            printf("\nO dinossauro %s venceu! (Peso)\n", d1.nome);
        else if (d1.peso < d2.peso)
            printf("\nO dinossauro %s venceu! (Peso)\n", d2.nome);
        else
            printf("\nEmpate! (Peso)\n");
    } else if (escolha == 2) {
        if (d1.altura > d2.altura)
            printf("\nO dinossauro %s venceu! (Altura)\n", d1.nome);
        else if (d1.altura < d2.altura)
            printf("\nO dinossauro %s venceu! (Altura)\n", d2.nome);
        else
            printf("\nEmpate! (Altura)\n");
    } else if (escolha == 3) {
        if (d1.velocidade > d2.velocidade)
            printf("\nO dinossauro %s venceu! (Velocidade)\n", d1.nome);
        else if (d1.velocidade < d2.velocidade)
            printf("\nO dinossauro %s venceu! (Velocidade)\n", d2.nome);
        else
            printf("\nEmpate! (Velocidade)\n");
    } else {
        printf("\nOpcao invalida!\n");
    }
}