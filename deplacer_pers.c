void deplacerhero(hero *hr,Input input)
{
	
	if(input.right)
	{
		hr->heropos.x+=5;
	}
	if(input.left)
	{
		hr->heropos.x-=5;
	}
	if(input.up)
		hr->heropos.y-=5;
			
	if(input.crouch)
		hr->heropos.y+=5;
}
while(SDL_PollEvent(&event))
    {
     switch(event.type)
     {
        case SDL_KEYDOWN:
          if((event.key.keysym.sym == SDLK_LEFT )|| (event.key.keysym.sym ==SDLK_q))
          {
           positionecran.x -= 5;
           SDL_BlitSurface(image,NULL,screen,&positionecran);
         }
          if((event.key.keysym.sym == SDLK_RIGHT)|| (event.key.keysym.sym ==SDLK_d))
          {
            positionecran.x += 5;
           SDL_BlitSurface(image,NULL,screen,&positionecran);
         }
         if((event.key.keysym.sym == SDLK_UP)|| (event.key.keysym.sym ==SDLK_z))
          {
           
           positionecran.y -= 5;
            SDL_BlitSurface(image,NULL,screen,&positionecran);
         }
          if((event.key.keysym.sym == SDLK_DOWN)|| (event.key.keysym.sym ==SDLK_s))
          {
          positionecran.y += 5;
           
            SDL_BlitSurface(image,NULL,screen,&positionecran);
         }
        break; case SDL_QUIT:

        break;
      }
