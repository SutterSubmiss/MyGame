#include <vector>
#include <string>
#include "Read.h"
#include "Text_buffer.h"
#include <iostream>
#include <fstream>
#include <ncurses.h>
Read::Read()
{
    this->name = "Wczytaj";
    this->name_len = 7;
    
}
Read::Read(const char* name1,int name_len1)
{
    this->name = name1;
    this->name_len = name_len1;
}
void Read::startSuboption(vector<Character*> character3,Text_buffer* filename1)
{
    
   /* std::string line;
    std::ifstream File1;
    int i =0;
    while(getline(File1,line)){
        character3[i]-> = line;
        
        i=i+1;
    }

    File1.close();*/

}
void Read::startSuboption()
{
   
    

}
const char* Read::getName(){
     return this->name;
    
    }
Read::~Read(){
}
