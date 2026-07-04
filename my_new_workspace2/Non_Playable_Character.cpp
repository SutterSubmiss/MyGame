#include "Non_Playable_Character.h"
#include <ncurses.h>
#include <curses.h>
#include <cmath>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
Non_Playable_Character::Non_Playable_Character()
{
    this->name = "Jack";
	this->hp = 100;
	this->damage = 25;
	this->defense = 25;
	this->speed = 25;
	this->range = 25;
	this->x = 20;
	this->y= 15;
}
Non_Playable_Character::Non_Playable_Character(string name1, int damage1, int defense1, int speed1, int range1)
{
    this->name = name1;
	this->hp = 100;
	this->damage = damage1;
	this->defense = defense1;
	this->speed = speed1;
	this->range = range1;
	this->x = rand()%75;
	this->y = rand()%20;
}


void Non_Playable_Character::wyswietl() {
 move(this->y,this->x);
 insch(this->krotka_nazwa());
 
}
char Non_Playable_Character::krotka_nazwa(){
	return this->name[0];
	

}
int Non_Playable_Character::mojeHP(){
    return this->hp;
}
void Non_Playable_Character::idz(){
    
}
bool Non_Playable_Character::free_place(vector<Character*> characters5){
    for(int j =0;j< characters5.size();j++){
     if(this->y == characters5[j]->y && this->x == characters5[j]->x && this->krotka_nazwa() != characters5[j]->krotka_nazwa()){
       return false;

     }
 }
 return true; 
}
void Non_Playable_Character::idz(vector<Character*> characters, int chased_character){
 attrset(COLOR_PAIR(3));
 bool free_place = true;
 for(int i = 0;i<=this->speed;i++){
 move(this->y,this->x);
 addch(' ');
 if(pow(pow(characters[chased_character]->x-this->x,2),1.0/2.0) > pow(pow(characters[chased_character]->y-this->y,2),1.0/2.0) ){
     if(characters[chased_character]->x>this->x && this->x < 75){
         this->x =(this->x)+ 2;
         if(this->free_place(characters) == false){
                  this->x =(this->x)-2;
         }
     }
     else if(characters[chased_character]->x<this->x && this->x > 1 && this->y>1){
         this->x =(this->x)-1; 
         this->y-=1;
         if(this->free_place(characters) == false){
                  this->x =(this->x)+1;
                  this->y =(this->y)+1;

         }
     }
 }
 else{
      if(characters[chased_character]->y>this->y && this->y < 20){
         this->y =(this->y)+ 2;
         if(this->free_place(characters) == false){
                  this->y =(this->y)-2;
         }
     }
     else if(characters[chased_character]->y<this->y && this->y > 1){
         this->y =(this->y)-1; 
         if(this->free_place(characters) == false){
                  this->y =(this->y)+1;
         }
     }
 }

  move(this->y,this->x);
  addch(this->krotka_nazwa());
 } 
 
 }


bool Non_Playable_Character::atakuj(Character* ofiara) {
	if ((pow(pow(this->x-ofiara->x,2),1.0/2.0) < this->range) &&  (pow(pow(this->y-ofiara->y,2),1.0/2.0) < this->range)){
        
             ofiara->jestes_zaatakowany(this->damage);
             move(ofiara->y,ofiara->x);
             attrset(COLOR_PAIR(4));
             addch(ofiara->krotka_nazwa());
             move(ofiara->y,ofiara->x);
             this_thread::sleep_for(chrono::seconds(1));
             return true;
             
	}
	else{
        return false;
 	}
  
 
}
void Non_Playable_Character::jestes_zaatakowany(int damage1) {

 this->hp = this->hp-(damage1-(this->defense/2));
 if(this->hp <= 0){
     move(this->y,this->x);
     addch(' ');
     //delete this;
     //printw("aaa");
 }
 
}
Non_Playable_Character::~Non_Playable_Character()
{
}

