#ifndef WINDOW_H
#define WINDOW_H
#include <vector>
#include "Text_buffer.h"
#include "Suboption.h"
class Window
{
protected:
    int x9;
    int y9;
    int size_x;
    int size_y;
    bool displayed;
public:
    Window();
    Window(int x8,int y8,int size_x1,int size_y1);
    virtual void displayWindow() = 0;
    virtual bool isDisplayed() = 0;
    virtual std::vector<int> getDimensions() = 0;
    virtual std::vector<Suboption*> getSuboptions() =0;
    virtual ~Window();

};

#endif // WINDOW_H
