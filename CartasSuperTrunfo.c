#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 char estado[50];
char codigodacarta[16];
int populacao;
float area;
float pib;
int pontosturisticos;

char Estado[50];
char Codigodacarta[16];
int Populacao;
float Area;
float Pib;
int Pontosturisticos;

  // Área para entrada de dados
  
  printf("Informe o estado: ");
scanf("%s", estado);
printf("Informe o codigo da carta: ");
scanf("%s", codigodacarta);
printf("informe a populacao: ");
scanf("%d", &populacao);
printf("informe a area: ");
scanf("%f", &area);
printf("informe o pib: ");
scanf("%f", &pib);
printf("informe os pontos turisticos: ");
scanf("%d", &pontosturisticos);

 printf("Informe o estado: ");
scanf("%s", Estado);
printf("Informe o codigo da carta: ");
scanf("%s", Codigodacarta);
printf("informe a populacao: ");
scanf("%d", &Populacao);
printf("informe a area: ");
scanf("%f", &Area);
printf("informe o pib: ");
scanf("%f", &Pib);
printf("informe os pontos turisticos: ");
scanf("%d", &Pontosturisticos);
  // Área para exibição dos dados da cidade
printf("Carta 1 \n");
printf("estado: %s \n", estado);
printf("codigo da carta: %s \n", codigodacarta);
printf("populacao: %d \n", populacao);
printf("area: %.2f km2 \n", area);
printf("pib: %.2f \n", pib);
printf("pontos turisticos:%d \n", pontosturisticos);

printf("Carta 2 \n");
printf("Estado: %s \n", Estado);
printf("Codigo da carta: %s \n", Codigodacarta);
printf("Populacao: %d \n", Populacao);
printf("Area: %.2f km2 \n", Area);
printf("Pib: %.2f \n", Pib);
printf("Pontos turisticos:%d \n", Pontosturisticos);

return 0;
} 
