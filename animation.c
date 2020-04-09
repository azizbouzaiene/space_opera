void animer_hero(hero *h,movement movement)
{
	static int tempsActuel=0;
	static int tempsPrecedent=0;

	if (h->direction==RIGHT)
		h->sprite.image=IMG_Load("./img/hero/safwen_right.png");
	if (h->direction==LEFT)
		h->sprite.image=IMG_Load("./img/hero/safwen_left.png");

	switch(movement)
	{
		case IDLE:
			h->sprite.frame.y=0;
			h->sprite.maxframe=3;
			break;
		case WALK:
			h->sprite.frame.y=h->sprite.frame.h;
			h->sprite.maxframe=4;
			h->movement=WALK;
			break;
		case JUMP:
			h->sprite.frame.y=2*h->sprite.frame.h;
			h->sprite.maxframe=2;
			h->movement=JUMP;
			break;
		case PUNCH:
			h->sprite.frame.y=3*h->sprite.frame.h;
			h->sprite.maxframe=3;
			h->movement=PUNCH;
			break;
		case KICK:
			h->sprite.frame.y=4*h->sprite.frame.h;
			h->sprite.maxframe=3;
			h->movement=KICK;
			break;
		case HIT:
			h->sprite.frame.y=5*h->sprite.frame.h;
			h->sprite.maxframe=4;
			h->movement=HIT;
			break;
		case DIE:
			h->sprite.frame.y=6*h->sprite.frame.h;
			h->sprite.maxframe=2;
			h->movement=DIE;
			break;
	}
	tempsActuel=SDL_GetTicks();
	if (tempsActuel-tempsPrecedent >200)
	{
		if (h->sprite.curframe >= h->sprite.maxframe)
		{		
			h->sprite.curframe=0;
			h->movement=IDLE; //to not interrupt animation (but can be interrupted with SDL_KEYUP)
		}

		h->sprite.frame.x=h->sprite.curframe*h->sprite.frame.w;
		tempsPrecedent=tempsActuel;
		h->sprite.curframe+=1;
	}
}
