#ifndef STATICTEXT_HPP_INCLUDED
#define STATICTEXT_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"

using namespace std;

class statictext : public Widget {
protected:
    string szov;
public:
    statictext(int x, int y, string szov);
    virtual void draw() ;
    virtual void handle(genv::event ev);
};


#endif 