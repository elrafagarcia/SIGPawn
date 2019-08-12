#include <stdio.h>
#include <stdlib.h>

void main(void) {
  int opcao;
  inicio:
  printf("######################## \n");
  printf("     Menu Principal \n");
  printf("######################## \n");
  printf("1 - Login \n2 - Cadastro \n3 - Alterar Dados de Usuário \n4 - Deletar \n5 - Encerrar Programa \n\nEscolha uma opçao: ");
  scanf("%d", &opcao);
  switch (opcao) {
    case 1:
      system("cls");
      printf("Teste\n");
      break;
    case 2:
      system("cls");
      printf("Teste\n");
      break;
    case 3:
      system("cls");
      printf("Teste\n");
      break;
    case 4:
      system("cls");
      printf("Teste\n");
      break;
    case 5:
      system("cls");
      printf("Teste\n");
      break;
    default:
      printf("voce deve escolher uma opcao valida\n");
      system("cls");
	  goto inicio;
  }

}