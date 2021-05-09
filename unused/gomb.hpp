#ifndef GOMB_HPP_INCLUDED
#define GOMB_HPP_INCLUDED

#include "widgets.hpp"
#include <functional>

class Gomb : public Widget
{
protected:
    std::function<void()> fuggveny;
    std::string rairva;
public: 
    Gomb(int x, int y, int sx, int sy, std::function<void()> fuggveny, std::string rairva);
    virtual void draw();
    virtual void handle(genv::event ev);
};

#endif