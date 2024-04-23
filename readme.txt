-------------------helpful links :

link sprite: https://sanderfrenken.github.io/Universal-LPC-Spritesheet-Character-Generator/#?body=Body_color_light&head=Human_male_light
link font:https://www.dafont.com/search.php?q=p%EExel
link wallpaper :https://wallpapercave.com/w/wp1933953

-------------------what i need as resources :

----images :
-2*spritesheet 
-coeur
-background
----fonts:
-LLPIXEL3.ttf
------------------structure going to be used :

----strcuture pour les images

typedef struct struct_img {
SDL_Surface* image;
SDL_Rect positioninscrenn;
SDL_Rect positionfromimage;
}struct_img;
----

----strcuture pour les textes
typedef struct struct_text{
 TTF_Font *font;
 SDL_Color color;
 SDL_Surface* text;
 SDL_Rect postext;
}struct_text;
----

----strcuture pour perso
typedef struct Personne
{
struct_img perso;
struct_img coeur;
struct_text score;
int nbcoeur;
int Vscore;
int direction;//0:droite ,1:gauche , 2:up , 3:down
}Personne;

------------------entete des fontion :
void init(Personne *p,int numperso);
void initPerso(Personne *p);
/*
posSprite.x=0;
posSprite.y=0;
posSprite.w=47;
posSprite.h=30;

*/
void afficherPerso(Personne p,SDL_Surface *screen);
/*posSprite %*/
void movePerso(Personne *p);
void animerPerso(Personne *p);
/*
si(posSprite.x=largeurSprite-posSprite.w)//sernier frame atteint
	posSprite.x=0;//revenir au premier frame
sinon
	posSprite.x=posSprite.x+posSprite.w//avancer au frame
suivantt
fin si
posSprite.y=direction*posSprite.h//se positionner dans la ligne coorespondant a la direction
*/
//------saut voir atelier
------------------structure menu :
-------debut 
init entity
----boucle
display entity
read the event
if direction dans 0 /1
 move entity 
 animate entity
----fin boucle
-------fin
