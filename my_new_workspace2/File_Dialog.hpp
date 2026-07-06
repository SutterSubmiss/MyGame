#ifndef FILE_DIALOG_HPP
#define FILE_DIALOG_HPP
#include "Window.h"
#include "Suboption.h"
#include "Text_buffer.h"
#include <vector>
class FileDialog:public Window
{
private:
    std::vector<Suboption*> Suboptions1;
public:

    FileDialog();
    FileDialog(int x8,int y8,int size_x1,int size_y1);
    FileDialog(int x8,int y8,int size_x1,int size_y1,std::vector<Suboption*> suboptions2);
    void displayWindow() override;
    void clickOnWindow(int y10, Text_buffer* buffer2);
    std::vector<int> getDimensions();
    bool isDisplayed() override;
    ~FileDialog();
    //friend class Suboption;

};

#endif // SUBOPTIONS_WINDOW_H