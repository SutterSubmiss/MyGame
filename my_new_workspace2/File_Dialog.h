#ifndef FILE_DIALOG_H
#define FILE_DIALOG_H
#include "Window.h"
#include "Suboption.h"
#include "Text_buffer.h"
#include <vector>
class File_Dialog:public Window
{
private:
    std::vector<Suboption*> Suboptions1;
public:

    File_Dialog();
    File_Dialog(int x8,int y8,int size_x1,int size_y1);
    File_Dialog(int x8,int y8,int size_x1,int size_y1,std::vector<Suboption*> suboptions2);
    void displayWindow() override;
    void clickOnWindow(int y10, Text_buffer* buffer2);
    std::vector<int> getDimensions();
    std::vector<Suboption*> getSuboptions();
    bool isDisplayed() override;
    ~File_Dialog();

};

#endif // SUBOPTIONS_WINDOW_H
