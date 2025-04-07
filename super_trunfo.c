#include <stdio.h>

int main()
{
  char estado_1, estado_2;
  char codigo_carta_1[4], codigo_carta_2[4];
  char nome_cidade_1[50], nome_cidade_2[50];
  int num_populacao_1, num_populacao_2, num_pontos_turisticos_1, num_pontos_turisticos_2;
  float area_km_quadrado_1, area_km_quadrado_2, pib_cidade_1, pib_cidade_2;

  printf("---------------------------------------------------------------------\n");
  printf("-----------------------------  SuperTrunfo  -------------------------\n");
  printf("---------------------------------------------------------------------\n");
  printf("Digite as informações da primeira carta.\n");

  printf("Digite o estado: \n");
  scanf("%s", &estado_1);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo_carta_1);

  printf("Digite nome da cidade: \n");
  scanf("%s", &nome_cidade_1);

  printf("Digite o número da população da cidade: \n");
  scanf("%d", &num_populacao_1);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &num_pontos_turisticos_1);

  printf("Digite a área em  km² da cidade: \n");
  scanf("%f", &area_km_quadrado_1);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_cidade_1);

  printf("------------------------------------------\n");
  printf("----------------  Carta 1  ---------------\n");
  printf("------------------------------------------\n");
  printf("| Estado: %c \n", estado_1);
  printf("| Código da carta: %s \n", codigo_carta_1);
  printf("| Nome da Cidade: %s \n", nome_cidade_1);
  printf("| População: %d \n", num_populacao_1);
  printf("| Área em km²: %f \n", area_km_quadrado_1);
  printf("| PIB: %f \n", pib_cidade_1);
  printf("| Número de Pontos Turísticos: %d \n", num_pontos_turisticos_1);
  printf("------------------------------------------\n");

  printf("Digite as informações da segunda carta.\n");

  printf("Digite o estado: \n");
  scanf("%s", &estado_2);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo_carta_2);

  printf("Digite nome da cidade: \n");
  scanf("%s", &nome_cidade_2);

  printf("Digite o número da população da cidade: \n");
  scanf("%d", &num_populacao_2);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &num_pontos_turisticos_2);

  printf("Digite a área em  km² da cidade: \n");
  scanf("%f", &area_km_quadrado_2);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib_cidade_2);

  printf("------------------------------------------\n");
  printf("----------------  Carta 2  ---------------\n");
  printf("------------------------------------------\n");
  printf("| Estado: %c \n", estado_2);
  printf("| Código da carta: %s \n", codigo_carta_2);
  printf("| Nome da Cidade: %s \n", nome_cidade_2);
  printf("| População: %d \n", num_populacao_2);
  printf("| Área em km²: %f \n", area_km_quadrado_2);
  printf("| PIB: %f \n", pib_cidade_2);
  printf("| Número de Pontos Turísticos: %d \n", num_pontos_turisticos_2);
  printf("------------------------------------------\n");

  return 0;
}