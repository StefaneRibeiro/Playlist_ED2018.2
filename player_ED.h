#ifndef __PLAYER
#define __PLAYER


//Define uma estrutura de uma música.
struct song;

//Define um ponteiro para estrutura song.
typedef struct song *music;

//Define uma estrutura que contêm uma coleção de músicas.
struct player;

//Define um ponteiro para a estrutura player.
typedef struct player *play_list;

play_list new_list();

void show_playlist(play_list LIST);

void insertion_music(play_list LIST, int index);

void play(play_list LIST, int index);
#endif
