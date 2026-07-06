#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <vector>
using namespace std;
class Character
{

protected:
	string name;
	int damage;
	int defense;
	int speed;
	int range;
	int hp;
	
public:
    int x;
	int y;
	Character();
	Character(string name1, int damage1, int defense1, int speed1, int range1);
	virtual char krotka_nazwa()=0;
    virtual bool free_place(vector<Character*> characters5)=0;
    virtual void wyswietl()=0;
    virtual int mojeHP()=0;
    virtual void idz()=0;
    virtual void idz(vector<Character*> characters, int chased_character)=0;
	virtual bool atakuj(Character* ofiara)=0;
	virtual void jestes_zaatakowany(int damage1)=0;
    virtual ~Character();
    friend class Text_buffer;
    friend class Write;
 
 
};
#endif