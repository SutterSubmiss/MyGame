#include "Suboption.h"
#include <vector>
#include <string>
Suboption::Suboption()
{
    this->name = "Subopcja";
    this->name_len = 8;
}
Suboption::Suboption(const char* name1, int name_len1)
{
    this->name = name1;
    this->name_len = name_len1;
}
Suboption::~Suboption()
{
}
