#ifndef TEXT_BUFFER_H
#define TEXT_BUFFER_H
#include <vector>
#include <string>
#include "Character.h"

class Text_buffer
{
private:
    std::vector<std::string> buffer; 
    int start_x;
    int start_y;   
public:

    Text_buffer();
    Text_buffer(int x2,int y2,std::vector<std::string> buffer1 = std::vector<std::string>());
    class Default_buffer {
          public:
              std::vector<std::string> buffer1;
               Default_buffer (){
                   for(int i = 0; i < 20; i++){
                      this->buffer1.push_back("");
                      for(int j = 1; j < 20; j++){
                          this->buffer1[i].push_back(' ');
                      }
                   }
              }
              Default_buffer (int x3, int y3){
                   for(int i = 0; i < y3; i++){
                      this->buffer1.push_back("");
                      for(int j = 1; j < x3; j++){
                          this->buffer1[i].push_back(' ');
                      }
                   }
              }
               
              ~Default_buffer(){};
           };
    std::vector<std::string> getBuffer();
    void addToBuffer(char char1,int x4,int y4);
    void removeFromBuffer(char char1,int x4,int y4);
    void writeToStaticVars(int x5,int y5);
    void printOutBuffer();
    virtual ~Text_buffer();
    friend class Write;
    friend class Read;

};

#endif // TEXT_BUFFER_H
