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
    int my_ix;
    int my_iy;
public:
    CheckBox(int x, int y, int sx, int sy, JatekMester *_jatekMester);
    void set_index(int _ix, int _iy);
    virtual void draw() ;
    virtual void handle(genv::event ev);
    virtual bool checked_e();
};


#endif
