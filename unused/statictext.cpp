#include "statictext.hpp"
#include "graphics.hpp"
using namespace genv;
using namespace std;

statictext::statictext(int x, int y, string szoveg)
: Widget(x,y,gout.twidth(szoveg)+10,gout.cascent() + gout.cdescent() + 10), szov(szoveg)
{
}

void statictext::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << text(szov);
}

void statictext::handle(event ev)
{
}