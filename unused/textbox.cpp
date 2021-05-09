#include "textbox.hpp"
#include "graphics.hpp"


using namespace genv;
using namespace std;

textbox::textbox(int x, int y, int sx, int sy)
: Widget(x,y,sx,sy), kijel(false)
{
}


void textbox::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y);
    if (kijel){
        gout << move_to(_x+2, _y+2) << color (0,0,0) << line(0,_size_y-3);
        gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y) 
             << color(0,0,0) << move_to(_x+5, _y+15) << text(beszov) << move_to(_x+5+gout.twidth(beszov), _y+15); 
    }
}

void textbox::handle(event ev)
{
    int betu=0;
    if (ev.type==ev_mouse && kival(ev.pos_x, ev.pos_y) && ev.button==btn_left){
        kijel=true;
    }
    if (ev.type==ev_key){
    if (ev.keycode >=32 && ev.keycode < 256){
        betu=ev.keycode; 
        beszov+=betu;
    }
    if (ev.keycode == key_backspace && beszov.length()>0){
        beszov.pop_back();
    }
    }
}

string textbox::miszoveg(){
    return beszov;
}
