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
void init_image(struct_img *structotheimg);
void init_image2(struct_img *background);
void init_text(struct_text *text);
//void init_text2(struct_text *text);
