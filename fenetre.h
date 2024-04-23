#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
typedef struct struct_img {
SDL_Surface* image;
SDL_Rect positioninscrenn;
SDL_Rect positionfromimage;
}struct_img;
typedef struct struct_text{
 TTF_Font *font;
 SDL_Color color;
 SDL_Surface* text;
 SDL_Rect postext;
}struct_text;
typedef struct Personne
{
struct_img perso;
struct_img coeur;
struct_text score;
int nbcoeur;
int Vscore;
int direction;//0:droite ,1:gauche , 2:up , 3:down
int deplacement;
double vitesse,acceleration;
int etatA,etatD;
Uint32 dt;
int up;
int velocityY;
int velocityX;
int groundY;
}Personne;

//-----------------other functions
void init_image2(struct_img *background);
//-----------------other functions




//-----------------lot functions
void init(Personne *p,int numperso);
void initPerso(Personne *p);
void afficherPerso(Personne p,SDL_Surface *screen);
void movePerso(Personne *p);
void animerPerso(Personne *p);
void saut(Personne *P,float dt, int posinit) ;
//-----------------lot functions