#ifndef OPTION_H
#define OPTION_H
#include <string>
#include <vector>
#include "Suboption.h"
using namespace std;
class Option
{
private:
    const char* name;
    int name_len;
    vector<Suboption*> Suboptions;
public:
    Option();
    Option(const char* name1,int len1,vector<Suboption*> suboptions1);
    const char* getName();
    vector<Suboption*> getSuboptions();
    int getLength();
    
    virtual ~Option();

};

#endif // OPTION_H
