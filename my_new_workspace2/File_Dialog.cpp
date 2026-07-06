#include "File_Dialog.h"
#include <ncurses.h>
#include <curses.h>
#include "Suboption.h"
#include <vector>
#include "Text_buffer.h"

File_Dialog::File_Dialog()
{
    this->x9 = 10;
    this->y9 = 10;
    this->size_x = 250;
    this->size_y = 4;
    this->displayed = false;  
}
File_Dialog::File_Dialog(int x8,int y8,int size_x1,int size_y1)
{
    this->x9 = x8;
    this->y9 = y8;
    this->size_x = 25;
    this->size_y = 4;
    this->displayed = false; 
    
}
File_Dialog::File_Dialog(int x8,int y8,int size_x1,int size_y1,std::vector<Suboption*> suboptions2)
{
    this->x9 = x8;
    this->y9 = y8;
    this->size_x = size_x1;
    this->size_y = size_y1;
    this->displayed = false; 
    this->Suboptions1 = suboptions2;
    
}
void File_Dialog::displayWindow(){
    this->displayed=true;
    move(this->y9,this->x9);
    attrset(COLOR_PAIR(2));
    for(int i = 0;i<25;i++){
        printw(" ");
      
       }
    move(this->y9+1,this->x9);  
    for(int j = 0;j<7;j++){
        printw(" ");
        
       }
    
    if(this->Suboptions1[0]->getName()[0] =='Z'){
        printw("Zapisz jako");
    }
    else if(this->Suboptions1[0]->getName()[0] =='O'){
       printw("Otworz plik"); 
    }
    for(int j = 0;j<7;j++){
        printw(" ");
       
       }  
    move(this->y9+2,this->x9); 
    printw(" ");
    attrset(COLOR_PAIR(3));
    for(int i = 0;i<23;i++){
        printw(" ");
        
       }
    attrset(COLOR_PAIR(2));   
    printw(" ");
    move(this->y9+3,this->x9);  
    for(int j = 0;j<25;j++){
        printw(" ");
        
       }
    move(this->y9+2,this->x9+1);       
    attrset(COLOR_PAIR(3));
    
}
std::vector<int> File_Dialog::getDimensions(){
    std::vector<int> dimensions;
    dimensions.push_back(this->x9);
    dimensions.push_back(this->y9);
    dimensions.push_back(this->size_x);
    dimensions.push_back(this->size_y);
    return dimensions;

}
std::vector<Suboption*> File_Dialog::getSuboptions(){
    return this->Suboptions1;

}
bool File_Dialog::isDisplayed(){
    return this->displayed;
}

File_Dialog::~File_Dialog()
{
}



