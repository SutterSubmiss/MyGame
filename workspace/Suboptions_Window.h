#ifndef SUBOPTIONS_WINDOW_H
#define SUBOPTIONS_WINDOW_H
#include "Window.h"
#include "Suboption.h"
#include "Text_buffer.h"
#include <vector>
class Suboptions_Window:public Window
{
private:
    std::vector<Suboption*> Suboptions1;
public:

    Suboptions_Window();
    Suboptions_Window(int x8,int y8,int size_x1,int size_y1);
    Suboptions_Window(int x8,int y8,int size_x1,int size_y1,std::vector<Suboption*> suboptions2);
    void displayWindow() override;
    std::vector<Suboption*> getSuboptions();
    std::vector<int> getDimensions();
    bool isDisplayed() override;
    ~Suboptions_Window();
    friend class Suboption;

};

#endif // SUBOPTIONS_WINDOW_H
