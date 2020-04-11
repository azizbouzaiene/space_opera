#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>


typedef struct 
{
 int jump,walk,hit,kick,die,punch;
}movement;

typedef struct 
{
SDL_Surface* pers[20];
SDL_Surface *herosprite;
 SDL_Rect  heroposrect;
int nbrIm;
int numIm;
int direction;
movement movement;
char name[20];
}personnage;

personnage initialiser_personnage();
void  afficher_personnage(personnage p,SDL-Surface *ecran);
