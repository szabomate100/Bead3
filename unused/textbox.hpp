#ifndef TEXTBOX_HPP_INCLUDED
#define TEXTBOX_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"

using namespace std;

class textbox : public Widget {
protected:
    bool kijel;
    std::string beszov;
public:
    textbox(int x, int y, int sx, int sy);
    virtual void draw();
    virtual void handle(genv::event ev);
    string miszoveg();
};

#endif 