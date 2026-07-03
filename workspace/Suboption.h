#ifndef SUBOPTION_H
#define SUBOPTION_H
#include <vector>
#include <string>
#include "Text_buffer.h"
class Suboption
{
protected:
    const char* name;
    int name_len;
public:
    Suboption();
    Suboption(const char* name1,int name_len1);
    virtual void startSuboption(vector<Character*> character1,Text_buffer* filename1) = 0;
    virtual void startSuboption() = 0;
    virtual const char* getName() = 0;
    virtual ~Suboption();
    friend class Suboptions_Window;

};

#endif // SUBOPTION_H