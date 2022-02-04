#ifndef ANBM_INITIALIZED
#define ANBM_INITIALIZED
#include <stdio.h>
#ifndef ANBM_X
#define ANBM_X 80
#endif

#ifndef ANBM_Y
#define ANBM_Y 24
#endif

void anbm_print(int bitmap[ANBM_Y-5][ANBM_X]){
 for(int y=0;y<ANBM_Y;++y){
     for(int x=0;x<ANBM_X;++x){
         printf("\e[48;5;%dm ",bitmap[y][x]);
     }
     printf("\e[0m\n");
 }
}
void anbm_reset(int bitmap[ANBM_Y][ANBM_X],int resetcolor){
 for(int y=0;y<ANBM_Y;++y){
     for(int x=0;x<ANBM_X;++x){
         bitmap[y][x]=resetcolor;
     }
 }
}
#endif
