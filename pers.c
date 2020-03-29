personnage initialiser_perso(char* nom, char* nom_fich,int nbr)
{
personnage p;
int i;
p.nbrIm=nbr;
char nomIm[30];
for(i=0;i<p.nbrIm;i++)
{
fprints(nomIm,"%s_%d.png",nom_fich,i);
p.pers[i]=IMG_Load(nomIm);
if (p.pers[i]==NULL)
	{
	printf("Unable to load bitmap : %s\n" , IMG_GetError());
}
}
strcpy(pname,nom);
p.numIm=0;
p.direction=1;
p.pos.x=50;
p.pos.y=400;
p.pos.w=p.pers[0]->w;
p.pos.h=p.pers[0]->h;
p.s=initialiser_score();
p.v=initialiser_vie();
}
void  afficher_personnage(personnage p,SDL-Surface *ecran)
{
blit(p.pers[p.numIm],NULL,ecran,&p.pos);
}
