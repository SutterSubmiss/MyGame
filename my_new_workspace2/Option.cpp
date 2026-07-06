#include "Option.h"
#include <string>
using namespace std;
Option::Option()
{
    this->name = "Opcja";
    this->name_len = 5;
}
Option::Option(const char* name1,int len1, vector<Suboption*> suboptions1)
{
    this->name = name1;
    this->name_len = len1;
    this->Suboptions = suboptions1;
}
const char* Option::getName()
{
   return this->name;
}

vector<Suboption*> Option::getSuboptions()
{
   return this->Suboptions;
}

int Option::getLength()
{
   return this->name_len;
}
Option::~Option()
{
}

