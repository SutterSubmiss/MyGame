#include "Character.h"
#include <ncurses.h>
#include <curses.h>
Character::Character() {
	this->name = "Jack";
	this->hp = 100;
	this->damage = 25;
	this->defense = 25;
	this->speed = 25;
	this->range = 25;
	this->x = 10;
	this->y= 10;
}
Character::Character(string name1, int damage1, int defense1, int speed1, int range1) {
	this->name = name1;
	this->hp = 100;
	this->damage = damage1;
	this->defense = defense1;
	this->speed = speed1;
	this->range = range1;
	this->x = 10;
	this->y = 10;
 
 
}


Character::~Character() {
 
}
