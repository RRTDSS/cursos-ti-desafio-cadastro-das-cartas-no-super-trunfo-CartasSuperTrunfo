#include <stdio.h>


int main(){
    char nome[50];

    // Variaveis Carta 1 e 2
    char estado[50], estado2[50];
    char codcart[3], codcart2[3];
    char nomecidade[30], nomecidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int npt, npt2; // Número de Pontos Turísticos.
    float DP, DP2; // Densidade Populacional
    float PIBPC, PIBPC2; //PIB per Capita


    // ENTRADA DE DADOS CARTA 1

    printf("Olá usuario, qual o seu nome: "); //Pergunta o nome do usuario.
    fgets(nome, sizeof(nome), stdin); //Faz a leitura inteira da linha digitada pelo usuario, o fgets pega a string (o teclado) nesse caso a entrada padrao é o stdin (teclado).
    
    printf("Vamos começar o jogo. Por favor digite o estado da sua carta: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o Codigo da Carta (exemplo A01, B02): ");
    scanf("%s", codcart);
    while(getchar() != '\n'); // Precisei usar o while pois antes do fgets se tiver scanf ele ocorre um bug!

    printf("Digite o Nome da Cidade: ");
    fgets(nomecidade, sizeof(nomecidade), stdin);
    
    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Area (tamanho da cidade em km): ");
    scanf("%f", &area);
    
    DP = (float)populacao / area;

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    PIBPC = (float)pib / populacao;

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &npt);
    while(getchar() != '\n');

    printf("INFORMACOES DA CARTA 1 FINALIZADA, VAMOS PARA A CARTA 2\n\n"); // Cadastro da primeira carta finalizada!


    // ENTRADA DE DADOS CARTA 2

    printf("Por favor digite o Estado da sua segunda carta: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o codigo da carta2 (Exemplo: A01, A02): ");
    scanf("%s", codcart2);
    while(getchar() != '\n');

    printf("Digite o nome da cidade da Carta2: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);

    printf("Digite a População da Carta2: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (tamanho da cidade em km) da Carta2: ");
    scanf("%f", &area2);

    DP2 = (float)populacao2 / area2;

    printf("Digite o PIB Carta2: ");
    scanf("%f", &pib2);

    PIBPC2 = (float)pib2 / populacao2;

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &npt2);


    printf("Parabens por concluir os registros das cartas.\n\n"); //Cadastro das duas cartas foi finalizado!

    // MOSTRANDO AO USUARIO A CARTA 1

    printf("CARTA 1\n\n");

    printf("Estado: %s", estado);
    printf("Código: %s\n", codcart);
    printf("Nome da Cidade: %s", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", npt);
    printf("Densidade Populacional: %.2f\n", DP);
    printf("PIB per Capita: %.2f\n\n", PIBPC);


    // MOSTRANDO AO USUARIO A CARTA 2
    printf("CARTA 2\n\n");

    printf("Estado: %s", estado2);
    printf("Código: %s\n", codcart2);
    printf("Nome da Cidade: %s", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", DP2);
    printf("PIB per Capita: %.2f\n", PIBPC2);

    return 0;

}