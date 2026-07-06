#include <vector>
#include <string>
#include "Write.h"
#include "Text_buffer.h"
#include <iostream>
#include <fstream>
#include <ncurses.h>
#include <curses.h>
#include <Character.h>
Write::Write()
{
    this->name = "Zapisz";
    this->name_len = 6;
    
}
Write::Write(const char* name1,int name_len1)
{
    this->name = name1;
    this->name_len = name_len1;
}
void Write::startSuboption(vector<Character*> character3,Text_buffer* filename1)
{
    

    std::ofstream File1;
    File1.open("/home/kacsus/Dokumenty/"+filename1->buffer[0]+".txt",std::ios::app);
    for(int i = 0; i < character3.size(); i++){
        File1<<character3[i]->x<<";";
        File1<<character3[i]->y<<";";;
        File1<<character3[i]->hp;
        File1<<"\n";

    }
    File1.close();

}
void Write::startSuboption()
{
   
    

}
const char* Write::getName(){
     return this->name;
    
    }
Write::~Write(){
}
