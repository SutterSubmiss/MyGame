#ifndef PLAYABLE_CHARACTER_H
#define PLAYABLE_CHARACTER_H
#include "Character.h"
#include <string>
class Playable_Character: public Character
{
public:
	Playable_Character();
	Playable_Character(string name1, int damage1, int defense1, int speed1, int range1);
	char krotka_nazwa();
    void wyswietl();
    bool free_place(vector<Character*> characters5);
    int mojeHP();
	bool atakuj(Character* ofiara);
	void jestes_zaatakowany(int damage1);
    void idz(vector<Character*> characters, int chased_character);
	void idz();
    ~Playable_Character();
    
 
};

#endif // PLAYABLE_CHARACTER_H
