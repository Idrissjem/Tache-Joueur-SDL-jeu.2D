#include"fenetre.h"
void init_image(struct_img *structotheimg){

structotheimg->image=IMG_Load("logo.png");
//structotheimg->positionfromimage.x=120;
//structotheimg->positionfromimage.y=132;
//structotheimg->positionfromimage.h=205;
//structotheimg->positionfromimage.w=360;
structotheimg->positioninscrenn.x=150;
structotheimg->positioninscrenn.y=260;
};
void init_image2(struct_img *background){
background->image=IMG_Load("voiture.png");
//background->positionfromimage.x=120;
//background->positionfromimage.y=132;
//background->positionfromimage.h=205;
//background->positionfromimage.w=360;
//background->positioninscrenn.x=150;
//background->positioninscrenn.y=260;
};
 
void init_text(struct_text *text){
TTF_Init();
text->font=TTF_OpenFont("super.ttf",50);
text->color=(SDL_Color) {0,0,255};
text->text=TTF_RenderText_Blended(text->font,"BMW",text->color);
text->postext.x=190;
text->postext.y=326;
};
/*
void init_text2(struct_text *text){
TTF_Init();
text->font=TTF_OpenFont("font.ttf",28);
text->color=(SDL_Color) {0,255,0};
text->text=TTF_RenderText_Blended(text->font,"farmer",text->color);
text->postext.x=0;
text->postext.y=0;
};*/
