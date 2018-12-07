#include"player_ED.h"
#include<stdio.h>

int main(){
  int op = 1;
  play_list LIST = new_list();


  while(op != 0){
    printf("\n");
    printf("---------------------------\n");
    printf("XSelecione a opcao desejada:\n");
    printf("1.Tocar\n");
    printf("2.Pausar\n");
    printf("3.Avancar musica\n");
    printf("4.Retroceder musica\n");
    printf("5.Estado atual\n");
    printf("6.Inserir musica\n");
    printf("7.Remover musica\n");
    printf("8.Mostrar playlist\n");
    printf("9.Encerrar\n");
    printf("---------------------------\n");
    scanf(" %d", &op);
    if(op == 1){
      int index;
      printf("Digite o numero da musica que deseja escutar:\n");
      scanf("%d", &index );
      play(LIST, index);
    }
    if(op == 2){

    }
    if(op == 3){

    }
    if(op == 4){

    }
    if(op == 5){

    }
    if(op == 6){
      printf("Digite a posicao que deseja inserir a musica:\n");
      int index;
      scanf("%d", &index);
      insertion_music(LIST, index);
    }
    if(op == 7){

    }
    if(op == 8){
      show_playlist(LIST);
    }
    if(op == 9){
      op = 0;
      printf("Sessão encerrada.\n");
    }
  }
}
