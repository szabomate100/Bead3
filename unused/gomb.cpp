#include "gomb.hpp"
#include <functional>

using namespace genv;

Gomb::Gomb(int x, int y, int sx, int sy, std::function<void()> fv, std::string szoveg)
    : Widget(x, y, sx, sy), fuggveny(fv), rairva(szoveg)
{
}

void Gomb::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y);

    gout << move_to(_x+10, _y+_y/2) << color(0,0,0) << text(rairva);
}

void Gomb::handle(genv::event ev)
{
    if (kival(ev.pos_x, ev.pos_y) && ev.button==btn_left)
    {
        fuggveny();

    }
}

