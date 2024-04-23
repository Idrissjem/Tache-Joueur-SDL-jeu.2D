#include"fenetre.h"
int main() {


//----------------declaration
//int condition=0;
//------base mawjoudine
SDL_Surface* screen ; 
struct_img background;
int quitter;
SDL_Event event;
//-------
//struct_img structotheimg;
//--declaration:text
//struct_text testext; 
//struct_text monjitext; 
//--declaration:music mp3 continue
//Mix_Music *musique1;
//--declaration:music wav bref
//Mix_Chunk *brefsound;




//----------initlisation
SDL_Init(SDL_INIT_TIMER | SDL_INIT_AUDIO | SDL_INIT_VIDEO);
screen= SDL_SetVideoMode(500, 700, 32, SDL_RESIZABLE|SDL_HWSURFACE);
quitter=1;
//----initlisation : image 
init_image2(&background);
//init_image(&structotheimg);
//----initlisation : text 
//init_text(&testext); 
//init_text2(&monjitext);
//----initlisation : audio 
//Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 1024);
//----initlisation : music bref sound 
//musique1=Mix_LoadMUS("music.mp3");
//brefsound=Mix_LoadWAV("bref.wav");
//--------------------
//Mix_PlayMusic(musique1,1);
  
  
  
  
while(quitter){

SDL_BlitSurface(background.image,NULL,screen,NULL);
//SDL_BlitSurface(structotheimg.image,NULL,screen,&structotheimg.positioninscrenn);
//if(condition==1){
//SDL_BlitSurface(testext.text,NULL,screen,&testext.postext);}
//SDL_BlitSurface(monjitext.text,NULL,screen,&monjitext.postext);
   SDL_PollEvent(&event);
switch(event.type){
  
  case SDL_QUIT:
  quitter=0;
  break;
  
  
///-------keyenzel 3la button mel clavier
  case SDL_KEYDOWN:
switch(event.key.keysym.sym) {
case SDLK_DOWN:

//Mix_PlayChannel(-1, brefsound, 0);
break;
case SDLK_UP:
//Mix_VolumeMusic(0); 
break;
case SDLK_a: 
break;
case SDLK_SPACE:
break;
}
break;
///---------




///ki y7arek souris
case SDL_MOUSEMOTION:

break;

//------




//-------ki yenzel 3la souris
case SDL_MOUSEBUTTONDOWN:
switch (event.button.button){
case SDL_BUTTON_LEFT:
//if(158<=event.motion.x &&event.motion.x <=314 &&269<=event.motion.y &&event.motion.y<=432){
//condition=1;}

printf("x=%d,y=%d\n",event.motion.x,event.motion.y);
SDL_Delay(1000);
break;
   case SDL_BUTTON_RIGHT:
   break;

}
break;
//--------






}

SDL_Flip(screen);

}


//--------------liberation
//--liberation image
SDL_FreeSurface(background.image);
//SDL_FreeSurface(structotheimg.image);
//--liberation text
//SDL_FreeSurface(farmertext.text);
//SDL_FreeSurface(monjitext.text);
//--liberation music
//Mix_FreeMusic(musique1);
//Mix_FreeChunk(brefsound);
//Mix_CloseAudio();
SDL_Quit();
//----------
}
