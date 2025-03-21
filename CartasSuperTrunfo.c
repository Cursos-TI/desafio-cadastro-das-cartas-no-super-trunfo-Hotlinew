#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
  // Declaração de váriavel!

  char estadoC1, estadoC2; 
  char cidade01[40], cidade02[40]; 
  char codigoC1[3], codigoC2[3];
  int populaçãoC1, populaçãoC2;
  int pontoTC1, pontoTC2; //Ponto turisco
  float areaC1, areaC2;
  float PIBC1, PIBC2;

  
  //Entrada de dados Carta 1!
  
  printf("Carta 1\n-------------------------------------\n");
  printf("escolha uma letra de A a H para representar um Estado!\n");
  scanf(" %c", &estadoC1);
  printf("escreva o nome da cidade:\n");
  scanf("%s", cidade01);
  printf("Escreva o Codigo da carta (letra do estado escolhido + 01,02,03...)\n exemplo: A01, B03, C02...\n");
  scanf("%s", &codigoC1);
  printf("Coloque o tamanho da população\n exemplo: 10000\n");
  scanf("%d", &populaçãoC1);
  printf("delimite a area:\nexemplo: 1521.11 km²\n");
  scanf(" %f\n", &areaC1);
  printf("Digite o PIB:\n");
  scanf(" %f", &PIBC1);
  printf("Digite a quantidade de pontos turísticos:\n");
  scanf("%d", &pontoTC1);

  //Saida de dados
  printf("Estado: %c\n", estadoC1);
  printf("Cidade: %s\n", cidade01);
  printf("Codigo da Carta: %s\n", codigoC1);
  printf("população: %d\n", populaçãoC1);
  printf("Área: %.2f\n", areaC1);
  printf("PIB: %.2f\n", PIBC1);
  printf("Pontos Turísticos: %d\n", pontoTC1);


    return 0;
}
