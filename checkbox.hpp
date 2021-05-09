#ifndef CHECKBOX_HPP_INCLUDED
#define CHECKBOX_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "JatekMester.hpp"

class CheckBox : public Widget {
protected:
    bool checked;
public:
    CheckBox(int x, int y, int sx, int sy, JatekMester jatekMester);
    virtual void draw() ;
    virtual void handle(genv::event ev);
    virtual bool checked_e();
};


#endif
