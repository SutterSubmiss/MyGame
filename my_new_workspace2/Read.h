#ifndef READ_H
#define READ_H
#include "Suboption.h"

class Read:public Suboption
{  
public:
    Read();
    Read(const char* name1,int name_len1);
    void startSuboption(vector<Character*> character3,Text_buffer* filename1) override;
    void startSuboption() override;
    const char* getName() override;
    ~Read();


};
#endif // SUBOPTIONS_WINDOW_H