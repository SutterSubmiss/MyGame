#ifndef NON_PLAYABLE_CHARACTER_H
#define NON_PLAYABLE_CHARACTER_H
#include "Character.h"
#include <string>
class Non_Playable_Character: public Character
{
    
public:
    static std::vector<Character*> characters;
    Non_Playable_Character();
    Non_Playable_Character(string name1, int damage1, int defense1, int speed1, int range1);
    char krotka_nazwa();
    void wyswietl();
    bool free_place(vector<Character*> characters5);
    int mojeHP();
	bool atakuj(Character* ofiara);
	void jestes_zaatakowany(int damage1);
    void idz();
    void idz(vector<Character*> characters, int chased_character);
    ~Non_Playable_Character();
    

};

#endif // NON_PLAYABLE_CHARACTER_H
