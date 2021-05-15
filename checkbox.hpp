#ifndef CHECKBOX_HPP_INCLUDED
#define CHECKBOX_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "JatekMester.hpp"

class CheckBox : public Widget {
protected:
    bool checked;
    JatekMester *jatekMester;
    int whichPlayerChecked;
    int my_ix;  // x coordinate of the checkbox on the board
    int my_iy;  // y coordinate
public:
    CheckBox(int x, int y, int sx, int sy, int ix, int iy, JatekMester *_jatekMester);
    void set_index(int ix, int iy);
    virtual void draw() ;
    virtual void handle(genv::event ev);
    virtual bool checked_e();
};


#endif
