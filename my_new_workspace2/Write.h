#ifndef WRITE_H
#define WRITE_H
#include "Suboption.h"
#include <vector>
#include <string>
#include "Text_buffer.h"
class Write:public Suboption
{  
public:
    Write();
    Write(const char* name1,int name_len1);
    void startSuboption(vector<Character*> character3,Text_buffer* filename1) override;
    void startSuboption() override;
    const char* getName() override;
    ~Write();

};

#endif // SUBOPTIONS_WINDOW_H