#include"fenetre.h"
void init_image2(struct_img *background){
background->image=IMG_Load("resources/images/background/background.png");
};
 



void initPerso(Personne *p) {
    p->etatA=0;
    p->etatD=0;
    p->up=0;
    p->velocityX=40;
    p->velocityY=-60;
    p->groundY=40;
//-------init : spritesheet
p->perso.image=IMG_Load("resources/images/sprite sheet/sprite1.png");
p->perso.positionfromimage.x=0;
p->perso.positionfromimage.y=0;
p->perso.positionfromimage.h=47;
p->perso.positionfromimage.w=30;
p->perso.positioninscrenn.x=286;
p->perso.positioninscrenn.y=555;
p->direction=0;
p->deplacement=0;
p->vitesse=0.5; 
p->acceleration=0;
//-------init : coeur
p->coeur.image=IMG_Load("resources/images/coeur/coeur.png");
p->nbcoeur=3;

//-------init : score
TTF_Init();
p->score.font=TTF_OpenFont("resources/fonts/font 1/LLPIXEL3.ttf",50);
p->score.color=(SDL_Color) {0,0,255};
p->score.text=TTF_RenderText_Blended(p->score.font,"0",p->score.color);
p->score.postext.x=100;
p->score.postext.y=0;
p->Vscore=0;
};

void animerPerso(Personne *p){
p->perso.positionfromimage.x=p->perso.positionfromimage.x+p->perso.positionfromimage.w;

if(p->perso.positionfromimage.x>p->perso.image->w-p->perso.positionfromimage.w) {

p->perso.positionfromimage.x=0;

}
if(p->up==1) {

   p->perso.positionfromimage.y=2*p->perso.positionfromimage.h;  
}else {
    p->perso.positionfromimage.y=p->direction*p->perso.positionfromimage.h;
}

};

void afficherPerso(Personne p,SDL_Surface *screen){
SDL_BlitSurface(p.perso.image,&p.perso.positionfromimage,screen,&p.perso.positioninscrenn);

p.coeur.positioninscrenn.x=545;
p.coeur.positioninscrenn.y=5;
switch (p.nbcoeur)
{
case 1:
 SDL_BlitSurface(p.coeur.image,NULL,screen,&p.coeur.positioninscrenn);
    break;
case 2:
 SDL_BlitSurface(p.coeur.image,NULL,screen,&p.coeur.positioninscrenn);
 p.coeur.positioninscrenn.x=545-60;
  SDL_BlitSurface(p.coeur.image,NULL,screen,&p.coeur.positioninscrenn);
    break;
 case 3:
 SDL_BlitSurface(p.coeur.image,NULL,screen,&p.coeur.positioninscrenn);
 p.coeur.positioninscrenn.x=545-60;
 SDL_BlitSurface(p.coeur.image,NULL,screen,&p.coeur.positioninscrenn);
  p.coeur.positioninscrenn.x=545-60-60;
 SDL_BlitSurface(p.coeur.image,NULL,screen,&p.coeur.positioninscrenn);
    break;
}   
 char vsc[12];
 sprintf(vsc,"%d",p.Vscore);

p.score.text=TTF_RenderText_Blended(p.score.font,vsc,p.score.color);
  SDL_BlitSurface(p.score.text,NULL,screen,&p.score.postext);

 



};
void movePerso(Personne *p){

switch (p->direction)
{
case 0:
 p->perso.positioninscrenn.x+=0.5*p->acceleration*(p->dt)*(p->dt) +p->vitesse*p->dt; 
    break;
case 1:
p->perso.positioninscrenn.x-=0.5*p->acceleration*(p->dt)*(p->dt) +p->vitesse*p->dt; 

    break;
 
}
};
void saut(Personne *p,float dt, int posinit) {
    if(p->up==1) {

      switch (p->direction)
      {
      case 0:
      p->perso.positioninscrenn.x+=p->velocityX*dt;
        break;
      
          case 1:
      p->perso.positioninscrenn.x+=(-p->velocityX)*dt;
        break;
      }  

  p->perso.positioninscrenn.y+=p->velocityY*dt;
  p->velocityY+=p->groundY*dt;
  printf("%d\n", p->perso.positioninscrenn.y);
  }
  if( p->perso.positioninscrenn.y>posinit){
p->up=0;

p->perso.positioninscrenn.y=posinit;
  }
};
void init(Personne *p,int numperso){

 p->etatA=0;
    p->etatD=0;
    p->up=0;
    p->velocityX=40;
    p->velocityY=-60;
    p->groundY=40;
//-------init : spritesheet

p->perso.positionfromimage.x=0;
p->perso.positionfromimage.y=0;
p->perso.positionfromimage.h=47;
p->perso.positionfromimage.w=30;
p->perso.positioninscrenn.x=286;
p->perso.positioninscrenn.y=555;
p->direction=0;
p->deplacement=0;
p->vitesse=0.5; 
p->acceleration=0;
//-------init : coeur
p->coeur.image=IMG_Load("resources/images/coeur/coeur.png");
p->nbcoeur=3;

//-------init : score
TTF_Init();
p->score.font=TTF_OpenFont("resources/fonts/font 1/LLPIXEL3.ttf",50);
p->score.color=(SDL_Color) {0,0,255};
p->score.text=TTF_RenderText_Blended(p->score.font,"0",p->score.color);
p->score.postext.x=100;
p->score.postext.y=0;
p->Vscore=0;
switch (numperso)
{
case 0:
p->perso.image=IMG_Load("resources/images/sprite sheet/sprite1.png");
  break;
case 1:
p->perso.image=IMG_Load("resources/images/sprite sheet/sprite2.png");
  break;
 
}







};