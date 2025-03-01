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

// Função para comparar cartas com base em múltiplos atributos (Desafio 2)
void compararAtributos(Dinossauro d1, Dinossauro d2) {
    int escolha;
    
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. Peso\n");
    printf("2. Altura\n");
    printf("3. Velocidade\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            if (d1.peso > d2.peso)
                printf("\nO dinossauro %s venceu! (Peso)\n", d1.nome);
            else if (d1.peso < d2.peso)
                printf("\nO dinossauro %s venceu! (Peso)\n", d2.nome);
            else
                printf("\nEmpate! (Peso)\n");
            break;
        case 2:
            if (d1.altura > d2.altura)
                printf("\nO dinossauro %s venceu! (Altura)\n", d1.nome);
            else if (d1.altura < d2.altura)
                printf("\nO dinossauro %s venceu! (Altura)\n", d2.nome);
            else
                printf("\nEmpate! (Altura)\n");
            break;
        case 3:
            if (d1.velocidade > d2.velocidade)
                printf("\nO dinossauro %s venceu! (Velocidade)\n", d1.nome);
            else if (d1.velocidade < d2.velocidade)
                printf("\nO dinossauro %s venceu! (Velocidade)\n", d2.nome);
            else
                printf("\nEmpate! (Velocidade)\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            break;
    }
}

// Função para comparar cartas com base em dois atributos (Desafio 3)
void compararAtributosComplexo(Dinossauro d1, Dinossauro d2) {
    int escolha1, escolha2;
    
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. Peso\n");
    printf("2. Altura\n");
    printf("3. Velocidade\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha1);
    
    printf("\nEscolha o segundo atributo para comparar:\n");
    printf("1. Peso\n");
    printf("2. Altura\n");
    printf("3. Velocidade\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &escolha2);

    // Comparando os atributos com operador
    printf("\nComparando os dinossauros...\n");

    // Inicializando contadores para determinar o vencedor
    int score1 = 0, score2 = 0;
    
    // Comparando primeiro atributo
    if (escolha1 == 1) {
        if (d1.peso > d2.peso) score1++;
        else if (d1.peso < d2.peso) score2++;
    } else if (escolha1 == 2) {
        if (d1.altura > d2.altura) score1++;
        else if (d1.altura < d2.altura) score2++;
    } else if (escolha1 == 3) {
        if (d1.velocidade > d2.velocidade) score1++;
        else if (d1.velocidade < d2.velocidade) score2++;
    }

    // Comparando segundo atributo
    if (escolha2 == 1) {
        if (d1.peso > d2.peso) score1++;
        else if (d1.peso < d2.peso) score2++;
    } else if (escolha2 == 2) {
        if (d1.altura > d2.altura) score1++;
        else if (d1.altura < d2.altura) score2++;
    } else if (escolha2 == 3) {
        if (d1.velocidade > d2.velocidade) score1++;
        else if (d1.velocidade < d2.velocidade) score2++;
    }

    // Verificando o vencedor
    if (score1 > score2)
        printf("\nO dinossauro %s venceu! (Ambos atributos)\n", d1.nome);
    else if (score1 < score2)
        printf("\nO dinossauro %s venceu! (Ambos atributos)\n", d2.nome);
    else
        printf("\nEmpate! (Ambos atributos)\n");
}

int main() {
    srand(time(0)); // Para gerar números aleatórios

    // Criando duas cartas de dinossauros
    Dinossauro trex = {"T-Rex", 8, 12, 30};  // Peso (toneladas), Altura (metros), Velocidade (km/h)
    Dinossauro velociraptor = {"Velociraptor", 0.07, 2, 40};  // Peso (toneladas), Altura (metros), Velocidade (km/h)

    int desafio;
    printf("Bem-vindo ao Super Trunfo Dinossauro!\n");
    
    // Desafio 1: Comparação de um único atributo
    printf("\nEscolha o desafio:\n");
    printf("1. Comparar um unico atributo\n");
    printf("2. Comparar multiplos atributos\n");
    printf("3. Comparar dois atributos com operador ternario\n");
    printf("Digite o numero do desafio: ");
    scanf("%d", &desafio);

    switch (desafio) {
        case 1:
            compararAtributoSimples(trex, velociraptor);
            break;
        case 2:
            compararAtributos(trex, velociraptor);
            break;
        case 3:
            compararAtributosComplexo(trex, velociraptor);
            break;
        default:
            printf("\nDesafio invalido!\n");
            break;
    }

    return 0;
}
