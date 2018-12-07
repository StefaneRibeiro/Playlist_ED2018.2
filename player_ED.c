#include"player_ED.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdbool.h>


struct song{
  char name[11];
  music next;
};

struct player{
  music first;
  music last;
  int cap;
  int size;
};

play_list new_list(){
  play_list New = (play_list) malloc(sizeof(struct player));
  New->first = NULL;
  New->last = NULL;
  New->cap = 100;
  New->size = 0;

  return New;
}
//Tocar musica
void play(play_list LIST, int index){
    music aux = LIST->first;
    int i = 0;
    if(index == 0){
      printf("%s\n", aux->next->name);
    }
    if(i != index){
      i++;
      if(i == index){
        printf("%s\n", aux->next->name);
      }
    }
}
//Mostrar playlist
void show_playlist(play_list LIST){
  music aux = LIST->first;
  if(LIST->size == 0){
    printf("A playlist esta vazia.");
  }
  if(LIST->size > 0){
    for( int i = 0; i < LIST->size-1; i++){
      printf("%s\n", aux->name);
      aux = aux->next;
    }
  }
}

//Insere uma musica
void insertion_music(play_list LIST, int index){
  printf("Digite o nome da musica:\n");
  int aux;
  LIST->last++;
  if(LIST->size == 0){
      music new = (music) malloc(sizeof(struct song));
      fgets(new->name, 11, stdin);
      fgets(new->name, 11, stdin);
      new->name[strlen(new->name) - 1] = '\0';
      //getchar();
      new->next = new;
      LIST->first = new;
      LIST->last = new;
      LIST->size++;
      return;
    }
    else if(index < LIST->size - 1){
      music aux = LIST->first;
      music newSong = (music) malloc(sizeof(struct song));
      fgets(newSong->name, 11, stdin);
      fgets(newSong->name, 11, stdin);
      newSong->name[strlen(newSong->name) - 1] = '\0';
      int i = 0;
      while(i < index-1){
        aux = aux->next;
        i++;
      }
      music tmp = aux->next;
      aux->next = newSong;
      newSong->next = tmp;
      LIST->size++;
    }
    else if(index == 0){
      music aux;
      music new = (music) malloc(sizeof(struct song));
      new->next = LIST->first;
      LIST->first = new;

    }
    else if( index == LIST->size){
      music new = (music) malloc(sizeof(struct song));
      music aux = LIST->last;
      aux->next = new;
      new->next = LIST->first;
    }
    else{
      printf("Indice invalido.\n");
    }
}
