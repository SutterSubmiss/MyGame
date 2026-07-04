#include "Playable_Character.h"
#include <ncurses.h>
#include <curses.h>

#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <cmath>
MEVENT event;
Playable_Character::Playable_Character()
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

Playable_Character::Playable_Character(string name1, int damage1, int defense1, int speed1, int range1)
{
     this->name = name1;
	this->hp = 100;
	this->damage = damage1;
	this->defense = defense1;
	this->speed = speed1;
	this->range = range1;
	this->x = 2;
	this->y = 2;
}

void Playable_Character::wyswietl() {
 move(this->y,this->x);
 insch(this->krotka_nazwa());
 
}
char Playable_Character::krotka_nazwa(){
	return this->name[0];
	

}
int Playable_Character::mojeHP(){
    return this->hp;
}
bool Playable_Character::free_place(vector<Character*> characters5){
    for(int j =0;j< characters5.size();j++){
     if(this->y == characters5[j]->y && this->x == characters5[j]->x && this->krotka_nazwa() != characters5[j]->krotka_nazwa()){
       return false;

     }
 }
 return true; 
}
void Playable_Character::idz(vector<Character*> characters, int chased_character) {
 attrset(COLOR_PAIR(3));
 int direction = 0;
 for(int i = 0;i<=this->speed;i++){
 direction = getch();
 move(this->y,this->x);
 addch(' ');
 switch(direction){
 case 261:
    if(this->x < 75){
        	this->x =(this->x)+ 2;
            if(this->free_place(characters) == false){
                  this->x =(this->x)-2;
    }
    }
 case 260:
   if(this->x > 1){
  	this->x =(this->x)-1; 
    this->y-=1;
    if(this->free_place(characters) == false){
        this->x =(this->x)+1;
        this->y =(this->y)+1;
    }
  }
 case 258: 
   if(this->y < 20){
   	this->y = (this->y)+2;
    if(this->free_place(characters) == false){
        this->y =(this->y)-2;
    }
    
   } 
 case 259:
   if(this->y > 1){
 	this->y = (this->y)-1;
    if(this->free_place(characters) == false){
        this->y =(this->y)+1;
    }
   } 

 }
 


 move(this->y,this->x);
 addch(this->krotka_nazwa());
 }
}

void Playable_Character::idz(){
    
}
bool Playable_Character::atakuj(Character* ofiara) {
    //int clicked = 0;
    //clicked = getch();
    //if(clicked == KEY_MOUSE){
      //if(getmouse(&event) == OK && event.bstate & BUTTON1_CLICKED){  
         //if(event.y == ofiara->y && event.x == ofiara->x){
	       if ((pow(pow(this->x-ofiara->x,2),1.0/2.0) < this->range) &&  (pow(pow(this->y-ofiara->y,2),1.0/2.0) < this->range)){
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
         //}
      //}
    //}
  
 
}

void Playable_Character::jestes_zaatakowany(int damage1) {
 this->hp = this->hp-(damage1-(this->defense/2));
 
 
}

Playable_Character::~Playable_Character(){
    
}

