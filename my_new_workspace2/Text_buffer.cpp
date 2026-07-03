#include "Text_buffer.h"
#include <vector>
#include <string>
#include <ncurses.h>
#include <curses.h>
#include "Character.h"

static int x1;
static int y1;
Text_buffer::Text_buffer()
{
    for(int i = 0; i < 20; i++){
        this->buffer.push_back("");
        for(int j = 1; j < 20; j++){
            this->buffer[i]+=' ';
        }
    }
    
}
Text_buffer::Text_buffer(int x2,int y2,std::vector<std::string> buffer1)
{
    Default_buffer* Def_buf = new Default_buffer(x2,y2);
    buffer1 = Def_buf->buffer1;
    for(int i = 0; i < y2; i++){
        this->buffer.push_back("");
        for(int j = 1; j < x2-1; j++){
            this->buffer[i]+=buffer1[i][j];
        }
    }
    
}
std::vector<std::string> Text_buffer::getBuffer(){
    return this->buffer;
    
}
void Text_buffer::addToBuffer(char char1,int x4,int y4){
        char holder = char1;
        char holder2 = this->buffer[y4][x4];
        this->buffer[y4][x4] = char1;
        for(int i = y4; i < this->buffer.size(); i++){
                for(int j = 0; j < this->buffer[i].length()-1; j++){
                    if(j==0 && i==y4){
                        j=x4+1;
                    }
                    holder=holder2;
                    holder2=this->buffer[i][j];
                    this->buffer[i][j] =holder;
                }
        }
    
    
}
void Text_buffer::removeFromBuffer(char char1,int x4,int y4){
        for(int i = y4; i < this->buffer.size(); i++){
                for(int j = 0; j < this->buffer[i].length()-2; j++){
                    if(j==0 && i==y4){
                        j=x4-1;
                    }
                    this->buffer[i][j] = this->buffer[i][j+1];
                }
        }
    
    
}
void Text_buffer::writeToStaticVars(int x5,int y5){
    y1=y5;
    x1=x5;
}
void Text_buffer::printOutBuffer(){
    for(int i =0; i < this->buffer.size(); i++){
                for(int j = 0; j < this->buffer[i].length(); j++){
                     addch(this->buffer[i][j]);
                     
                }
                y1+=1;
                move(y1,x1);
}
}


Text_buffer::~Text_buffer()
{
}

