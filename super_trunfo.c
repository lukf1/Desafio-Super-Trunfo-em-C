#include <stdio.h>

// Estrutura para representar uma carta
typedef struct {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;


// Função para exibir os dados da carta
void exibir_carta(Carta c, int numero) {
    printf("\nCarta %d:\n",numero);
    printf("Estado: %c\n",c.estado);
    printf("Codigo: %s\n",c.codigo);
    printf("Nome da Cidade: %s\n", c.nome_cidade);
    printf("Populacao: %d\n",c.populacao);
    printf("Area: %.2f km²\n",c.area);
    printf("PIB: %.2f bilhoes de reais\n",c.pib);
    printf("Numero de Pontos Turisticos: %d\n",c.pontos_turisticos);
}

int main() {
    Carta carta1, carta2;
    
    
    printf("============================================\n");
    printf("=======*Bem-Vindo ao Super Trunfo**=========\n");
    printf("============================================\n\n");

    // Entrada de dados da primeira carta
    printf("Digite os dados da primeira carta\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);
    
    printf("Codigo da Carta (ex: A01): \n ");
    scanf("%s", carta1.codigo);
    
    printf("Nome da Cidade (A-Z): \n");
    scanf("%s", carta1.nome_cidade);
    
    printf("Populacao: \n");
    scanf("%d", &carta1.populacao);
    
    printf("Area (km²): \n");
    scanf("%f", &carta1.area);
    
    printf("PIB (bilhoes de reais): \n");
    scanf("%f", &carta1.pib);
    
    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    
    printf("Estado (A-H): \n");
    scanf(" %c", &carta2.estado);
    
    printf("Codigo da Carta (ex: B02): \n");
    scanf("%s",carta2.codigo);
    
    printf("Nome da Cidade: \n");
    scanf("%s", carta2.nome_cidade);
    
    printf("Populacao: \n");
    scanf("%d", &carta2.populacao);
    
    printf("Area (km²): \n");
    scanf("%f", &carta2.area);
    
    printf("PIB (bilhoes de reais): \n");
    scanf("%f", &carta2.pib);
    
    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição das cartas
    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);

    return 0;
}

