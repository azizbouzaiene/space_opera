#include "scoreVie.h"
typedef struct 
{
SDL_Surface* pers[20];
int nbrIm;
int numIm;
int direction;
SDL_Rect pos;
char name[20];
score s;
vie v;
}personnage;
personnage initialiser_personnage();
void  afficher_personnage(personnage p,SDL-Surface *ecran);
