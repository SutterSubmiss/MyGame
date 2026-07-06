#include "Window.h"

Window::Window()
{
    this->x9 = 0;
    this->y9 = 0;
    this->size_x = 10;
    this->size_y = 10;
    this->displayed = false;
}
Window::Window(int x8,int y8,int size_x1,int size_y1)
{
    this->x9 = x8;
    this->y9 = y8;
    this->size_x = size_x1;
    this->size_y = size_y1;
    this->displayed = false;
}
Window::~Window()
{
}

