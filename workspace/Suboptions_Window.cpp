#include "Suboptions_Window.h"
#include <ncurses.h>
#include "Suboption.h"
#include <vector>
#include "Text_buffer.h"
#include <curses.h>



Suboptions_Window::Suboptions_Window()
{
    this->x9 = 0;
    this->y9 = 0;
    this->size_x = 10;
    this->size_y = 10;
    this->displayed = false;  
}
Suboptions_Window::Suboptions_Window(int x8,int y8,int size_x1,int size_y1)
{
    this->x9 = x8;
    this->y9 = y8;
    this->size_x = size_x1;
    this->size_y = size_y1;
    this->displayed = false; 
    
}
Suboptions_Window::Suboptions_Window(int x8,int y8,int size_x1,int size_y1,std::vector<Suboption*> suboptions2)
{
    this->x9 = x8;
    this->y9 = y8;
    this->size_x = size_x1;
    this->size_y = size_y1;
    this->displayed = false; 
    this->Suboptions1 = suboptions2;
    
}
void Suboptions_Window::displayWindow(){
    this->displayed=true;
    move(this->y9,this->x9);
    attrset(COLOR_PAIR(2));
    for(int i = 0;i<this->Suboptions1.size();i++){
        printw(Suboptions1[i]->name);
        for(int j = 0;j<(10-this->Suboptions1[i]->name_len);j++){
           printw(" ");
       }
       move(this->y9+i+1,this->x9);
       
    }
    attrset(COLOR_PAIR(3));
}
std::vector<int> Suboptions_Window::getDimensions(){
    std::vector<int> dimensions;
    dimensions.push_back(this->x9);
    dimensions.push_back(this->y9);
    dimensions.push_back(this->size_x);
    dimensions.push_back(this->size_y);
    return dimensions;

}
std::vector<Suboption*> Suboptions_Window::getSuboptions(){
    return this->Suboptions1;
}
bool Suboptions_Window::isDisplayed(){
    return this->displayed;
}

Suboptions_Window::~Suboptions_Window()
{
}

